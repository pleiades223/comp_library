#pragma once
#include<graph/Graph-template.hpp>
#include<queue>

/**
 * dist:startからの距離
 * from:直前の頂点
 * id:最後に使用した辺
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