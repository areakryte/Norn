/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SkillExpClass.h
 * Author: David
 *
 * Created on January 5, 2016, 11:39 AM
 */
#include <string>
#include <cstdlib>
#include <iostream>

#ifndef SKILLEXPCLASS_H
#define SKILLEXPCLASS_H

class SkillExpClass {
public:
    SkillExpClass();
    SkillExpClass(const SkillExpClass& orig);
    virtual ~SkillExpClass();
    virtual void SkillExpGain(int expGain);
    void SkillLevelUp();
    void DisplaySkillProgress();
    virtual int SkillEffect(){};
    virtual int SkillEffectModifier(){};
    virtual std::string GetSkillName(){};
    virtual std::string GetSkillDescription(){};
    virtual int SkillFinalResult(){};
    
protected:
    unsigned int totalExp;
    unsigned int levelCount;
    std::string skillName;
    std::string skillDescription;
};

#endif /* SKILLEXPCLASS_H */

