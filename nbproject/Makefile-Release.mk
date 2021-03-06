#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Characters/Character.o \
	${OBJECTDIR}/Characters/Mob.o \
	${OBJECTDIR}/Characters/NonPlayerCharacter.o \
	${OBJECTDIR}/Characters/PartyMember.o \
	${OBJECTDIR}/Characters/PlayerCharacter.o \
	${OBJECTDIR}/Characters/Skills/SkillExpClass.o \
	${OBJECTDIR}/Characters/Skills/WeaponSkillExpClass.o \
	${OBJECTDIR}/Events/ChoiceEvent.o \
	${OBJECTDIR}/Events/CombatEvent.o \
	${OBJECTDIR}/Events/DialogueEvent.o \
	${OBJECTDIR}/Events/Event.o \
	${OBJECTDIR}/Events/RandomCombatEvent.o \
	${OBJECTDIR}/Events/TimedCombatEvent.o \
	${OBJECTDIR}/Items/Armor.o \
	${OBJECTDIR}/Items/Item.o \
	${OBJECTDIR}/Items/UseableItem.o \
	${OBJECTDIR}/Items/Weapon.o \
	${OBJECTDIR}/Maps/CombatIcon.o \
	${OBJECTDIR}/Maps/Icon.o \
	${OBJECTDIR}/Maps/ItemIcon.o \
	${OBJECTDIR}/Maps/Map.o \
	${OBJECTDIR}/Maps/PlayerIcon.o \
	${OBJECTDIR}/Maps/Tile.o \
	${OBJECTDIR}/Menus/CharacterMenu.o \
	${OBJECTDIR}/Menus/Menu.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/norn.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/norn.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/norn ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Characters/Character.o: Characters/Character.cpp 
	${MKDIR} -p ${OBJECTDIR}/Characters
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Characters/Character.o Characters/Character.cpp

${OBJECTDIR}/Characters/Mob.o: Characters/Mob.cpp 
	${MKDIR} -p ${OBJECTDIR}/Characters
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Characters/Mob.o Characters/Mob.cpp

${OBJECTDIR}/Characters/NonPlayerCharacter.o: Characters/NonPlayerCharacter.cpp 
	${MKDIR} -p ${OBJECTDIR}/Characters
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Characters/NonPlayerCharacter.o Characters/NonPlayerCharacter.cpp

${OBJECTDIR}/Characters/PartyMember.o: Characters/PartyMember.cpp 
	${MKDIR} -p ${OBJECTDIR}/Characters
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Characters/PartyMember.o Characters/PartyMember.cpp

${OBJECTDIR}/Characters/PlayerCharacter.o: Characters/PlayerCharacter.cpp 
	${MKDIR} -p ${OBJECTDIR}/Characters
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Characters/PlayerCharacter.o Characters/PlayerCharacter.cpp

${OBJECTDIR}/Characters/Skills/SkillExpClass.o: Characters/Skills/SkillExpClass.cpp 
	${MKDIR} -p ${OBJECTDIR}/Characters/Skills
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Characters/Skills/SkillExpClass.o Characters/Skills/SkillExpClass.cpp

${OBJECTDIR}/Characters/Skills/WeaponSkillExpClass.o: Characters/Skills/WeaponSkillExpClass.cpp 
	${MKDIR} -p ${OBJECTDIR}/Characters/Skills
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Characters/Skills/WeaponSkillExpClass.o Characters/Skills/WeaponSkillExpClass.cpp

${OBJECTDIR}/Events/ChoiceEvent.o: Events/ChoiceEvent.cpp 
	${MKDIR} -p ${OBJECTDIR}/Events
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Events/ChoiceEvent.o Events/ChoiceEvent.cpp

${OBJECTDIR}/Events/CombatEvent.o: Events/CombatEvent.cpp 
	${MKDIR} -p ${OBJECTDIR}/Events
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Events/CombatEvent.o Events/CombatEvent.cpp

${OBJECTDIR}/Events/DialogueEvent.o: Events/DialogueEvent.cpp 
	${MKDIR} -p ${OBJECTDIR}/Events
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Events/DialogueEvent.o Events/DialogueEvent.cpp

${OBJECTDIR}/Events/Event.o: Events/Event.cpp 
	${MKDIR} -p ${OBJECTDIR}/Events
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Events/Event.o Events/Event.cpp

${OBJECTDIR}/Events/RandomCombatEvent.o: Events/RandomCombatEvent.cpp 
	${MKDIR} -p ${OBJECTDIR}/Events
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Events/RandomCombatEvent.o Events/RandomCombatEvent.cpp

${OBJECTDIR}/Events/TimedCombatEvent.o: Events/TimedCombatEvent.cpp 
	${MKDIR} -p ${OBJECTDIR}/Events
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Events/TimedCombatEvent.o Events/TimedCombatEvent.cpp

${OBJECTDIR}/Items/Armor.o: Items/Armor.cpp 
	${MKDIR} -p ${OBJECTDIR}/Items
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Items/Armor.o Items/Armor.cpp

${OBJECTDIR}/Items/Item.o: Items/Item.cpp 
	${MKDIR} -p ${OBJECTDIR}/Items
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Items/Item.o Items/Item.cpp

${OBJECTDIR}/Items/UseableItem.o: Items/UseableItem.cpp 
	${MKDIR} -p ${OBJECTDIR}/Items
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Items/UseableItem.o Items/UseableItem.cpp

${OBJECTDIR}/Items/Weapon.o: Items/Weapon.cpp 
	${MKDIR} -p ${OBJECTDIR}/Items
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Items/Weapon.o Items/Weapon.cpp

${OBJECTDIR}/Maps/CombatIcon.o: Maps/CombatIcon.cpp 
	${MKDIR} -p ${OBJECTDIR}/Maps
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Maps/CombatIcon.o Maps/CombatIcon.cpp

${OBJECTDIR}/Maps/Icon.o: Maps/Icon.cpp 
	${MKDIR} -p ${OBJECTDIR}/Maps
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Maps/Icon.o Maps/Icon.cpp

${OBJECTDIR}/Maps/ItemIcon.o: Maps/ItemIcon.cpp 
	${MKDIR} -p ${OBJECTDIR}/Maps
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Maps/ItemIcon.o Maps/ItemIcon.cpp

${OBJECTDIR}/Maps/Map.o: Maps/Map.cpp 
	${MKDIR} -p ${OBJECTDIR}/Maps
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Maps/Map.o Maps/Map.cpp

${OBJECTDIR}/Maps/PlayerIcon.o: Maps/PlayerIcon.cpp 
	${MKDIR} -p ${OBJECTDIR}/Maps
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Maps/PlayerIcon.o Maps/PlayerIcon.cpp

${OBJECTDIR}/Maps/Tile.o: Maps/Tile.cpp 
	${MKDIR} -p ${OBJECTDIR}/Maps
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Maps/Tile.o Maps/Tile.cpp

${OBJECTDIR}/Menus/CharacterMenu.o: Menus/CharacterMenu.cpp 
	${MKDIR} -p ${OBJECTDIR}/Menus
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Menus/CharacterMenu.o Menus/CharacterMenu.cpp

${OBJECTDIR}/Menus/Menu.o: Menus/Menu.cpp 
	${MKDIR} -p ${OBJECTDIR}/Menus
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Menus/Menu.o Menus/Menu.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/norn.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
