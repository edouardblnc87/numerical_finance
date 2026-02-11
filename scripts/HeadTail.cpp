# include "../include/HeadTail.hpp"



double HeadTail::Generate(){
    double u = dist_(engine_);  
    if (u < 0.5)
        return 0.0;   
    else
        return 1.0;   
}