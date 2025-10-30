#ifndef RANDOM_HPP
#define RANDOM_HPP

#include <random>

namespace rng
{

    inline std::mt19937 &get_rng()
    {
        static thread_local std::random_device rd;
        static thread_local std::mt19937 rng(rd());

        return rng;
    }

    inline bool bernoulli(double p = 0.5)
    {
        return std::bernoulli_distribution(p)(get_rng());
    }

} // namespace rng

#endif // RANDOM_HPP