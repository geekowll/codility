int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    uint64_t east = 0, count = 0;
    
    for(const auto val : A){
        if(val == 0)
            east++;
        else if(val == 1){
            count += east;
        }
    }
    
    return ( count > 1000000000 ) ? -1 : count;
}
