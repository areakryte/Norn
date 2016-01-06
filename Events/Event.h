/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Event.h
 * Author: David
 *
 * Created on January 6, 2016, 3:30 PM
 */

#ifndef EVENT_H
#define EVENT_H

class Event {
public:
    Event();
    Event(const Event& orig);
    virtual ~Event();
    virtual void SetTriggered(){};
    virtual void SetTriggerChance(){};
    
protected:
    bool triggered;
    int triggerChance;
    
};

#endif /* EVENT_H */

