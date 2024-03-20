---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/Eratosthenes.test.cpp
    title: verify/Eratosthenes.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"math/Eratosthenes.hpp\"\n#include <vector>\n\nstd::vector<bool>\
    \ Eratosthenes(long long size){\n    std::vector<bool> isprime(size+1,true);\n\
    \    isprime[0]=false;\n    isprime[1]=false;\n    for (long long i = 2; i <=\
    \ size; i++) {\n        if (isprime[i]) {\n            for (long long j = i *\
    \ 2; j <= size; j += i) {\n                isprime[j] = false;\n            }\n\
    \        }\n    }\n    return isprime;\n}\n"
  code: "#pragma once\n#include <vector>\n\nstd::vector<bool> Eratosthenes(long long\
    \ size){\n    std::vector<bool> isprime(size+1,true);\n    isprime[0]=false;\n\
    \    isprime[1]=false;\n    for (long long i = 2; i <= size; i++) {\n        if\
    \ (isprime[i]) {\n            for (long long j = i * 2; j <= size; j += i) {\n\
    \                isprime[j] = false;\n            }\n        }\n    }\n    return\
    \ isprime;\n}"
  dependsOn: []
  isVerificationFile: false
  path: math/Eratosthenes.hpp
  requiredBy: []
  timestamp: '2024-03-20 22:11:04+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/Eratosthenes.test.cpp
documentation_of: math/Eratosthenes.hpp
layout: document
redirect_from:
- /library/math/Eratosthenes.hpp
- /library/math/Eratosthenes.hpp.html
title: math/Eratosthenes.hpp
---
