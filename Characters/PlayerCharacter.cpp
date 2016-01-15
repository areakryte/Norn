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

void PlayerCharacter::SetCharacterDescription(std::string description) {
    characterDescription = description;
}

void PlayerCharacter::DisplayCharacterRace() {
    switch(characterRace) {
        case 1:
            std::cout << "Human";
            break;
        case 2:
            std::cout << "Elf";
            break;
        case 3:
            std::cout << "Orc";
            break;
        case 4:
            std::cout << "Lamia";
            break;
        default:
            std::cout << "Default";
            break;
    }
}

void PlayerCharacter::SetCharacterRace(unsigned int num) {
    characterRace = num;
    SetRaceStats();
}
