#include "../include/LinearCongruential.hpp"


LinearCongruential::LinearCongruential(size_t input_seed, size_t input_mut, size_t input_incr, size_t input_mod) :
PseudoRandom(input_seed),
m_multiplier(input_mut),
m_increment(input_incr)
{
    if (input_mod<= 0){
        throw std::invalid_argument("Modulus should me > 0");
    };
    m_modulus = input_mod;
    
};


double LinearCongruential::Generate(){
    m_seed = (m_multiplier * m_seed + m_increment) % m_modulus;
    return (double) m_seed/m_modulus;

}




