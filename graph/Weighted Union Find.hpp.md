---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/Weighted Union Find.test.cpp
    title: verify/Weighted Union Find.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"graph/Weighted Union Find.hpp\"\n#include <vector>\n/**\n\
    \ * \u91CD\u307F\u4ED8\u304DUnion Find\n*/\nstruct WeightUnionfind{\n    WeightUnionfind(int\
    \ n){\n        parents_size.resize(n,-1);\n        Weight_list.resize(n);\n  \
    \  }\n\n    /**\n     * leader(i)\n     * root\u3092\u8FD4\u3059\n    */\n   \
    \ int leader(int i){\n        if(parents_size[i]<0){\n            return i;\n\
    \        }\n        int root = leader(parents_size[i]);\n        Weight_list[i]+=Weight_list[parents_size[i]];\n\
    \        return (parents_size[i]=root);\n    }\n\n    /**\n     * merege(a,b,long\
    \ long w)\n     * a\u3068b\u3092\u30DE\u30FC\u30B8\u3057b\u306Fa\u3088\u308Aw\u91CD\
    \u304F\u3059\u308B\n     * root\u3092\u8FD4\u3059\n    */\n    int merge(int a,int\
    \ b,long long w){\n        w+=weight(a);\n        w-=weight(b);\n        a=leader(a);\n\
    \        b=leader(b);\n        if(a!=b){\n            if(-parents_size[a]<parents_size[b]){\n\
    \                std::swap(a,b);\n                w-=w;\n            }\n     \
    \       parents_size[a]+=parents_size[b];\n            parents_size[b]=a;\n  \
    \          Weight_list[b]=w;\n        }\n        return leader(a);\n    }\n\n\
    \    /**\n     * diff(a,b)\n     * b-a\u3092\u8FD4\u3059\n    */\n    long long\
    \ diff(int a,int b){\n        return (weight(b)-weight(a));\n    }\n\n    /**\n\
    \     * same(a,b)\n     * \u540C\u3058\u9023\u7D50\u6210\u5206\u304B\u5224\u5B9A\
    \n    */\n    bool same(int a,int b){\n        return (leader(a)==leader(b));\n\
    \    }\n\n    /**\n     * size(i)\n     * i\u306E\u9023\u7D50\u6210\u5206\u306E\
    \u9802\u70B9\u6570\n    */\n    int size(int i){\n        return -parents_size[leader(i)];\n\
    \    }\n\n    private:\n    std::vector<int> parents_size;\n    std::vector<long\
    \ long> Weight_list;\n    long long weight(int i){\n        leader(i);\n     \
    \   return Weight_list[i];\n    }\n};\n"
  code: "#pragma once\n#include <vector>\n/**\n * \u91CD\u307F\u4ED8\u304DUnion Find\n\
    */\nstruct WeightUnionfind{\n    WeightUnionfind(int n){\n        parents_size.resize(n,-1);\n\
    \        Weight_list.resize(n);\n    }\n\n    /**\n     * leader(i)\n     * root\u3092\
    \u8FD4\u3059\n    */\n    int leader(int i){\n        if(parents_size[i]<0){\n\
    \            return i;\n        }\n        int root = leader(parents_size[i]);\n\
    \        Weight_list[i]+=Weight_list[parents_size[i]];\n        return (parents_size[i]=root);\n\
    \    }\n\n    /**\n     * merege(a,b,long long w)\n     * a\u3068b\u3092\u30DE\
    \u30FC\u30B8\u3057b\u306Fa\u3088\u308Aw\u91CD\u304F\u3059\u308B\n     * root\u3092\
    \u8FD4\u3059\n    */\n    int merge(int a,int b,long long w){\n        w+=weight(a);\n\
    \        w-=weight(b);\n        a=leader(a);\n        b=leader(b);\n        if(a!=b){\n\
    \            if(-parents_size[a]<parents_size[b]){\n                std::swap(a,b);\n\
    \                w-=w;\n            }\n            parents_size[a]+=parents_size[b];\n\
    \            parents_size[b]=a;\n            Weight_list[b]=w;\n        }\n  \
    \      return leader(a);\n    }\n\n    /**\n     * diff(a,b)\n     * b-a\u3092\
    \u8FD4\u3059\n    */\n    long long diff(int a,int b){\n        return (weight(b)-weight(a));\n\
    \    }\n\n    /**\n     * same(a,b)\n     * \u540C\u3058\u9023\u7D50\u6210\u5206\
    \u304B\u5224\u5B9A\n    */\n    bool same(int a,int b){\n        return (leader(a)==leader(b));\n\
    \    }\n\n    /**\n     * size(i)\n     * i\u306E\u9023\u7D50\u6210\u5206\u306E\
    \u9802\u70B9\u6570\n    */\n    int size(int i){\n        return -parents_size[leader(i)];\n\
    \    }\n\n    private:\n    std::vector<int> parents_size;\n    std::vector<long\
    \ long> Weight_list;\n    long long weight(int i){\n        leader(i);\n     \
    \   return Weight_list[i];\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: graph/Weighted Union Find.hpp
  requiredBy: []
  timestamp: '2024-03-12 16:20:16+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/Weighted Union Find.test.cpp
documentation_of: graph/Weighted Union Find.hpp
layout: document
title: Weighted Union Find
---
## 計算量
初期化　O(N)
クエリ　O(α(N))
## leader
```
int leader(int i)
```
iを含む連結成分の代表元を返す。

## merge
```
int merge(int a,int b,long long w)
```
aとbをマージし、bはaよりw重くする。
新しい代表元を返す。

## diff
```
long long diff(int a,int b)
```
b-aを返す。

## same
```
bool same(int a,int b)
```
a,bが連結がどうかを返す。

## size
```
int size(int i)
```
iの属する連結成分の大きさを返す。