---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: "[i][c] := i \u6587\u5B57\u76EE\u4EE5\u964D\u3067\u6700\u521D\u306B\
      \u6587\u5B57 c \u304C\u767B\u5834\u3059\u308B index (\u5B58\u5728\u3057\u306A\
      \u3044\u3068\u304D\u306F n)"
    links: []
  bundledCode: "#line 2 \"string/next.hpp\"\n#include <string>\n#include <vector>\n\
    \n/**\n * @brief [i][c] := i \u6587\u5B57\u76EE\u4EE5\u964D\u3067\u6700\u521D\u306B\
    \u6587\u5B57 c \u304C\u767B\u5834\u3059\u308B index (\u5B58\u5728\u3057\u306A\u3044\
    \u3068\u304D\u306F n)\n * \n * @param S \n * @param c \u5927\u6587\u5B57\u306E\
    \u3068\u304D\u306F'A'(\u6A19\u6E96\u306F'a')\n * @return std::vector<std::vector<int>\
    \ > \n */\nstd::vector<std::vector<int> > string_next(const std::string &S,char\
    \ c = 'a') {\n    int n = (int)S.size();\n    std::vector<std::vector<int> > res(n+1,\
    \ std::vector<int>(26, n));\n    for (int i = n-1; i >= 0; --i) {\n        for\
    \ (int j = 0; j < 26; ++j) res[i][j] = res[i+1][j];\n        res[i][S[i]-c] =\
    \ i;\n    }\n    return res;\n}\n"
  code: "#pragma once\n#include <string>\n#include <vector>\n\n/**\n * @brief [i][c]\
    \ := i \u6587\u5B57\u76EE\u4EE5\u964D\u3067\u6700\u521D\u306B\u6587\u5B57 c \u304C\
    \u767B\u5834\u3059\u308B index (\u5B58\u5728\u3057\u306A\u3044\u3068\u304D\u306F\
    \ n)\n * \n * @param S \n * @param c \u5927\u6587\u5B57\u306E\u3068\u304D\u306F\
    'A'(\u6A19\u6E96\u306F'a')\n * @return std::vector<std::vector<int> > \n */\n\
    std::vector<std::vector<int> > string_next(const std::string &S,char c = 'a')\
    \ {\n    int n = (int)S.size();\n    std::vector<std::vector<int> > res(n+1, std::vector<int>(26,\
    \ n));\n    for (int i = n-1; i >= 0; --i) {\n        for (int j = 0; j < 26;\
    \ ++j) res[i][j] = res[i+1][j];\n        res[i][S[i]-c] = i;\n    }\n    return\
    \ res;\n}"
  dependsOn: []
  isVerificationFile: false
  path: string/next.hpp
  requiredBy: []
  timestamp: '2024-07-07 00:15:29+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: string/next.hpp
layout: document
redirect_from:
- /library/string/next.hpp
- /library/string/next.hpp.html
title: "[i][c] := i \u6587\u5B57\u76EE\u4EE5\u964D\u3067\u6700\u521D\u306B\u6587\u5B57\
  \ c \u304C\u767B\u5834\u3059\u308B index (\u5B58\u5728\u3057\u306A\u3044\u3068\u304D\
  \u306F n)"
---
