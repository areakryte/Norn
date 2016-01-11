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
    characterRace = 1;
    SetRaceStats(characterRace);
}

Character::Character(const Character& orig) {
    
}

Character::~Character() {
    
}

void Character::SetRaceStats(int characterRace) {
    switch(characterRace)
    {
        case Elf:
            strength = 4;
            dexterity = 7;
            intelligence = 7;
            constitution = 5;
            agility = 9;
            wisdom = 5;
            luck = 5;
            break;
        case Human:
            strength = 7;
            dexterity = 6;
            intelligence = 7;
            constitution = 7;
            agility = 6;
            wisdom = 6;
            luck = 3;
            break;
        case Orc:
            strength = 9;
            dexterity = 5;
            intelligence = 5;
            constitution = 9;
            agility = 4;
            wisdom = 9;
            luck = 1;
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
            strength = 6;
            dexterity = 6;
            intelligence = 6;
            constitution = 6;
            agility = 6;
            wisdom = 6;
            luck = 6;
            break;
    }
}

