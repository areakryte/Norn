/*
 * Event in which there is dialogue or another character speaking.
 */

/* 
 * File:   DialogueEvent.cpp
 * Author: David
 * 
 * Created on January 6, 2016, 4:12 PM
 */

#include "Event.h"
#include "DialogueEvent.h"

DialogueEvent::DialogueEvent() {
    Event();
}

DialogueEvent::DialogueEvent(const DialogueEvent& orig) {
    
}

DialogueEvent::~DialogueEvent() {
    
}

void DialogueEvent::SetTrigger() {
    trigger = 1;
}

void DialogueEvent::SetTriggerChance() {
    triggerChance = 1;
}

