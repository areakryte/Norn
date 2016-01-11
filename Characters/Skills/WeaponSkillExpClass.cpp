/*
 * Base skill exp class for all weapon mastery skills.
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
    SkillExpClass();
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

