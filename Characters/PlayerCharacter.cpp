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
    SetRaceStats();
}

PlayerCharacter::PlayerCharacter(const PlayerCharacter& orig) {
    
}

PlayerCharacter::~PlayerCharacter() {
    
}

void PlayerCharacter::DisplayCharacterName() {
    std::cout << characterName;
}

void PlayerCharacter::SetCharacterName(std::string name) {
    characterName = name;
}

void  PlayerCharacter::DisplayCharacterTitle() {
    std::cout << characterTitle;
}

void PlayerCharacter::SetCharacterTitle(std::string title) {
    characterTitle = title;
}

void PlayerCharacter::DisplayCharacterDescription() {
    std::cout << characterDescription;
}

void PlayerCharacter::SetCharacterDescription(std::string discription) {
    characterDescription = discription;
}

void PlayerCharacter::SetCharacterRace(unsigned int num) {
    characterRace = num;
    SetRaceStats();
}
