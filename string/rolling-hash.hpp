#pragma once
#include<string>

struct RollingHash{
    static constexpr uint64_t mod= (1uL<<61)-1;
    static constexpr uint64_t base = 20200213;
};  