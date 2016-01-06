/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: David
 *
 * Created on January 5, 2016, 10:20 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>

#include "C:\Users\David\Documents\NetBeansProjects\Norn\Characters\SkillExpClass.h"
#include "C:\Users\David\Documents\NetBeansProjects\Norn\Characters\WeaponSkillExpClass.h"

/*
 * 
 */
int main(int argc, char** argv) {

    //Skill class tests
    WeaponSkillExpClass wskill;
    std::cout << wskill.GetSkillName() << "\n";
    std::cout << wskill.GetSkillDescription() << "\n";
    wskill.DisplaySkillProgress();
    wskill.SkillExpGain(50);
    wskill.DisplaySkillProgress();
    wskill.SkillExpGain(100);
    wskill.DisplaySkillProgress();
    
    return 0;
}

