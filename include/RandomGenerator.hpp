#pragma once
#include <random>

class RandomGenerator{

    public:
        explicit RandomGenerator() = default;
        virtual ~RandomGenerator() = default;

        virtual double Generate() = 0;

        double Mean(unsigned long nbSim);

        double Variance(unsigned long nbSim);

    
};