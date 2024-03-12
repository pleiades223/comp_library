#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/GRL_1_A"
#include <iostream>
#include <graph/Dijkstra.hpp>

int main(){
    int v,e,r;
    std::cin >> v >> e >> r;
    Graph<int> g(v);
    g.read(e,true,0,true);
    auto vec=dijkstra(g,r,1000000001);
    for(auto e:vec.dist){
        if(e==1000000001){
            std::cout << "INF" << std::endl;
        }else{
            std::cout << e << std::endl;
        }
    }
}