/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CombatEvent.cpp
 * Author: David
 * 
 * Created on January 6, 2016, 3:40 PM
 */

#include "Event.h"
#include "CombatEvent.h"

CombatEvent::CombatEvent() {
    Event();
}

CombatEvent::CombatEvent(const CombatEvent& orig) {
    
}

CombatEvent::~CombatEvent() {
    
}

void CombatEvent::SetTriggered() {
    triggered = 1;
}

void CombatEvent::SetTriggerChance() {
    triggerChance = 100;
}

