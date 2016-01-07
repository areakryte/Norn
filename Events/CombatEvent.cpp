/*
 * Basic combat event. Probably used for scripted battles.
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

void CombatEvent::SetTrigger() {
    trigger = 1;
}

void CombatEvent::SetTriggerChance() {
    triggerChance = 100;
}

