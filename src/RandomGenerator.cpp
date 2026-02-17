#include "../include/RandomGenerator.hpp"


double RandomGenerator::Mean(unsigned long nbSim){
    double sum_gen = 0.0;
    for(int i = 0; i <= nbSim; i++){
        sum_gen += Generate();
    }
    return sum_gen/nbSim;

};


double RandomGenerator::Variance(unsigned long nbSim){
    double sum = 0.0;
    double sumSq = 0.0;

    for(unsigned long i = 0; i < nbSim; i++){
        double x = Generate();
        sum += x;
        sumSq += x * x;
    }

    double mean = sum / nbSim;
    double meanSq = sumSq / nbSim;

    return meanSq - mean * mean;
}