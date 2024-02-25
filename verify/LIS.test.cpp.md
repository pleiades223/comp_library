---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes: {}
  bundledCode: "#line 1 \"verify/LIS.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DPL_1_D\"\
    \n#include <iostream>\n#include <vector>\n#include <DP/LIS.hpp>\n\nint main(){\n\
    \    int n;\n    std::cin >> n;\n    std::vector<int> a(n);\n    for (int i =\
    \ 0; i < n; i++){\n        std::cin >> a[i];\n    }\n    std::cout << LIS(a).size()\
    \ << std::endl;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DPL_1_D\"\n#include\
    \ <iostream>\n#include <vector>\n#include <DP/LIS.hpp>\n\nint main(){\n    int\
    \ n;\n    std::cin >> n;\n    std::vector<int> a(n);\n    for (int i = 0; i <\
    \ n; i++){\n        std::cin >> a[i];\n    }\n    std::cout << LIS(a).size() <<\
    \ std::endl;\n}"
  dependsOn: []
  isVerificationFile: true
  path: verify/LIS.test.cpp
  requiredBy: []
  timestamp: '2024-02-25 22:55:29+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/LIS.test.cpp
layout: document
redirect_from:
- /verify/verify/LIS.test.cpp
- /verify/verify/LIS.test.cpp.html
title: verify/LIS.test.cpp
---
