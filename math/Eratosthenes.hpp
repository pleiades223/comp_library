#pragma once
#include <vector>

std::vector<bool> Eratosthenes(long long size){
    std::vector<bool> isprime(size+1,true);
    isprime[0]=false;
    isprime[1]=false;
    for (long long i = 2; i <= size; i++) {
        if (isprime[i]) {
            for (long long j = i * 2; j <= size; j += i) {
                isprime[j] = false;
            }
        }
    }
    return isprime;
}