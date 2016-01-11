/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Mob.h
 * Author: David
 *
 * Created on January 7, 2016, 12:57 PM
 */

#ifndef MOB_H
#define MOB_H

class Mob:public Character {
public:
    Mob();
    Mob(const Mob& orig);
    virtual ~Mob();
    
private:
    unsigned int mobType;
    enum mobRace {
        Undead,
        Horror,
        Demon,
        Elemental,
        Beast,
        Plant,
        Demihuman,
    };
    void SetMobRaceStats();
    void SetMobStatScaling();

};

#endif /* MOB_H */

