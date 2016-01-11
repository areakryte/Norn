/*
 * Abstract monster class.
 * There can be racial monsters type mobs, so they get character class bonuses
 * and mob race bonuses. Default is not to be used. Character's default is to be
 * used.
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
    Character();
    mobType = 0;
    SetMobRaceStats();
    isBoss = 0;
}

Mob::Mob(const Mob& orig) {
    
}

Mob::~Mob() {
    
}

void Mob::SetMobRaceStats() {
    switch(mobType) {
        //Yes, this means that there are racial and mob bonuses for a zombie elf
        case Undead:
            strength *= 1.1;
            constitution *= 1.3;
            break;
        case Horror:
            intelligence *= 1.3;
            wisdom *= 1.1;
            break;
        case Demon:
            intelligence *= 1.2;
            wisdom *= 1.2;
            break;
        case Elemental:
            break;
        case Beast:
            break;
        case Plant:
            break;
        default:
            break;
    }
}

void Mob::IsBoss() {
    isBoss = 1;
}
