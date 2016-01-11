/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PartyMember.h
 * Author: David
 *
 * Created on January 11, 2016, 9:02 AM
 */

#ifndef PARTYMEMBER_H
#define PARTYMEMBER_H

class PartyMember:public NonPlayerCharacter {
public:
    PartyMember();
    PartyMember(const PartyMember& orig);
    virtual ~PartyMember();
    
private:

};

#endif /* PARTYMEMBER_H */

