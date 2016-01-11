/*
 * Monster classes and only monster classes. Humanoid classes will be under NPC classes.
 */

/* 
 * File:   Mob.cpp
 * Author: David
 * 
 * Created on January 7, 2016, 12:57 PM
 */

#include "Character.h"
#include "Mob.h"

Mob::Mob() {
    
}

Mob::Mob(const Mob& orig) {
    
}

Mob::~Mob() {
    
}

void Mob::SetMobRaceStats() {
    switch(mobType) {
        case Undead:
            break;
        case Horror:
            break;
        case Demon:
            break;
        case Elemental:
            break;
        case Beast:
            break;
        case Plant:
            break;
        case Demihuman:
            break;
        default:
            break;
    }
}

void Mob::SetMobStatScaling() {
    
}
