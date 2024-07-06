#pragma once
#include "graph/Graph-template.hpp"
#include <queue>
/**
 * @brief Dijkstra
*/

/**
 * @brief Dijkstra
 * 
 * @tparam long long
 * @param g グラフ
 * @param start スタートの頂点
 * @param INF 定数
 * @return Shortest_path<T> 
 */
template<typename T = long long>
Shortest_path<T> dijkstra(const Graph<T>&g,int start,T INF){
    std::vector<T> dist(g.size(),INF);
    std::vector<int> from(g.size(),-1),id(g.size(),-1);
    using P = std::pair<T,int>;
    std::priority_queue<P,std::vector<P>,std::greater<P> > que;
    dist[start]=0;
    que.emplace(dist[start],start);
    while(!que.empty()){
        P p=que.top();que.pop();
        if(dist[p.second]<p.first)continue;
        for(auto edge:g[p.second]){
            if(dist[edge.to]>p.first+edge.cost){
                dist[edge.to]=p.first+edge.cost;
                from[edge.to]=p.second;
                id[edge.to]=edge.idx;
                que.emplace(dist[edge.to],edge.to);
            }
        }
    }
    return {dist,from,id};
}