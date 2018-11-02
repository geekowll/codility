#include <algorithm>
#include <iterator>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    std::size_t size = A.size();
    
    if(size == 0) return 1;
    
    if(size == 1) {
        if(A.front() == 1) return 2;
        else if(A.front() == 2) return 1;
    }
    
    std::sort(A.begin(),A.end());
    
    for(std::size_t i = 1; i < size; ++i)
    {
        if((i-1) == 0){
            if(A[i-1] != 1) return 1;
        }
        
        if((A[i] - A[i-1]) > 1)
            return A[i-1]+1;
            
        if(i == (size-1)){
            if(A[i] != size) return size;
            else if(A[i] == size) return size+1;
        }
    }
    
    return -1;
}