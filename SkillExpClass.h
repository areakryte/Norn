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

#ifndef SKILLEXPCLASS_H
#define SKILLEXPCLASS_H

class SkillExpClass {
public:
    SkillExpClass();
    SkillExpClass(const SkillExpClass& orig);
    virtual ~SkillExpClass();
    int SkillExpGain(int expGain);
    int SkillLevelUp();
    virtual int SkillEffect(){};
    virtual int SkillEffectModifier(){};
    virtual std::string GetSkillName(){};
    virtual std::string GetSkillDescription(){};
    virtual void SetSkillName(){};
    virtual void SetSKillDescription(){};
    virtual int SkillFinalResult(){};
    
protected:
    unsigned int expCount;
    unsigned int levelCount;
    unsigned int levelCap;
    std::string skillName;
    std::string skillDescription;
};

#endif /* SKILLEXPCLASS_H */

