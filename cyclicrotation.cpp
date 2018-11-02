#include <algorithm>
#include <iterator>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)
    auto size = A.size();
    if(size == 0) return A;
    
    auto pos = K % size;
    if(pos == 0) return A;
    
    auto rItr = A.rbegin() + pos;
    auto dist = A.rend() - rItr;
    auto itr = A.begin() + dist;
    
    std::vector<int> temp;
    
    std::copy(itr,A.end(),std::back_inserter(temp));
    std::copy(A.begin(),itr, std::back_inserter(temp));
    
    return temp;
}