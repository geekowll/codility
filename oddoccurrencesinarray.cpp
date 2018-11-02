#include <algorithm>
#include <unordered_map>
#include <cassert>

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    auto size = A.size();
    assert(size % 2 != 0);
    
    std::unordered_map<int,int> myMap;
    
    std::for_each(A.cbegin(),A.cend(),[&myMap](int key){
        myMap[key]++;
    });
    
    auto itr = std::find_if(myMap.cbegin(), myMap.cend(), [](const auto pair){
        return pair.second % 2 != 0;
    });
    
    return itr->first;
}