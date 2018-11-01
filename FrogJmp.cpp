#include <cmath>

int solution(int X, int Y, int D) {
    // write your code in C++14 (g++ 6.2.0)
    
    if( X == Y) return 0;
    
    auto div = (double)(Y - X)/D;
    auto fl = std::floor(div);
    auto ce = std::ceil(div);
    auto ro = std::round(div);
    
    if( ( X + int(fl*D)) >= Y)
        return fl;
    else if( (X + int(ro*D)) >= Y)
        return ro;
    else if( (X + int(ce*D)) >= Y)
        return ce;
    else
        throw;
}