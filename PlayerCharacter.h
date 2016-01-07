/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PlayerCharacter.h
 * Author: David
 *
 * Created on January 7, 2016, 1:02 PM
 */

#ifndef PLAYERCHARACTER_H
#define PLAYERCHARACTER_H

class PlayerCharacter:public Character {
public:
    PlayerCharacter();
    PlayerCharacter(const PlayerCharacter& orig);
    virtual ~PlayerCharacter();
    
private:

};

#endif /* PLAYERCHARACTER_H */

