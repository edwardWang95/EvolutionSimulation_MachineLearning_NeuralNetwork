//
//  Simulation.cpp
//  EvolutionSimulator
//
//  Created by Edward Wang on 3/14/16.
//  Copyright © 2016 MidnightOwls. All rights reserved.
//

#include "Simulation.hpp"
#include <iostream>

using namespace std;

/*
 Set the speed of the simulation to be by default 1 second per generation.
 -use the enviroment(1,1) so that the construtor knows which constructor to call for enviroment
 */
Simulation::Simulation(): enviroment(1,1){
    simSpeed = 1000;
}

/*
 Begin the simulation. As every second passes by, the 
 */
void Simulation::run(){
    
}

/*
 Update the simulation by the simulation speed.
 */
void Simulation::updateGeneration(){
    
}

/*
 Set the speed at which each generation passes by.
 */
void Simulation::setSimSpeed(int simSpeed){
    this->simSpeed = simSpeed;
}