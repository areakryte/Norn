/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RandomCombatEvent.h
 * Author: David
 *
 * Created on January 6, 2016, 4:35 PM
 */

#ifndef RANDOMCOMBATEVENT_H
#define RANDOMCOMBATEVENT_H

class RandomCombatEvent:public CombatEvent {
public:
    RandomCombatEvent();
    RandomCombatEvent(const RandomCombatEvent& orig);
    virtual ~RandomCombatEvent();
    
private:

};

#endif /* RANDOMCOMBATEVENT_H */

