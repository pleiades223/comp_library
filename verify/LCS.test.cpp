#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_10_C"
#include <string>
#include <iostream>
#include <DP/LCS.hpp>

int main(){
    int q;
    std::cin >> q;
    while(q--){
        std::string X,Y;
        std::cin >> X >> Y;
        std::cout << LCS(X,Y) << std::endl;
    }
}