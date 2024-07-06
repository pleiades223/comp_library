---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: graph/Graph-template.hpp
    title: "\u30B0\u30E9\u30D5\u30C6\u30F3\u30D7\u30EC\u30FC\u30C8"
  - icon: ':x:'
    path: graph/Tree-Diameter.hpp
    title: "Tree-Diameter(\u6728\u306E\u76F4\u5F84)"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/GRL_5_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/GRL_5_A
  bundledCode: "#line 1 \"verify/Tree-Diameter.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/GRL_5_A\"\
    \n#include <graph/Tree-Diameter.hpp>\n\nint main(){\n    int n;\n    std::cin\
    \ >> n;\n    Graph g(n);\n    g.read(n-1,true,0,false);\n    std::cout << TreeDiameter(g).build()\
    \ << std::endl;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/GRL_5_A\"\n#include\
    \ <graph/Tree-Diameter.hpp>\n\nint main(){\n    int n;\n    std::cin >> n;\n \
    \   Graph g(n);\n    g.read(n-1,true,0,false);\n    std::cout << TreeDiameter(g).build()\
    \ << std::endl;\n}"
  dependsOn:
  - graph/Tree-Diameter.hpp
  - graph/Graph-template.hpp
  isVerificationFile: true
  path: verify/Tree-Diameter.test.cpp
  requiredBy: []
  timestamp: '2024-07-07 00:21:01+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: verify/Tree-Diameter.test.cpp
layout: document
redirect_from:
- /verify/verify/Tree-Diameter.test.cpp
- /verify/verify/Tree-Diameter.test.cpp.html
title: verify/Tree-Diameter.test.cpp
---
