#pragma once
#include "graph/Graph-template.hpp"
#include <queue>
/**
 * @brief Tree-Diameter(木の直径)
*/

/**
 * @brief 木の直径
 * 
 */
template<typename T = long long>
struct TreeDiameter{
    std::vector<Edge<T>> path;
    Graph<T> &g;
    TreeDiameter(Graph<T> &_g) : g(_g) {}
    /**
     * @brief 構築
     * 
     * @return T 
     */
    T build(){
        to.assign(g.size(),-1);
        auto p = dfs(0,-1);
        auto q = dfs(p.second,-1);

        int now = p.second;
        while(now != p.second){
            for(auto &e : g[now]){
                if (to[now] == e.to){
                    path.emplace_back(e);
                }
            }
            now = to[now];
        }
        return q.first;
    }
    private:
    std::vector<int> to;

    std::pair<T,int>dfs(int idx,int par){
        std::pair<T,int> ret(0,idx);
        for(auto &e : g[idx]){
            if(e.to == par) continue;
            auto cost = dfs(e.to,idx);
            cost.first += e.cost;
            if(ret < cost){
                ret = cost;
                to[idx] = e.to;
            }
        }
        return ret;
    }
};
