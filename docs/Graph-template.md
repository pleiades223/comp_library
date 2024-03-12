---
title: グラフテンプレート
documentation_of: ./graph/Graph-template.hpp
---
## Edge
- from 
- to
- cost
- idx

## Graph
- Graph(int n) 頂点数nで初期化
- size() 頂点数
- void add_direct(int from,int to,long long cost=1) 一方通行の辺追加
- void add(int from,int to,long long cost=1) 双方向の辺追加
- void read(int M, bool cost = false, int p = -1,bool direct = false)  
M:辺の数  
cost:コストの有無  
p:1-indexedなら-1
direct:一方通行ならtrue(u to v)
### 入力
```
u v (cost)  
.  
.  
```
- Graph[k] kから出てる辺の配列

## Edges
edgeの配列