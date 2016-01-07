/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DialogueEvent.h
 * Author: David
 *
 * Created on January 6, 2016, 4:12 PM
 */

#ifndef DIALOGUEEVENT_H
#define DIALOGUEEVENT_H

class DialogueEvent:public Event {
public:
    DialogueEvent();
    DialogueEvent(const DialogueEvent& orig);
    virtual ~DialogueEvent();
    void SetTrigger();
    void SetTriggerChance();
    
private:

};

#endif /* DIALOGUEEVENT_H */

