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

namespace RacialPhenology
{
    enum class Race {
        Human,
        Elf,
        Orc,
        Lamia,
        Mob,
    };
}

using namespace RacialPhenology;

class Character {
public:
    Character();
    Character(const Character& orig);
    virtual ~Character();
    virtual void DisplayCharacterName(){};
    virtual void DisplayCharacterTitle(){};
    virtual void DisplayCharacterDescription(){};
    virtual void DisplayCharacterRace(){};
    virtual std::string DisplaySkills(){};
    virtual std::string DisplayStats(){};
    virtual void SetCharacterRace(){};
    virtual void AddCharacterSkill(){};
    virtual void AddCharacterStat(){};
    virtual void SetCharacterEquipment(){};
    
protected:
    std::string characterName;
    std::string characterTitle;
    std::string characterDescription;
    unsigned int strength;
    unsigned int dexterity;
    unsigned int intelligence;
    unsigned int constitution;
    unsigned int agility;
    unsigned int wisdom;
    unsigned int luck;
     
private:
    void SetRace();
    
};

#endif /* CHARACTER_H */

