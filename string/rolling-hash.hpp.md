---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"string/rolling-hash.hpp\"\n#include<string>\n\nstruct RollingHash{\n\
    \    static constexpr uint64_t mod= (1uL<<61)-1;\n    static constexpr uint64_t\
    \ base = 20200213;\n};  \n"
  code: "#pragma once\n#include<string>\n\nstruct RollingHash{\n    static constexpr\
    \ uint64_t mod= (1uL<<61)-1;\n    static constexpr uint64_t base = 20200213;\n\
    };  "
  dependsOn: []
  isVerificationFile: false
  path: string/rolling-hash.hpp
  requiredBy: []
  timestamp: '2024-07-07 00:15:29+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: string/rolling-hash.hpp
layout: document
redirect_from:
- /library/string/rolling-hash.hpp
- /library/string/rolling-hash.hpp.html
title: string/rolling-hash.hpp
---
