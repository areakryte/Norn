/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
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

