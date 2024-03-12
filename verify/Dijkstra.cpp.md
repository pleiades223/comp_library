---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: graph/Dijkstra.hpp
    title: graph/Dijkstra.hpp
  - icon: ':warning:'
    path: graph/Graph-template.hpp
    title: "\u30B0\u30E9\u30D5\u30C6\u30F3\u30D7\u30EC\u30FC\u30C8"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/GRL_1_A
  bundledCode: "#line 1 \"verify/Dijkstra.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/GRL_1_A\"\
    \n#include <iostream>\n#include <graph/Dijkstra.hpp>\n\nint main(){\n    int v,e,r;\n\
    \    std::cin >> v >> e >> r;\n    Graph<int> g(v);\n    g.read(e,true,0);\n \
    \   auto vec=dijkstra(g,r,1000000001);\n    for(auto e:vec.dist){\n        if(e==1000000001){\n\
    \            std::cout << \"INF\" << std::endl;\n        }else{\n            std::cout\
    \ << e << std::endl;\n        }\n    }\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/GRL_1_A\"\n#include\
    \ <iostream>\n#include <graph/Dijkstra.hpp>\n\nint main(){\n    int v,e,r;\n \
    \   std::cin >> v >> e >> r;\n    Graph<int> g(v);\n    g.read(e,true,0);\n  \
    \  auto vec=dijkstra(g,r,1000000001);\n    for(auto e:vec.dist){\n        if(e==1000000001){\n\
    \            std::cout << \"INF\" << std::endl;\n        }else{\n            std::cout\
    \ << e << std::endl;\n        }\n    }\n}"
  dependsOn:
  - graph/Dijkstra.hpp
  - graph/Graph-template.hpp
  isVerificationFile: false
  path: verify/Dijkstra.cpp
  requiredBy: []
  timestamp: '2024-03-12 16:20:16+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: verify/Dijkstra.cpp
layout: document
redirect_from:
- /library/verify/Dijkstra.cpp
- /library/verify/Dijkstra.cpp.html
title: verify/Dijkstra.cpp
---
