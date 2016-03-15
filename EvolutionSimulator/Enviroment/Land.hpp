//
//  Land.hpp
//  EvolutionSimulator
//
//  Created by Edward Wang on 3/14/16.
//  Copyright © 2016 MidnightOwls. All rights reserved.
//

#ifndef Land_hpp
#define Land_hpp

#include <stdio.h>
#include <random>
#include <string>

using namespace std;

class Land{
private:
    //Land Variables
    int temp;
    int hum;
    int sun;
    int rain;
    int oxy;
    int nitrogen;
    
    //Resources available
    int food;
    int water;
    
    //Updating Values deviations and objects
    int deviation = 5;  //percent
    
    inline void setRandomValue(int var);
    inline void calcAvailResources();
    
    //update average value for given variable
    inline void updateVar(int var);
    
public:
    Land();
    
    void updateAverageValues();
    
    
};

#endif /* Land_hpp */
