/*
 * Player character class
 */

/* 
 * File:   PlayerCharacter.cpp
 * Author: David
 * 
 * Created on January 7, 2016, 1:02 PM
 */

#include "Character.h"
#include "PlayerCharacter.h"

PlayerCharacter::PlayerCharacter() {
    characterName = "";
    characterTitle = "";
    characterDescription = "";
    characterRace = 1;
    SetRaceStats(characterRace);
}

PlayerCharacter::PlayerCharacter(const PlayerCharacter& orig) {
    
}

PlayerCharacter::~PlayerCharacter() {
    
}

