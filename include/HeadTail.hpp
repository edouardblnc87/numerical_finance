#pragma once
#include "DiscreteGenerator.hpp"

class HeadTail : public DiscreteGenerator{

    public:
        using DiscreteGenerator::DiscreteGenerator;
        ~HeadTail() = default;
        virtual double Generate();
};