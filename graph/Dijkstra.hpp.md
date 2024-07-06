---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/Graph-template.hpp
    title: "\u30B0\u30E9\u30D5\u30C6\u30F3\u30D7\u30EC\u30FC\u30C8"
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/Dijkstra.test.cpp
    title: verify/Dijkstra.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: Dijkstra
    links: []
  bundledCode: "#line 2 \"graph/Graph-template.hpp\"\n#include <vector>\r\n#include\
    \ <iostream>\r\n\r\ntemplate<typename T = long long >\r\nstruct Edge{\r\n    long\
    \ long from,to;\r\n    T cost;\r\n    int idx;\r\n    Edge() = default;\r\n  \
    \  Edge(long long from,long long to,T cost=1,int idx=-1):from(from),to(to),cost(cost),idx(idx){};\r\
    \n    operator int() const { return to; }\r\n};\r\n\r\ntemplate<typename T=long\
    \ long>\r\nusing Edges = std::vector<Edge<T>>;\r\n\r\ntemplate<typename T=long\
    \ long>\r\nstruct Shortest_path{\r\n    std::vector<T> dist;\r\n    std::vector<int>from,last_edge;\r\
    \n};\r\n\r\ntemplate<typename T = long long >\r\nstruct Graph{\r\n    std::vector<std::vector<Edge<T>>>\
    \ g;\r\n    std::vector<Edge<T>> edges;\r\n    int es=0;\r\n\r\n    Graph() =\
    \ default;\r\n\r\n    explicit Graph(int n) : g(n), es(0) {}\r\n\r\n    std::size_t\
    \ size() const{\r\n        return g.size();\r\n    }\r\n\r\n    /**\r\n     *\
    \ @brief \u4E00\u65B9\u901A\u884C\u306E\u8FBA\u3092\u8FFD\u52A0\r\n     * \r\n\
    \     * @param from \r\n     * @param to \r\n     * @param cost \r\n     */\r\n\
    \    void add_direct(int from,int to,T cost=1){\r\n        g[from].emplace_back(from,to,cost,es);\r\
    \n        edges.emplace_back(from,to,cost,es);\r\n        es++;\r\n    }\r\n\r\
    \n    /**\r\n     * @brief \u53CC\u65B9\u5411\u306E\u8FBA\u3092\u8FFD\u52A0\r\n\
    \     * \r\n     * @param from \r\n     * @param to \r\n     * @param cost \r\n\
    \     */\r\n    void add(int from,int to,T cost=1){\r\n        g[from].emplace_back(from,to,cost,es);\r\
    \n        g[to].emplace_back(to,from,cost,es);\r\n        edges.emplace_back(from,to,cost,es);\r\
    \n        es++;\r\n    }\r\n\r\n    /**\r\n     * @brief \u8AAD\u307F\u8FBC\u307F\
    \r\n     * \r\n     * @param M \u8FBA\u306E\u6570\r\n     * @param cost \u30B3\
    \u30B9\u30C8\u306E\u6709\u7121\r\n     * @param p \u5165\u529B\u304C1-indexed\u306A\
    \u3089-1\r\n     * @param direct \u4E00\u65B9\u901A\u884C\u306A\u3089true(u to\
    \ v)\r\n     */\r\n    void read(int M, bool cost = false, int p = -1,bool direct\
    \ = false){\r\n        for(int i=0;i<M;i++){\r\n            int u,v;\r\n     \
    \       std::cin >> u >> v;\r\n            u+=p;v+=p;\r\n            T c=1;\r\n\
    \            if(cost)std::cin >> c;\r\n            if(direct)add_direct(u,v,c);\r\
    \n            else add(u,v,c);\r\n        }\r\n    }\r\n\r\n    /**\r\n     *\
    \ @brief Edges\u3092\u8AAD\u307F\u8FBC\u3080\r\n     * \r\n     * @param _edges\
    \ \r\n     * @param direct \r\n     */\r\n    void read_edges(Edges<T> &_edges,bool\
    \ direct = true){\r\n        for(auto edge:_edges){\r\n            if(direct){\r\
    \n                add_direct(edge.from,edge.to,edge.cost);\r\n            }else{\r\
    \n                add(edge.from,edge.to,edge.cost);\r\n            }\r\n     \
    \   }\r\n    }\r\n\r\n    /**\r\n     * g[k]\r\n    */\r\n    inline std::vector<Edge<T>>\
    \ &operator[](const int &k) {\r\n        return g[k];\r\n    }\r\n    /**\r\n\
    \     * g[k]\r\n    */\r\n    inline const std::vector<Edge<T>> &operator[](const\
    \ int &k) const {\r\n        return g[k];\r\n    }\r\n};\n#line 3 \"graph/Dijkstra.hpp\"\
    \n#include <queue>\n/**\n * @brief Dijkstra\n*/\n\n/**\n * @brief Dijkstra\n *\
    \ \n * @tparam long long\n * @param g \u30B0\u30E9\u30D5\n * @param start \u30B9\
    \u30BF\u30FC\u30C8\u306E\u9802\u70B9\n * @param INF \u5B9A\u6570\n * @return Shortest_path<T>\
    \ \n */\ntemplate<typename T = long long>\nShortest_path<T> dijkstra(const Graph<T>&g,int\
    \ start,T INF){\n    std::vector<T> dist(g.size(),INF);\n    std::vector<int>\
    \ from(g.size(),-1),id(g.size(),-1);\n    using P = std::pair<T,int>;\n    std::priority_queue<P,std::vector<P>,std::greater<P>\
    \ > que;\n    dist[start]=0;\n    que.emplace(dist[start],start);\n    while(!que.empty()){\n\
    \        P p=que.top();que.pop();\n        if(dist[p.second]<p.first)continue;\n\
    \        for(auto edge:g[p.second]){\n            if(dist[edge.to]>p.first+edge.cost){\n\
    \                dist[edge.to]=p.first+edge.cost;\n                from[edge.to]=p.second;\n\
    \                id[edge.to]=edge.idx;\n                que.emplace(dist[edge.to],edge.to);\n\
    \            }\n        }\n    }\n    return {dist,from,id};\n}\n"
  code: "#pragma once\n#include \"graph/Graph-template.hpp\"\n#include <queue>\n/**\n\
    \ * @brief Dijkstra\n*/\n\n/**\n * @brief Dijkstra\n * \n * @tparam long long\n\
    \ * @param g \u30B0\u30E9\u30D5\n * @param start \u30B9\u30BF\u30FC\u30C8\u306E\
    \u9802\u70B9\n * @param INF \u5B9A\u6570\n * @return Shortest_path<T> \n */\n\
    template<typename T = long long>\nShortest_path<T> dijkstra(const Graph<T>&g,int\
    \ start,T INF){\n    std::vector<T> dist(g.size(),INF);\n    std::vector<int>\
    \ from(g.size(),-1),id(g.size(),-1);\n    using P = std::pair<T,int>;\n    std::priority_queue<P,std::vector<P>,std::greater<P>\
    \ > que;\n    dist[start]=0;\n    que.emplace(dist[start],start);\n    while(!que.empty()){\n\
    \        P p=que.top();que.pop();\n        if(dist[p.second]<p.first)continue;\n\
    \        for(auto edge:g[p.second]){\n            if(dist[edge.to]>p.first+edge.cost){\n\
    \                dist[edge.to]=p.first+edge.cost;\n                from[edge.to]=p.second;\n\
    \                id[edge.to]=edge.idx;\n                que.emplace(dist[edge.to],edge.to);\n\
    \            }\n        }\n    }\n    return {dist,from,id};\n}"
  dependsOn:
  - graph/Graph-template.hpp
  isVerificationFile: false
  path: graph/Dijkstra.hpp
  requiredBy: []
  timestamp: '2024-07-07 00:15:29+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/Dijkstra.test.cpp
documentation_of: graph/Dijkstra.hpp
layout: document
redirect_from:
- /library/graph/Dijkstra.hpp
- /library/graph/Dijkstra.hpp.html
title: Dijkstra
---
