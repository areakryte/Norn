/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   WeaponSkillExpClass.cpp
 * Author: David
 * 
 * Created on January 5, 2016, 2:54 PM
 */
#include <string>
#include <cstdlib>
#include "SkillExpClass.h"
#include "WeaponSkillExpClass.h"

WeaponSkillExpClass::WeaponSkillExpClass() {
    totalExp = 0;
    levelCount = 0;
    skillName = "Weapon Mastery";
    skillDescription = "Skill with weapons";
}

WeaponSkillExpClass::WeaponSkillExpClass(const WeaponSkillExpClass& orig) {
    
}

WeaponSkillExpClass::~WeaponSkillExpClass() {
    
}

int WeaponSkillExpClass::SkillEffect(){
    return 0;
}

int WeaponSkillExpClass::SkillEffectModifier() {
    return 0;
}

std::string WeaponSkillExpClass::GetSkillName() {
    return skillName;
}

std::string WeaponSkillExpClass::GetSkillDescription() {
    return skillDescription;
}

int WeaponSkillExpClass::SkillFinalResult() {
    return 0;
}
