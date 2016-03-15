//
//  Simulation.hpp
//  EvolutionSimulator
//
//  Created by Edward Wang on 3/14/16.
//  Copyright © 2016 MidnightOwls. All rights reserved.
//

#ifndef Simulation_hpp
#define Simulation_hpp

#include <stdio.h>
#include "Enviroment.hpp"

class Simulation{
private:
    int simSpeed;   //the speed of the simulation
    Enviroment enviroment;
    
    void updateGeneration();
    
public:
    Simulation();
    void run();
    void setSimSpeed(int simSpeed);
};

#endif /* Simulation_hpp */
