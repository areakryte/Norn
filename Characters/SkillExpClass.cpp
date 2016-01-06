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
    totalExp = 0;
    levelCount = 0;
    skillName = "";
    skillDescription = "";
}

SkillExpClass::SkillExpClass(const SkillExpClass& orig) {
    
}

SkillExpClass::~SkillExpClass() {
    
}

void SkillExpClass::SkillExpGain(unsigned int expGain) {
    totalExp += expGain;
    SkillExpClass::SkillLevelUp();
}

void SkillExpClass::SkillLevelUp() {
        if (totalExp >= 750) {
            levelCount = 5;
        }
        else if (totalExp >= 375) {
            levelCount = 4;
        }
        else if (totalExp >= 225) {
            levelCount = 3;
        }
        else if (totalExp >= 100) {
            levelCount = 2;
        }
        else {
            levelCount = 1;
        }
}

void SkillExpClass::DisplaySkillProgress() {
    std::cout << "Current Level: " << levelCount << "\n";
    std::cout << "Total Exp: " << totalExp << "\n";
}