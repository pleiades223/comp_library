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
    links: []
  bundledCode: "#line 2 \"graph/Dijkstra.hpp\"\n#include<graph/Graph-template.hpp>\n\
    #include<queue>\n\n/**\n * dist:start\u304B\u3089\u306E\u8DDD\u96E2\n * from:\u76F4\
    \u524D\u306E\u9802\u70B9\n * id:\u6700\u5F8C\u306B\u4F7F\u7528\u3057\u305F\u8FBA\
    \n*/\ntemplate<typename T = long long>\nShortest_path<T> dijkstra(const Graph<T>&g,int\
    \ start,T INF){\n    std::vector<T> dist(g.size(),INF);\n    std::vector<int>\
    \ from(g.size(),-1),id(g.size(),-1);\n    using P = std::pair<T,int>;\n    std::priority_queue<P,std::vector<P>,std::greater<P>\
    \ > que;\n    dist[start]=0;\n    que.emplace(dist[start],start);\n    while(!que.empty()){\n\
    \        P p=que.top();que.pop();\n        if(dist[p.second]<p.first)continue;\n\
    \        for(auto edge:g[p.second]){\n            if(dist[edge.to]>p.first+edge.cost){\n\
    \                dist[edge.to]=p.first+edge.cost;\n                from[edge.to]=p.second;\n\
    \                id[edge.to]=edge.idx;\n                que.emplace(dist[edge.to],edge.to);\n\
    \            }\n        }\n    }\n    return {dist,from,id};\n}\n"
  code: "#pragma once\n#include<graph/Graph-template.hpp>\n#include<queue>\n\n/**\n\
    \ * dist:start\u304B\u3089\u306E\u8DDD\u96E2\n * from:\u76F4\u524D\u306E\u9802\
    \u70B9\n * id:\u6700\u5F8C\u306B\u4F7F\u7528\u3057\u305F\u8FBA\n*/\ntemplate<typename\
    \ T = long long>\nShortest_path<T> dijkstra(const Graph<T>&g,int start,T INF){\n\
    \    std::vector<T> dist(g.size(),INF);\n    std::vector<int> from(g.size(),-1),id(g.size(),-1);\n\
    \    using P = std::pair<T,int>;\n    std::priority_queue<P,std::vector<P>,std::greater<P>\
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
  timestamp: '2024-03-12 16:20:16+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/Dijkstra.test.cpp
documentation_of: graph/Dijkstra.hpp
layout: document
redirect_from:
- /library/graph/Dijkstra.hpp
- /library/graph/Dijkstra.hpp.html
title: graph/Dijkstra.hpp
---
