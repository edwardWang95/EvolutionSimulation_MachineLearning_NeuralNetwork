//
//  Enviroment.cpp
//  EvolutionSimulator
//
//  Created by Edward Wang on 3/14/16.
//  Copyright © 2016 MidnightOwls. All rights reserved.
//

#include "Enviroment.hpp"

Enviroment::Enviroment(int length, int width){
    this->length = length;
    this->width = width;
    area = length*width;
}

/*
 Creates the new enviroment with each land item having a randomly generated
 number of resources
 */
void Enviroment::generateEnv(){
    for(int i=0;i<area;i++){
        landMass[i] = *new Land();
    }
}

/*
 Every new year, the values of each land will alter slightly
 */
void Enviroment::updateEnv(){
    
}