/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TimedCombatEvent.h
 * Author: David
 *
 * Created on January 6, 2016, 4:37 PM
 */

#ifndef TIMEDCOMBATEVENT_H
#define TIMEDCOMBATEVENT_H

class TimedCombatEvent:public CombatEvent {
public:
    TimedCombatEvent();
    TimedCombatEvent(const TimedCombatEvent& orig);
    virtual ~TimedCombatEvent();
    
private:

};

#endif /* TIMEDCOMBATEVENT_H */

