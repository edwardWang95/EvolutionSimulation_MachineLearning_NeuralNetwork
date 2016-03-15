//
//  Land.cpp
//  EvolutionSimulator
//
//  Created by Edward Wang on 3/14/16.
//  Copyright © 2016 MidnightOwls. All rights reserved.
//

#include "Land.hpp"

/*
 Add or subtract a deviation to the given variables
 */
inline void Land::updateVar(int var){
    int addOrSub = rand()*100;
    int dev = var/(rand() * deviation);
    (addOrSub >= 50) ? var+=dev : var-+dev;
}

inline void Land::setRandomValue(int var){
    var = (rand() * 100);
}

/*
 From the given eviromental factors, the given resource values will be calculated
 */
inline void Land::calcAvailResources(){
    food = hum * nitrogen * sun;
    water = temp * hum;
}

Land::Land(){
    //set the values of the max and mins
    setRandomValue(temp);
    setRandomValue(hum);
    setRandomValue(sun);
    setRandomValue(rain);
    setRandomValue(oxy);
    setRandomValue(nitrogen);
    calcAvailResources();
}

/*
 Every generation, the values for the enviroment don't stay the same, it's constantly changing, forcing the animals to adapt to their enviroment or migrate.
 */
void Land::updateAverageValues(){
    updateVar(temp);
    updateVar(hum);
    updateVar(sun);
    updateVar(rain);
    updateVar(oxy);
    updateVar(nitrogen);
    calcAvailResources();
}



