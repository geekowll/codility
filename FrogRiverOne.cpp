#include <algorithm>
#include <map>

int solution(int X, vector<int> &A) {
    std::map<int,bool> steps;
    std::vector<int> leaf;
    
    auto time = -1;
    
    for(std::size_t i = 0; i < A.size(); ++i){
        auto pos = A.at(i);
        
        if(!steps[pos]){
            steps[pos] = true;
            
            leaf.emplace_back(pos);
            
            if(leaf.size() == (std::size_t)X)
            {
                time = i;
                break;
            }
        }
    }
    
    return time;
}


