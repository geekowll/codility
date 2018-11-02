#include <algorithm>

vector<int> solution(int N, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    auto max = 0;
    auto index = 0;
    auto last = 0;
    
    std::vector<int> result(N);
    
    std::for_each(A.cbegin(),A.cend(),[&](const int& code){
        if(code >= 1 && code <= N){
            index = code -1;
            
            if( result[index] < last)
                result[index] = last;
    
            ++result[index];
        
            if(max < result[index])
                max = result[index];
            
        }else if(code == (N + 1)){
            last = max;
        }
    });
    
    std::for_each(result.begin(),result.end(),[last](int& value){
        if(value < last)
            value = last;
    });
    
    return result;
}
