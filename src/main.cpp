#include "../include/LinearCongruential.hpp"
#include <memory>


int main(){

    size_t seed = 27;
    size_t multiplier = 17;
    size_t increment = 43;
    size_t modulus = 100;


    std::shared_ptr<RandomGenerator> Gen(new LinearCongruential(seed, multiplier, increment, modulus));
    //LinearCongruential* Gen = new LinearCongruential(seed, multiplier, increment, modulus);



    std::cout<<"Hello"<<std::endl;

    for(int i = 0; i < 3; i++){
        double currentNumber = Gen->Generate();
        std::cout<<currentNumber<<std::endl;

    }

    unsigned long int num = 1000;
    double mean = Gen->Mean(num);





}