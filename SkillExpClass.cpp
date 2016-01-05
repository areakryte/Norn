/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SkillExpClass.cpp
 * Author: David
 * 
 * Created on January 5, 2016, 11:39 AM
 */

#include "SkillExpClass.h"

SkillExpClass::SkillExpClass() {
    expCount = 0;
    levelCount = 0;
    levelCap = 0;
    skillName = "";
    skillDescription = "";
}

SkillExpClass::SkillExpClass(const SkillExpClass& orig) {
    
}

SkillExpClass::~SkillExpClass() {
    
}

int SkillExpClass::SkillExpGain(int expGain) {
    return expCount += expGain;
}

int SkillExpClass::SkillLevelUp() {
    return levelCount += 1;
}

