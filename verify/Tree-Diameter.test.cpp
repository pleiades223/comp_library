#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/DPL_1_D"
#include <graph/Tree-Diameter.hpp>

int main(){
    int n;
    std::cin >> n;
    Graph g(n);
    g.read(n-1,true,0,false);
    std::cout << TreeDiameter(g).build() << std::endl;
}