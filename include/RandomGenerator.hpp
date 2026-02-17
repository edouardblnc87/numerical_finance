#pragma once
#include <random>

class RandomGenerator{

    public:
        explicit RandomGenerator(unsigned int seed = std::random_device{}()): engine_(seed) {}
        virtual ~RandomGenerator() = default;

        virtual double Generate() = 0;

        double Mean(unsigned long nbSim);

        double Variance(unsigned long nbSim);

        

    protected:
        std::mt19937 engine_;

};