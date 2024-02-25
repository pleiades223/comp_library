#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_B"
#include <iostream>
#include <graph/Weighted Union Find.hpp>

int main(){
    int n, q;
    std::cin >> n >> q;
    WeightUnionfind uf(n);
    while(q--){
        int type;
        std::cin >> type;
        if(type == 0){
            int x, y, z;
            std::cin >> x >> y >> z;
            uf.merge(x,y,z);
        }else{
            int x, y;
            std::cin >> x >> y;
            std::cout << uf.diff(x,y) << std::endl;
        }
    }
}