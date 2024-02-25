---
title: Weighted Union Find
documentation_of: ./graph/Weighted Union Find.hpp
---
## 計算量
初期化　O(N)
クエリ　O(α(N))
## クエリ
### int leader(int i)
iを含む連結成分の代表元を返す。
### int merge(int a,int b,long long w)
aとbをマージし、bはaよりw重くする。
新しい代表元を返す。
### long long diff(int a,int b)
b-aを返す。

### bool same(int a,int b)
a,bが連結がどうかを返す。

### int size(int i)
iの属する連結成分の大きさを返す。