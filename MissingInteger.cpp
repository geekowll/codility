#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    auto itr = std::partition(A.begin(),A.end(),[](int val){ return val >= 0; });
    A.erase(itr,A.end());
    
    if(A.size() == 0)
        return 1;
    
    std::sort(A.begin(),A.end());
    
    auto min = 1;
    
    for(const auto& num: A)
    { 
        if( num == min)
            ++min;
        else if( num > min)
            break;
    }
    
    return min;
}
