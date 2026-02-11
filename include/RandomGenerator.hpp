#pragma once
#include <random>

class RandomGenerator{

    public:
        explicit RandomGenerator(unsigned int seed = std::random_device{}()): engine_(seed) {}
        virtual ~RandomGenerator() = default;

        virtual double Generate() = 0;

        virtual double Mean(unsigned long nbSim)  = 0;

    protected:
        std::mt19937 engine_;

};