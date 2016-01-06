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
    totalExp = 0;
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
    totalExp += expGain;
    SkillExpClass::SkillLevelUp();
    return expCount;
}

    void SkillExpClass::SkillLevelUp() {
        //TODO: If else statement, or better data structure for levels
    switch (totalExp) {
        expCount = totalExp;
        case 650:
            levelCount = 5;
            expCount -= 150;
            break;
        case 500:
            levelCount = 4;
            expCount -= 150;
            break;
        case 350:
            levelCount = 3;
            expCount -= 125;
            break;
        case 225:
            levelCount = 2;
            expCount -= 125;
            break;    
        case 100:
            levelCount = 1;
            expCount -= 100;
            break;
        default:
            break;
    }
}

void SkillExpClass::DisplaySkillProgress() {
    std::cout << "Current Level: " << levelCount << "\n";
    std::cout << "Current Exp: " << expCount << "\n";
    std::cout << "Total Exp: " << totalExp << "\n";
}