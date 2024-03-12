---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: graph/Dijkstra.hpp
    title: graph/Dijkstra.hpp
  - icon: ':x:'
    path: graph/Graph-template.hpp
    title: "\u30B0\u30E9\u30D5\u30C6\u30F3\u30D7\u30EC\u30FC\u30C8"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/GRL_1_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/GRL_1_A
  bundledCode: "#line 1 \"verify/Dijkstra.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/GRL_1_A\"\
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
  isVerificationFile: true
  path: verify/Dijkstra.test.cpp
  requiredBy: []
  timestamp: '2024-03-12 16:29:26+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: verify/Dijkstra.test.cpp
layout: document
redirect_from:
- /verify/verify/Dijkstra.test.cpp
- /verify/verify/Dijkstra.test.cpp.html
title: verify/Dijkstra.test.cpp
---
