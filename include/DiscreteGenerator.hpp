#pragma once
#include "RandomGenerator.hpp"

class DiscreteGenerator : public RandomGenerator{

    public:

        using RandomGenerator::RandomGenerator;
        virtual ~DiscreteGenerator() = default;

        double Mean(unsigned long nbSim) override;

};