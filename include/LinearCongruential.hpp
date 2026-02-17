#include "PseudoRandom.hpp"
#include <iostream>
#include <stdexcept>

class LinearCongruential: public PseudoRandom{
    public:
        LinearCongruential() = default;
        LinearCongruential(size_t input_seed, size_t input_mut, size_t input_incr, size_t input_mod);
        virtual double Generate();

    private:
        size_t m_multiplier;
        size_t m_increment;
        size_t m_modulus;
};