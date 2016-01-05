/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   WeaponSkillExpClass.h
 * Author: David
 *
 * Created on January 5, 2016, 2:54 PM
 */

#ifndef WEAPONSKILLEXPCLASS_H
#define WEAPONSKILLEXPCLASS_H

class WeaponSkillExpClass: public SkillExpClass {
public:
    WeaponSkillExpClass();
    WeaponSkillExpClass(const WeaponSkillExpClass& orig);
    virtual ~WeaponSkillExpClass();
    int SkillEffect();
    int SkillEffectModifier();
    std::string GetSkillName();
    std::string GetSkillDescription();
    void SetSkillName();
    void SetSkillDescription();
    int SkillFinalResult();
    
private:

};

#endif /* WEAPONSKILLEXPCLASS_H */

