#pragma once
/*
グラフテンプレート
*/
#include <vector>
#include <iostream>

template<typename T = long long >
struct Edge{
    long long from,to;
    T cost;
    int idx;
    Edge() = default;
    Edge(long long from,long long to,T cost=1,int idx=-1):from(from),to(to),cost(cost),idx(idx){};
    operator int() const { return to; }
};

template<typename T=long long>
using Edges = std::vector<Edge<T>>;

template<typename T=long long>
struct Shortest_path{
    std::vector<T> dist;
    std::vector<int>from,last_edge;
};

template<typename T = long long >
struct Graph{
    std::vector<std::vector<Edge<T>>> g;
    std::vector<Edge<T>> edges;
    int es=0;

    Graph() = default;

    explicit Graph(int n) : g(n), es(0) {}

    std::size_t size() const{
        return g.size();
    }

    /**
     * 一方通行の辺追加
    */
    void add_direct(int from,int to,T cost=1){
        g[from].emplace_back(from,to,cost,es);
        edges.emplace_back(from,to,cost,es);
        es++;
    }

    /**
     * 双方向の辺追加
    */
    void add(int from,int to,T cost=1){
        g[from].emplace_back(from,to,cost,es);
        g[to].emplace_back(to,from,cost,es);
        edges.emplace_back(from,to,cost,es);
        es++;
    }

    /**
     * M:辺の数
     * cost:コストの有無
     * p:入力が1-indexedなら-1
     * direct:一方通行ならtrue(u to v)
     * u v (cost)
     * ...
    */
    void read(int M, bool cost = false, int p = -1,bool direct = false){
        for(int i=0;i<M;i++){
            int u,v;
            std::cin >> u >> v;
            u+=p;v+=p;
            T c=1;
            if(cost)std::cin >> c;
            if(direct)add_direct(u,v,c);
            else add(u,v,c);
        }
    }

    /**
     * Edgesを読み込む
    */
    void read_edges(Edges<T> &_edges,bool direct = true){
        for(auto edge:_edges){
            if(direct){
                add_direct(edge.from,edge.to,edge.cost);
            }else{
                add(edge.from,edge.to,edge.cost);
            }
        }
    }

    /**
     * g[k]
    */
    inline std::vector<Edge<T>> &operator[](const int &k) {
        return g[k];
    }
    /**
     * g[k]
    */
    inline const std::vector<Edge<T>> &operator[](const int &k) const {
        return g[k];
    }
};