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
    virtual void SetCharacterDiscription(std::string discription){};
    virtual void DisplayCharacterRace(){};
    virtual void SetCharacterRace(unsigned int num){};
    virtual std::string DisplaySkills(){};
    virtual void AddCharacterSkill(){};
    virtual std::string DisplayStats(){};
    virtual void AddCharacterStat(){};
    virtual void SetCharacterEquipment(){};
    virtual void AddCharacterEquipment(){};
    virtual void RemoveCharacterEquipment(){};
    
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
    void SetRaceStats(int characterRace);
    
};

#endif /* CHARACTER_H */

