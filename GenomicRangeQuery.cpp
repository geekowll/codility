#include <algorithm>
#include <unordered_map>

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    // write your code in C++14 (g++ 6.2.0)
    unordered_map<char,int> impacts = {{'A',1},{'C',2},{'G',3},{'T',4}};
    vector<int> result;
    
    auto findmin = [](string::iterator begin, string::iterator end){
        auto min = 'T';
        
        while(begin != end){
            if(*begin == 'A'){
                min = 'A';
                break;
            }else if(*begin < min)
                min = *begin;
            begin++;
        }
        
        return min;
    };
    
    for(auto i = 0; i < P.size(); ++i){
        auto p = P.at(i);
        auto q = Q.at(i);
        
        if(p == q)
            result.push_back(impacts[S[p]]);
        else{
            auto str = S.substr(p,q-p+1);
            auto c = findmin(str.begin(),str.end());
            result.push_back(impacts[c]);
        }
    }
    
    return result;
} 