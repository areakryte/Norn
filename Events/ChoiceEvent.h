/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ChoiceEvent.h
 * Author: David
 *
 * Created on January 7, 2016, 11:30 AM
 */

#ifndef CHOICEEVENT_H
#define CHOICEEVENT_H

class ChoiceEvent:public DialogueEvent {
public:
    ChoiceEvent();
    ChoiceEvent(const ChoiceEvent& orig);
    virtual ~ChoiceEvent();
    
private:

};

#endif /* CHOICEEVENT_H */

