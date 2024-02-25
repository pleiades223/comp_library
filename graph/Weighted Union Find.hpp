#pragma once

/*
重み付きUnion Find
leader(i) rootを返す
merge(a,b,w) aとbをマージしbはaよりw重くする。新しい代表元を返す
diff(a,b) b-aを返す
same(a,b) 同じ連結成分か判定
size(i) iの連結成分の頂点数
*/

#include <vector>

struct WeightUnionfind{
    WeightUnionfind(int n){
        parents_size.resize(n,-1);
        Weight_list.resize(n);
    }

    int leader(int i){
        if(parents_size[i]<0){
            return i;
        }
        int root = leader(parents_size[i]);
        Weight_list[i]+=Weight_list[parents_size[i]];
        return (parents_size[i]=root);
    }

    int merge(int a,int b,long long w){
        w+=weight(a);
        w-=weight(b);
        a=leader(a);
        b=leader(b);
        if(a!=b){
            if(-parents_size[a]<parents_size[b]){
                std::swap(a,b);
                w-=w;
            }
            parents_size[a]+=parents_size[b];
            parents_size[b]=a;
            Weight_list[b]=w;
        }
        return leader(a);
    }

    long long diff(int a,int b){
        return (weight(b)-weight(a));
    }

    bool same(int a,int b){
        return (leader(a)==leader(b));
    }

    int size(int i){
        return -parents_size[leader(i)];
    }

    private:
    std::vector<int> parents_size;
    std::vector<long long> Weight_list;
    long long weight(int i){
        leader(i);
        return Weight_list[i];
    }
};