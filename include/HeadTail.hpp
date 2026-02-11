#pragma once
#include "DiscreteGenerator.hpp"

class HeadTail : public DiscreteGenerator{

    public:
        using DiscreteGenerator::DiscreteGenerator;
        ~HeadTail() = default;
        double Generate();

    private:
        std::uniform_real_distribution<double> dist_{0.0, 1.0};
};