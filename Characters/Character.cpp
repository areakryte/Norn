/*
 * Abstract class for all characters
 * Make the Default race the weakest
 * No starting stat will exceed 10
 * The base class does not have a job class
 * The starting cap for all stats should be 42  points. 
 */

/* 
 * File:   Character.cpp
 * Author: David
 * 
 * Created on January 6, 2016, 9:28 AM
 */

#include "Character.h"

Character::Character() {
    characterName = "";
    characterTitle = "";
    characterDescription = "";
    characterRace = 0;
    SetRaceStats();
}

Character::Character(const Character& orig) {
    
}

Character::~Character() {
    
}

void Character::SetRaceStats() {
    switch(characterRace)
    {
        case Elf:
            strength = 5;
            dexterity = 7;
            intelligence = 7;
            constitution = 5;
            agility = 9;
            wisdom = 5;
            luck = 4;
            break;
        case Human:
            strength = 7;
            dexterity = 5;
            intelligence = 9;
            constitution = 7;
            agility = 5;
            wisdom = 6;
            luck = 3;
            break;
        case Orc:
            strength = 8;
            dexterity = 5;
            intelligence = 5;
            constitution = 9;
            agility = 5;
            wisdom = 7;
            luck = 3;
            break;
        case Lamia:
            strength = 7;
            dexterity = 8;
            intelligence = 4;
            constitution = 3;
            agility = 8;
            wisdom = 3;
            luck = 9;
            break;
        default:
            //Default will be used for all mob classes
            strength = 3;
            dexterity = 3;
            intelligence = 3;
            constitution = 3;
            agility = 3;
            wisdom = 3;
            luck = 3;
            break;
    }
}

