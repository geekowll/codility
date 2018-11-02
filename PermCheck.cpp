#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {

    std::sort(A.begin(),A.end());
    
    for(auto i = 0; i < A.size(); ++i){
        if( A[i] != (i+1))
            return 0;
    }
    
    return 1;
}
