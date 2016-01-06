/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CombatEvent.h
 * Author: David
 *
 * Created on January 6, 2016, 3:40 PM
 */

#ifndef COMBATEVENT_H
#define COMBATEVENT_H

class CombatEvent:public Event {
public:
    CombatEvent();
    CombatEvent(const CombatEvent& orig);
    virtual ~CombatEvent();
    void SetTriggered();
    void SetTriggerChance();
    
private:

};

#endif /* COMBATEVENT_H */

