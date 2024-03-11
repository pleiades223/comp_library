---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: DP/LCS.hpp
    title: "LCS(\u6700\u9577\u5171\u901A\u90E8\u5206\u5217)"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_10_C
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_10_C
  bundledCode: "#line 1 \"verify/LCS.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_10_C\"\
    \n#include <string>\n#include <iostream>\n#include <DP/LCS.hpp>\n\nint main(){\n\
    \    int q;\n    std::cin >> q;\n    while(q--){\n        std::string X,Y;\n \
    \       std::cin >> X >> Y;\n        std::cout << LCS(X,Y) << std::endl;\n   \
    \ }\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_10_C\"\n\
    #include <string>\n#include <iostream>\n#include <DP/LCS.hpp>\n\nint main(){\n\
    \    int q;\n    std::cin >> q;\n    while(q--){\n        std::string X,Y;\n \
    \       std::cin >> X >> Y;\n        std::cout << LCS(X,Y) << std::endl;\n   \
    \ }\n}"
  dependsOn:
  - DP/LCS.hpp
  isVerificationFile: true
  path: verify/LCS.test.cpp
  requiredBy: []
  timestamp: '2024-02-26 21:38:10+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/LCS.test.cpp
layout: document
redirect_from:
- /verify/verify/LCS.test.cpp
- /verify/verify/LCS.test.cpp.html
title: verify/LCS.test.cpp
---
