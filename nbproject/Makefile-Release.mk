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
	${OBJECTDIR}/Characters/SkillExpClass.o \
	${OBJECTDIR}/Characters/WeaponSkillExpClass.o \
	${OBJECTDIR}/Events/CombatEvent.o \
	${OBJECTDIR}/Events/Event.o \
	${OBJECTDIR}/Maps/Map.o \
	${OBJECTDIR}/Maps/Tile.o \
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

${OBJECTDIR}/Characters/SkillExpClass.o: Characters/SkillExpClass.cpp 
	${MKDIR} -p ${OBJECTDIR}/Characters
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Characters/SkillExpClass.o Characters/SkillExpClass.cpp

${OBJECTDIR}/Characters/WeaponSkillExpClass.o: Characters/WeaponSkillExpClass.cpp 
	${MKDIR} -p ${OBJECTDIR}/Characters
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Characters/WeaponSkillExpClass.o Characters/WeaponSkillExpClass.cpp

${OBJECTDIR}/Events/CombatEvent.o: Events/CombatEvent.cpp 
	${MKDIR} -p ${OBJECTDIR}/Events
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Events/CombatEvent.o Events/CombatEvent.cpp

${OBJECTDIR}/Events/Event.o: Events/Event.cpp 
	${MKDIR} -p ${OBJECTDIR}/Events
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Events/Event.o Events/Event.cpp

${OBJECTDIR}/Maps/Map.o: Maps/Map.cpp 
	${MKDIR} -p ${OBJECTDIR}/Maps
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Maps/Map.o Maps/Map.cpp

${OBJECTDIR}/Maps/Tile.o: Maps/Tile.cpp 
	${MKDIR} -p ${OBJECTDIR}/Maps
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Maps/Tile.o Maps/Tile.cpp

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
