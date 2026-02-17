#include "RandomGenerator.hpp"

class PseudoRandom:public RandomGenerator{

    public:
        PseudoRandom() = default;
        PseudoRandom(size_t seed):m_seed(seed){}


    protected:
        size_t m_seed;

};