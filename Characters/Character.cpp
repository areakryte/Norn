/*
 * Abstract class for all characters
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
            strength = 1;
            dexterity = 1;
            intelligence = 1;
            constitution = 1;
            agility = 1;
            wisdom = 1;
            luck = 1;
            break;
        case Human:
            strength = 1;
            dexterity = 1;
            intelligence = 1;
            constitution = 1;
            agility = 1;
            wisdom = 1;
            luck = 1;
            break;
        case Orc:
            strength = 1;
            dexterity = 1;
            intelligence = 1;
            constitution = 1;
            agility = 1;
            wisdom = 1;
            luck = 1;
            break;
        case Lamia:
            strength = 1;
            dexterity = 1;
            intelligence = 1;
            constitution = 1;
            agility = 1;
            wisdom = 1;
            luck = 1;
            break;
        default:
            strength = 1;
            dexterity = 1;
            intelligence = 1;
            constitution = 1;
            agility = 1;
            wisdom = 1;
            luck = 1;
            break;
    }
}

