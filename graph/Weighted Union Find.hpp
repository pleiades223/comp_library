#pragma once
#include <vector>
/**
 * 重み付きUnion Find
*/
struct WeightUnionfind{
    WeightUnionfind(int n){
        parents_size.resize(n,-1);
        Weight_list.resize(n);
    }

    /**
     * leader(i)
     * rootを返す
    */
    int leader(int i){
        if(parents_size[i]<0){
            return i;
        }
        int root = leader(parents_size[i]);
        Weight_list[i]+=Weight_list[parents_size[i]];
        return (parents_size[i]=root);
    }

    /**
     * merege(a,b,long long w)
     * aとbをマージしbはaよりw重くする
     * rootを返す
    */
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

    /**
     * diff(a,b)
     * b-aを返す
    */
    long long diff(int a,int b){
        return (weight(b)-weight(a));
    }

    /**
     * same(a,b)
     * 同じ連結成分か判定
    */
    bool same(int a,int b){
        return (leader(a)==leader(b));
    }

    /**
     * size(i)
     * iの連結成分の頂点数
    */
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