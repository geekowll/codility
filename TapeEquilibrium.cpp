#include <numeric>
#include <limits>

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    auto N = A.size();
    if(N == 0) return 0;

    auto Min = std::numeric_limits<int>::max();
    auto sum_left = 0, sum_right = 0;

    for( std::size_t P = 1; P < N; ++P){
        if(P == 1){
            sum_left = A.front();
            sum_right = std::accumulate(A.begin()+P, A.end(),0);
        }
        else{
            sum_left += *(A.begin() + P-1);
            sum_right -= *(A.begin() + P-1);
        }

        auto diff = std::abs(sum_left - sum_right);

        if( diff < Min)
            Min = diff;
    }       

    return Min;
}
