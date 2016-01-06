/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
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
    strength = 1;
    dexterity = 1;
    intelligence = 1;
    constitution = 1;
    agility = 1;
    wisdom = 1;
    luck = 1;
}

Character::Character(const Character& orig) {
    
}

Character::~Character() {
    
}

