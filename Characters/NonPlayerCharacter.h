/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NonPlayerCharacter.h
 * Author: David
 *
 * Created on January 7, 2016, 1:08 PM
 */

#ifndef NONPLAYERCHARACTER_H
#define NONPLAYERCHARACTER_H

class NonPlayerCharacter:public Character {
public:
    NonPlayerCharacter();
    NonPlayerCharacter(const NonPlayerCharacter& orig);
    virtual ~NonPlayerCharacter();
    
private:

};

#endif /* NONPLAYERCHARACTER_H */

