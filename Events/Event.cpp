/*
 * Abstract Event Class
 */

/* 
 * File:   Event.cpp
 * Author: David
 * 
 * Created on January 6, 2016, 3:30 PM
 */

#include "Event.h"

Event::Event() {
    trigger = 1;
    triggerChance = 100;
}

Event::Event(const Event& orig) {
    
}

Event::~Event() {
    
}

