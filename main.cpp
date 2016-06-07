/* to run build with the following source code files:
    SSS.cpp
*/

#include "SSS.hpp"

int main() {
    SSS sss;
    sss.optimal_SSS(7);
    sss.print();
    sss.print_setstring();
}

/*
Notes:
    S(7) = {20, 31, 38, 39, 40, 42, 45}
    Takes nearly 30 minutes to solve!
*/