//
//  Specie.hpp
//  EvolutionSimulator
//
//  Created by Edward Wang on 3/14/16.
//  Copyright © 2016 MidnightOwls. All rights reserved.
//

#ifndef Specie_hpp
#define Specie_hpp

#include <stdio.h>

class Specie{
private:
    /*
     These are all the variables related to a species, including their range and optimal livin conditions
     */
    //Temp
    int optTemp;
    int maxTemp;
    int minTemp;
    
    //Hum
    int optHum;
    int maxHum;
    int minHum;
    
    //Sunlight
    int optSun;
    int maxSun;
    int minSun;
    
    //Rain
    int optRain;
    int minRain;
    int maxRain;
    
    //Oxygen
    int optOxy;
    int minOxy;
    int maxOxy;
    
    //Death Rate
    
    
    //Stress
    
    
public:
    //constants references
    static const int TEMP = 0;
    static const int HUM = 1;
    static const int SUN = 2;
    static const int RAIN = 3;
    static const int OXY = 4;
    
    //Set Max and Mins
    void setMaxMin(int var, int max, int min);
};

#endif /* Specie_hpp */
