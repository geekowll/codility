int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    std::bitset<64> bits(N);
    auto str = bits.to_string();
    
    auto pos = str.find_first_of("1");
    str = str.substr(pos);

    auto count = 0, max = 0;
    
    for(auto itr = str.begin(); itr != str.end(); )
    {
        auto adj = itr + 1;
        
        while(adj != str.end() && *adj != *itr){
            ++count;
            ++adj;
        }
        
        if( count > max && adj != str.end())
            max = count;
        
        count = 0;
        
        itr = adj;
    }
    
    return max;
}
