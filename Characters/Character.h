 /*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Character.h
 * Author: David
 *
 * Created on January 6, 2016, 9:28 AM
 */
#include <string>
#include <iostream>

#ifndef CHARACTER_H
#define CHARACTER_H

class Character {
public:
    Character();
    Character(const Character& orig);
    virtual ~Character();
    virtual void DisplayCharacterName(){};
    virtual void SetCharacterName(std::string name){};
    virtual void DisplayCharacterTitle(){};
    virtual void SetCharacterTitle(std::string title){};
    virtual void DisplayCharacterDescription(){};
    virtual void SetCharacterDescription(std::string description){};
    virtual void DisplayCharacterRace(){};
    virtual void SetCharacterRace(unsigned int num){};
    virtual std::string DisplaySkills(){};
    virtual void AddCharacterSkill(){};
    virtual std::string DisplayStats(){};
    virtual void AddCharacterStat(){};
    virtual void SetCharacterEquipment(){};
    virtual void AddCharacterEquipment(){};
    virtual void RemoveCharacterEquipment(){};
    virtual void GetDerivedStats(){};
    
protected:
    std::string characterName;
    std::string characterTitle;
    std::string characterDescription;
    unsigned int characterRace;
    enum race {
        Default,
        Human,
        Elf,
        Orc,
        Lamia,
    };
    unsigned int strength;
    unsigned int dexterity;
    unsigned int intelligence;
    unsigned int constitution;
    unsigned int agility;
    unsigned int wisdom;
    unsigned int luck;
    void SetRaceStats();
    
    unsigned int level;
    unsigned int hp;
    unsigned int sp;
    int initative;  
    int def;
    int mdef;
    int acc;
    int eva;    
    
};

#endif /* CHARACTER_H */

