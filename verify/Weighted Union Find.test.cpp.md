---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/Weighted Union Find.hpp
    title: Weighted Union Find
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_B
  bundledCode: "#line 1 \"verify/Weighted Union Find.test.cpp\"\n#define PROBLEM \"\
    https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_B\"\n#include <iostream>\n\
    #include <graph/Weighted Union Find.hpp>\n\nint main(){\n    int n, q;\n    std::cin\
    \ >> n >> q;\n    WeightUnionfind uf(n);\n    while(q--){\n        int type;\n\
    \        std::cin >> type;\n        if(type == 0){\n            int x, y, z;\n\
    \            std::cin >> x >> y >> z;\n            uf.merge(x,y,z);\n        }else{\n\
    \            int x, y;\n            std::cin >> x >> y;\n            if(uf.same(x,y)){\n\
    \                std::cout << uf.diff(x,y) << std::endl;\n            }else{\n\
    \                std::cout << \"?\" << std::endl;\n            }\n        }\n\
    \    }\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/3/DSL/1/DSL_1_B\"\
    \n#include <iostream>\n#include <graph/Weighted Union Find.hpp>\n\nint main(){\n\
    \    int n, q;\n    std::cin >> n >> q;\n    WeightUnionfind uf(n);\n    while(q--){\n\
    \        int type;\n        std::cin >> type;\n        if(type == 0){\n      \
    \      int x, y, z;\n            std::cin >> x >> y >> z;\n            uf.merge(x,y,z);\n\
    \        }else{\n            int x, y;\n            std::cin >> x >> y;\n    \
    \        if(uf.same(x,y)){\n                std::cout << uf.diff(x,y) << std::endl;\n\
    \            }else{\n                std::cout << \"?\" << std::endl;\n      \
    \      }\n        }\n    }\n}"
  dependsOn:
  - graph/Weighted Union Find.hpp
  isVerificationFile: true
  path: verify/Weighted Union Find.test.cpp
  requiredBy: []
  timestamp: '2024-02-26 21:38:10+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/Weighted Union Find.test.cpp
layout: document
redirect_from:
- /verify/verify/Weighted Union Find.test.cpp
- /verify/verify/Weighted Union Find.test.cpp.html
title: verify/Weighted Union Find.test.cpp
---
