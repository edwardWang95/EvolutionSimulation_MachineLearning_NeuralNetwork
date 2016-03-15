//
//  Enviroment.hpp
//  EvolutionSimulator
//
//  Created by Edward Wang on 3/14/16.
//  Copyright © 2016 MidnightOwls. All rights reserved.
//

#ifndef Enviroment_hpp
#define Enviroment_hpp

#include <stdio.h>
#include "Land.hpp"

class Enviroment{
private:
    int length;
    int width;
    int area;
    Land landMass[];
    
public:
    Enviroment(int length, int width);
    void generateEnv();
    void updateEnv();
};

#endif /* Enviroment_hpp */
