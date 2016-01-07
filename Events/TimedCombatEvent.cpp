/*
 * A combat event that is restricted by the number of rounds that you can take
 */

/* 
 * File:   TimedCombatEvent.cpp
 * Author: David
 * 
 * Created on January 6, 2016, 4:37 PM
 */

#include "Event.h"
#include "CombatEvent.h"
#include "TimedCombatEvent.h"

TimedCombatEvent::TimedCombatEvent() {
    Event();
}

TimedCombatEvent::TimedCombatEvent(const TimedCombatEvent& orig) {
    
}

TimedCombatEvent::~TimedCombatEvent() {
    
}

