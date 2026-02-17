#include "../include/DiscreteGenerator.hpp"

double DiscreteGenerator::Mean(unsigned long nbSim){
    long sum_gen = 0;
    for(int i = 0; i <= nbSim; i++){
        sum_gen += Generate();
    }
    return sum_gen/nbSim;

};



