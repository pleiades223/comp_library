---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/Eratosthenes.hpp
    title: math/Eratosthenes.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/enumerate_primes
    links:
    - https://judge.yosupo.jp/problem/enumerate_primes
  bundledCode: "#line 1 \"verify/Eratosthenes.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/enumerate_primes\"\
    \n#include <iostream>\n#include <vector>\n#include <math/Eratosthenes.hpp>\n\n\
    int main(){\n    int n,a,b;\n    std::cin >> n >> a >> b;\n    std::vector<bool>isprime\
    \ = Eratosthenes(n);\n    std::vector<int> vec,ans;\n    for(int i=0;i<=n;i++){\n\
    \        if(isprime[i])vec.push_back(i);\n    }\n    for(int i=b;i<vec.size();i+=a){\n\
    \        ans.push_back(vec[i]);\n    }\n    std::cout << vec.size() << \" \" <<\
    \ ans.size() << std::endl;\n    for(int i=0;i<ans.size();i++){\n        std::cout\
    \ << ans[i] << ((i==ans.size()-1) ? \"\\n\" : \" \");\n    }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/enumerate_primes\"\n#include\
    \ <iostream>\n#include <vector>\n#include <math/Eratosthenes.hpp>\n\nint main(){\n\
    \    int n,a,b;\n    std::cin >> n >> a >> b;\n    std::vector<bool>isprime =\
    \ Eratosthenes(n);\n    std::vector<int> vec,ans;\n    for(int i=0;i<=n;i++){\n\
    \        if(isprime[i])vec.push_back(i);\n    }\n    for(int i=b;i<vec.size();i+=a){\n\
    \        ans.push_back(vec[i]);\n    }\n    std::cout << vec.size() << \" \" <<\
    \ ans.size() << std::endl;\n    for(int i=0;i<ans.size();i++){\n        std::cout\
    \ << ans[i] << ((i==ans.size()-1) ? \"\\n\" : \" \");\n    }\n}"
  dependsOn:
  - math/Eratosthenes.hpp
  isVerificationFile: true
  path: verify/Eratosthenes.test.cpp
  requiredBy: []
  timestamp: '2024-03-20 22:11:04+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/Eratosthenes.test.cpp
layout: document
redirect_from:
- /verify/verify/Eratosthenes.test.cpp
- /verify/verify/Eratosthenes.test.cpp.html
title: verify/Eratosthenes.test.cpp
---
