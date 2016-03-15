//
//  Land.cpp
//  EvolutionSimulator
//
//  Created by Edward Wang on 3/14/16.
//  Copyright © 2016 MidnightOwls. All rights reserved.
//

#include "Land.hpp"

inline void Land::setRandomValue(int var){
    var = (rand() * 100);
}

Land::Land(){
    //set the values of the max and mins
    setRandomValue(temp);
    setRandomValue(hum);
    setRandomValue(sun);
    setRandomValue(rain);
    setRandomValue(oxy);
}

/*
 From the given eviromental factors, the given resource values will be calculated
 */
void Land::calcAvailResources(){
    
}



