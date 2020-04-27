#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-default.mk)" "nbproject/Makefile-local-default.mk"
include nbproject/Makefile-local-default.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=default
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/ChronoApp.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/ChronoApp.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

ifeq ($(COMPARE_BUILD), true)
COMPARISON_BUILD=--mafrlcsj
else
COMPARISON_BUILD=
endif

ifdef SUB_IMAGE_ADDRESS

else
SUB_IMAGE_ADDRESS_COMMAND=
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=../../main.c ../../../../../bsp/timer0/src/timer0_init.c ../../../../../bsp/timer0/src/timer0_isr_process.c ../../../../../bsp/timer0/src/timer0_reload.c ../../../../../bsp/uart/src/uart_getc.c ../../../../../bsp/uart/src/uart_gets.c ../../../../../bsp/uart/src/uart_init.c ../../../../../bsp/uart/src/uart_putc.c ../../../../../bsp/uart/src/uart_puts.c app_init.c task_control.c ../../../../../bsp/mlcd/src/lcd_gotoXY.c ../../../../../bsp/mlcd/src/lcd_init.c ../../../../../bsp/mlcd/src/lcd_sendChar.c ../../../../../bsp/mlcd/src/lcd_sendCommand.c ../../../../../bsp/mlcd/src/lcd_sendString.c ../../../../../bsp/mlcd/src/lcd_sendStringXY.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/_ext/43898991/main.p1 ${OBJECTDIR}/_ext/1126170143/timer0_init.p1 ${OBJECTDIR}/_ext/1126170143/timer0_isr_process.p1 ${OBJECTDIR}/_ext/1126170143/timer0_reload.p1 ${OBJECTDIR}/_ext/695955294/uart_getc.p1 ${OBJECTDIR}/_ext/695955294/uart_gets.p1 ${OBJECTDIR}/_ext/695955294/uart_init.p1 ${OBJECTDIR}/_ext/695955294/uart_putc.p1 ${OBJECTDIR}/_ext/695955294/uart_puts.p1 ${OBJECTDIR}/app_init.p1 ${OBJECTDIR}/task_control.p1 ${OBJECTDIR}/_ext/1025143788/lcd_gotoXY.p1 ${OBJECTDIR}/_ext/1025143788/lcd_init.p1 ${OBJECTDIR}/_ext/1025143788/lcd_sendChar.p1 ${OBJECTDIR}/_ext/1025143788/lcd_sendCommand.p1 ${OBJECTDIR}/_ext/1025143788/lcd_sendString.p1 ${OBJECTDIR}/_ext/1025143788/lcd_sendStringXY.p1
POSSIBLE_DEPFILES=${OBJECTDIR}/_ext/43898991/main.p1.d ${OBJECTDIR}/_ext/1126170143/timer0_init.p1.d ${OBJECTDIR}/_ext/1126170143/timer0_isr_process.p1.d ${OBJECTDIR}/_ext/1126170143/timer0_reload.p1.d ${OBJECTDIR}/_ext/695955294/uart_getc.p1.d ${OBJECTDIR}/_ext/695955294/uart_gets.p1.d ${OBJECTDIR}/_ext/695955294/uart_init.p1.d ${OBJECTDIR}/_ext/695955294/uart_putc.p1.d ${OBJECTDIR}/_ext/695955294/uart_puts.p1.d ${OBJECTDIR}/app_init.p1.d ${OBJECTDIR}/task_control.p1.d ${OBJECTDIR}/_ext/1025143788/lcd_gotoXY.p1.d ${OBJECTDIR}/_ext/1025143788/lcd_init.p1.d ${OBJECTDIR}/_ext/1025143788/lcd_sendChar.p1.d ${OBJECTDIR}/_ext/1025143788/lcd_sendCommand.p1.d ${OBJECTDIR}/_ext/1025143788/lcd_sendString.p1.d ${OBJECTDIR}/_ext/1025143788/lcd_sendStringXY.p1.d

# Object Files
OBJECTFILES=${OBJECTDIR}/_ext/43898991/main.p1 ${OBJECTDIR}/_ext/1126170143/timer0_init.p1 ${OBJECTDIR}/_ext/1126170143/timer0_isr_process.p1 ${OBJECTDIR}/_ext/1126170143/timer0_reload.p1 ${OBJECTDIR}/_ext/695955294/uart_getc.p1 ${OBJECTDIR}/_ext/695955294/uart_gets.p1 ${OBJECTDIR}/_ext/695955294/uart_init.p1 ${OBJECTDIR}/_ext/695955294/uart_putc.p1 ${OBJECTDIR}/_ext/695955294/uart_puts.p1 ${OBJECTDIR}/app_init.p1 ${OBJECTDIR}/task_control.p1 ${OBJECTDIR}/_ext/1025143788/lcd_gotoXY.p1 ${OBJECTDIR}/_ext/1025143788/lcd_init.p1 ${OBJECTDIR}/_ext/1025143788/lcd_sendChar.p1 ${OBJECTDIR}/_ext/1025143788/lcd_sendCommand.p1 ${OBJECTDIR}/_ext/1025143788/lcd_sendString.p1 ${OBJECTDIR}/_ext/1025143788/lcd_sendStringXY.p1

# Source Files
SOURCEFILES=../../main.c ../../../../../bsp/timer0/src/timer0_init.c ../../../../../bsp/timer0/src/timer0_isr_process.c ../../../../../bsp/timer0/src/timer0_reload.c ../../../../../bsp/uart/src/uart_getc.c ../../../../../bsp/uart/src/uart_gets.c ../../../../../bsp/uart/src/uart_init.c ../../../../../bsp/uart/src/uart_putc.c ../../../../../bsp/uart/src/uart_puts.c app_init.c task_control.c ../../../../../bsp/mlcd/src/lcd_gotoXY.c ../../../../../bsp/mlcd/src/lcd_init.c ../../../../../bsp/mlcd/src/lcd_sendChar.c ../../../../../bsp/mlcd/src/lcd_sendCommand.c ../../../../../bsp/mlcd/src/lcd_sendString.c ../../../../../bsp/mlcd/src/lcd_sendStringXY.c



CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

.build-conf:  ${BUILD_SUBPROJECTS}
ifneq ($(INFORMATION_MESSAGE), )
	@echo $(INFORMATION_MESSAGE)
endif
	${MAKE}  -f nbproject/Makefile-default.mk dist/${CND_CONF}/${IMAGE_TYPE}/ChronoApp.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=18F4550
# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/_ext/43898991/main.p1: ../../main.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/43898991" 
	@${RM} ${OBJECTDIR}/_ext/43898991/main.p1.d 
	@${RM} ${OBJECTDIR}/_ext/43898991/main.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G  -D__DEBUG=1  --debugger=none    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/_ext/43898991/main.p1 ../../main.c 
	@-${MV} ${OBJECTDIR}/_ext/43898991/main.d ${OBJECTDIR}/_ext/43898991/main.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/43898991/main.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1126170143/timer0_init.p1: ../../../../../bsp/timer0/src/timer0_init.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1126170143" 
	@${RM} ${OBJECTDIR}/_ext/1126170143/timer0_init.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1126170143/timer0_init.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G  -D__DEBUG=1  --debugger=none    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/_ext/1126170143/timer0_init.p1 ../../../../../bsp/timer0/src/timer0_init.c 
	@-${MV} ${OBJECTDIR}/_ext/1126170143/timer0_init.d ${OBJECTDIR}/_ext/1126170143/timer0_init.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1126170143/timer0_init.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1126170143/timer0_isr_process.p1: ../../../../../bsp/timer0/src/timer0_isr_process.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1126170143" 
	@${RM} ${OBJECTDIR}/_ext/1126170143/timer0_isr_process.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1126170143/timer0_isr_process.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G  -D__DEBUG=1  --debugger=none    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/_ext/1126170143/timer0_isr_process.p1 ../../../../../bsp/timer0/src/timer0_isr_process.c 
	@-${MV} ${OBJECTDIR}/_ext/1126170143/timer0_isr_process.d ${OBJECTDIR}/_ext/1126170143/timer0_isr_process.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1126170143/timer0_isr_process.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1126170143/timer0_reload.p1: ../../../../../bsp/timer0/src/timer0_reload.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1126170143" 
	@${RM} ${OBJECTDIR}/_ext/1126170143/timer0_reload.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1126170143/timer0_reload.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G  -D__DEBUG=1  --debugger=none    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/_ext/1126170143/timer0_reload.p1 ../../../../../bsp/timer0/src/timer0_reload.c 
	@-${MV} ${OBJECTDIR}/_ext/1126170143/timer0_reload.d ${OBJECTDIR}/_ext/1126170143/timer0_reload.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1126170143/timer0_reload.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/695955294/uart_getc.p1: ../../../../../bsp/uart/src/uart_getc.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/695955294" 
	@${RM} ${OBJECTDIR}/_ext/695955294/uart_getc.p1.d 
	@${RM} ${OBJECTDIR}/_ext/695955294/uart_getc.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G  -D__DEBUG=1  --debugger=none    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/_ext/695955294/uart_getc.p1 ../../../../../bsp/uart/src/uart_getc.c 
	@-${MV} ${OBJECTDIR}/_ext/695955294/uart_getc.d ${OBJECTDIR}/_ext/695955294/uart_getc.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/695955294/uart_getc.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/695955294/uart_gets.p1: ../../../../../bsp/uart/src/uart_gets.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/695955294" 
	@${RM} ${OBJECTDIR}/_ext/695955294/uart_gets.p1.d 
	@${RM} ${OBJECTDIR}/_ext/695955294/uart_gets.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G  -D__DEBUG=1  --debugger=none    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/_ext/695955294/uart_gets.p1 ../../../../../bsp/uart/src/uart_gets.c 
	@-${MV} ${OBJECTDIR}/_ext/695955294/uart_gets.d ${OBJECTDIR}/_ext/695955294/uart_gets.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/695955294/uart_gets.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/695955294/uart_init.p1: ../../../../../bsp/uart/src/uart_init.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/695955294" 
	@${RM} ${OBJECTDIR}/_ext/695955294/uart_init.p1.d 
	@${RM} ${OBJECTDIR}/_ext/695955294/uart_init.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G  -D__DEBUG=1  --debugger=none    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/_ext/695955294/uart_init.p1 ../../../../../bsp/uart/src/uart_init.c 
	@-${MV} ${OBJECTDIR}/_ext/695955294/uart_init.d ${OBJECTDIR}/_ext/695955294/uart_init.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/695955294/uart_init.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/695955294/uart_putc.p1: ../../../../../bsp/uart/src/uart_putc.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/695955294" 
	@${RM} ${OBJECTDIR}/_ext/695955294/uart_putc.p1.d 
	@${RM} ${OBJECTDIR}/_ext/695955294/uart_putc.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G  -D__DEBUG=1  --debugger=none    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/_ext/695955294/uart_putc.p1 ../../../../../bsp/uart/src/uart_putc.c 
	@-${MV} ${OBJECTDIR}/_ext/695955294/uart_putc.d ${OBJECTDIR}/_ext/695955294/uart_putc.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/695955294/uart_putc.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/695955294/uart_puts.p1: ../../../../../bsp/uart/src/uart_puts.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/695955294" 
	@${RM} ${OBJECTDIR}/_ext/695955294/uart_puts.p1.d 
	@${RM} ${OBJECTDIR}/_ext/695955294/uart_puts.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G  -D__DEBUG=1  --debugger=none    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/_ext/695955294/uart_puts.p1 ../../../../../bsp/uart/src/uart_puts.c 
	@-${MV} ${OBJECTDIR}/_ext/695955294/uart_puts.d ${OBJECTDIR}/_ext/695955294/uart_puts.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/695955294/uart_puts.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/app_init.p1: app_init.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/app_init.p1.d 
	@${RM} ${OBJECTDIR}/app_init.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G  -D__DEBUG=1  --debugger=none    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/app_init.p1 app_init.c 
	@-${MV} ${OBJECTDIR}/app_init.d ${OBJECTDIR}/app_init.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/app_init.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/task_control.p1: task_control.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/task_control.p1.d 
	@${RM} ${OBJECTDIR}/task_control.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G  -D__DEBUG=1  --debugger=none    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/task_control.p1 task_control.c 
	@-${MV} ${OBJECTDIR}/task_control.d ${OBJECTDIR}/task_control.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/task_control.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1025143788/lcd_gotoXY.p1: ../../../../../bsp/mlcd/src/lcd_gotoXY.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1025143788" 
	@${RM} ${OBJECTDIR}/_ext/1025143788/lcd_gotoXY.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1025143788/lcd_gotoXY.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G  -D__DEBUG=1  --debugger=none    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/_ext/1025143788/lcd_gotoXY.p1 ../../../../../bsp/mlcd/src/lcd_gotoXY.c 
	@-${MV} ${OBJECTDIR}/_ext/1025143788/lcd_gotoXY.d ${OBJECTDIR}/_ext/1025143788/lcd_gotoXY.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1025143788/lcd_gotoXY.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1025143788/lcd_init.p1: ../../../../../bsp/mlcd/src/lcd_init.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1025143788" 
	@${RM} ${OBJECTDIR}/_ext/1025143788/lcd_init.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1025143788/lcd_init.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G  -D__DEBUG=1  --debugger=none    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/_ext/1025143788/lcd_init.p1 ../../../../../bsp/mlcd/src/lcd_init.c 
	@-${MV} ${OBJECTDIR}/_ext/1025143788/lcd_init.d ${OBJECTDIR}/_ext/1025143788/lcd_init.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1025143788/lcd_init.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1025143788/lcd_sendChar.p1: ../../../../../bsp/mlcd/src/lcd_sendChar.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1025143788" 
	@${RM} ${OBJECTDIR}/_ext/1025143788/lcd_sendChar.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1025143788/lcd_sendChar.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G  -D__DEBUG=1  --debugger=none    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/_ext/1025143788/lcd_sendChar.p1 ../../../../../bsp/mlcd/src/lcd_sendChar.c 
	@-${MV} ${OBJECTDIR}/_ext/1025143788/lcd_sendChar.d ${OBJECTDIR}/_ext/1025143788/lcd_sendChar.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1025143788/lcd_sendChar.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1025143788/lcd_sendCommand.p1: ../../../../../bsp/mlcd/src/lcd_sendCommand.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1025143788" 
	@${RM} ${OBJECTDIR}/_ext/1025143788/lcd_sendCommand.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1025143788/lcd_sendCommand.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G  -D__DEBUG=1  --debugger=none    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/_ext/1025143788/lcd_sendCommand.p1 ../../../../../bsp/mlcd/src/lcd_sendCommand.c 
	@-${MV} ${OBJECTDIR}/_ext/1025143788/lcd_sendCommand.d ${OBJECTDIR}/_ext/1025143788/lcd_sendCommand.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1025143788/lcd_sendCommand.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1025143788/lcd_sendString.p1: ../../../../../bsp/mlcd/src/lcd_sendString.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1025143788" 
	@${RM} ${OBJECTDIR}/_ext/1025143788/lcd_sendString.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1025143788/lcd_sendString.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G  -D__DEBUG=1  --debugger=none    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/_ext/1025143788/lcd_sendString.p1 ../../../../../bsp/mlcd/src/lcd_sendString.c 
	@-${MV} ${OBJECTDIR}/_ext/1025143788/lcd_sendString.d ${OBJECTDIR}/_ext/1025143788/lcd_sendString.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1025143788/lcd_sendString.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1025143788/lcd_sendStringXY.p1: ../../../../../bsp/mlcd/src/lcd_sendStringXY.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1025143788" 
	@${RM} ${OBJECTDIR}/_ext/1025143788/lcd_sendStringXY.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1025143788/lcd_sendStringXY.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G  -D__DEBUG=1  --debugger=none    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/_ext/1025143788/lcd_sendStringXY.p1 ../../../../../bsp/mlcd/src/lcd_sendStringXY.c 
	@-${MV} ${OBJECTDIR}/_ext/1025143788/lcd_sendStringXY.d ${OBJECTDIR}/_ext/1025143788/lcd_sendStringXY.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1025143788/lcd_sendStringXY.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
else
${OBJECTDIR}/_ext/43898991/main.p1: ../../main.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/43898991" 
	@${RM} ${OBJECTDIR}/_ext/43898991/main.p1.d 
	@${RM} ${OBJECTDIR}/_ext/43898991/main.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/_ext/43898991/main.p1 ../../main.c 
	@-${MV} ${OBJECTDIR}/_ext/43898991/main.d ${OBJECTDIR}/_ext/43898991/main.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/43898991/main.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1126170143/timer0_init.p1: ../../../../../bsp/timer0/src/timer0_init.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1126170143" 
	@${RM} ${OBJECTDIR}/_ext/1126170143/timer0_init.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1126170143/timer0_init.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/_ext/1126170143/timer0_init.p1 ../../../../../bsp/timer0/src/timer0_init.c 
	@-${MV} ${OBJECTDIR}/_ext/1126170143/timer0_init.d ${OBJECTDIR}/_ext/1126170143/timer0_init.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1126170143/timer0_init.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1126170143/timer0_isr_process.p1: ../../../../../bsp/timer0/src/timer0_isr_process.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1126170143" 
	@${RM} ${OBJECTDIR}/_ext/1126170143/timer0_isr_process.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1126170143/timer0_isr_process.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/_ext/1126170143/timer0_isr_process.p1 ../../../../../bsp/timer0/src/timer0_isr_process.c 
	@-${MV} ${OBJECTDIR}/_ext/1126170143/timer0_isr_process.d ${OBJECTDIR}/_ext/1126170143/timer0_isr_process.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1126170143/timer0_isr_process.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1126170143/timer0_reload.p1: ../../../../../bsp/timer0/src/timer0_reload.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1126170143" 
	@${RM} ${OBJECTDIR}/_ext/1126170143/timer0_reload.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1126170143/timer0_reload.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/_ext/1126170143/timer0_reload.p1 ../../../../../bsp/timer0/src/timer0_reload.c 
	@-${MV} ${OBJECTDIR}/_ext/1126170143/timer0_reload.d ${OBJECTDIR}/_ext/1126170143/timer0_reload.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1126170143/timer0_reload.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/695955294/uart_getc.p1: ../../../../../bsp/uart/src/uart_getc.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/695955294" 
	@${RM} ${OBJECTDIR}/_ext/695955294/uart_getc.p1.d 
	@${RM} ${OBJECTDIR}/_ext/695955294/uart_getc.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/_ext/695955294/uart_getc.p1 ../../../../../bsp/uart/src/uart_getc.c 
	@-${MV} ${OBJECTDIR}/_ext/695955294/uart_getc.d ${OBJECTDIR}/_ext/695955294/uart_getc.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/695955294/uart_getc.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/695955294/uart_gets.p1: ../../../../../bsp/uart/src/uart_gets.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/695955294" 
	@${RM} ${OBJECTDIR}/_ext/695955294/uart_gets.p1.d 
	@${RM} ${OBJECTDIR}/_ext/695955294/uart_gets.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/_ext/695955294/uart_gets.p1 ../../../../../bsp/uart/src/uart_gets.c 
	@-${MV} ${OBJECTDIR}/_ext/695955294/uart_gets.d ${OBJECTDIR}/_ext/695955294/uart_gets.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/695955294/uart_gets.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/695955294/uart_init.p1: ../../../../../bsp/uart/src/uart_init.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/695955294" 
	@${RM} ${OBJECTDIR}/_ext/695955294/uart_init.p1.d 
	@${RM} ${OBJECTDIR}/_ext/695955294/uart_init.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/_ext/695955294/uart_init.p1 ../../../../../bsp/uart/src/uart_init.c 
	@-${MV} ${OBJECTDIR}/_ext/695955294/uart_init.d ${OBJECTDIR}/_ext/695955294/uart_init.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/695955294/uart_init.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/695955294/uart_putc.p1: ../../../../../bsp/uart/src/uart_putc.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/695955294" 
	@${RM} ${OBJECTDIR}/_ext/695955294/uart_putc.p1.d 
	@${RM} ${OBJECTDIR}/_ext/695955294/uart_putc.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/_ext/695955294/uart_putc.p1 ../../../../../bsp/uart/src/uart_putc.c 
	@-${MV} ${OBJECTDIR}/_ext/695955294/uart_putc.d ${OBJECTDIR}/_ext/695955294/uart_putc.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/695955294/uart_putc.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/695955294/uart_puts.p1: ../../../../../bsp/uart/src/uart_puts.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/695955294" 
	@${RM} ${OBJECTDIR}/_ext/695955294/uart_puts.p1.d 
	@${RM} ${OBJECTDIR}/_ext/695955294/uart_puts.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/_ext/695955294/uart_puts.p1 ../../../../../bsp/uart/src/uart_puts.c 
	@-${MV} ${OBJECTDIR}/_ext/695955294/uart_puts.d ${OBJECTDIR}/_ext/695955294/uart_puts.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/695955294/uart_puts.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/app_init.p1: app_init.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/app_init.p1.d 
	@${RM} ${OBJECTDIR}/app_init.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/app_init.p1 app_init.c 
	@-${MV} ${OBJECTDIR}/app_init.d ${OBJECTDIR}/app_init.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/app_init.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/task_control.p1: task_control.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/task_control.p1.d 
	@${RM} ${OBJECTDIR}/task_control.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/task_control.p1 task_control.c 
	@-${MV} ${OBJECTDIR}/task_control.d ${OBJECTDIR}/task_control.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/task_control.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1025143788/lcd_gotoXY.p1: ../../../../../bsp/mlcd/src/lcd_gotoXY.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1025143788" 
	@${RM} ${OBJECTDIR}/_ext/1025143788/lcd_gotoXY.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1025143788/lcd_gotoXY.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/_ext/1025143788/lcd_gotoXY.p1 ../../../../../bsp/mlcd/src/lcd_gotoXY.c 
	@-${MV} ${OBJECTDIR}/_ext/1025143788/lcd_gotoXY.d ${OBJECTDIR}/_ext/1025143788/lcd_gotoXY.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1025143788/lcd_gotoXY.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1025143788/lcd_init.p1: ../../../../../bsp/mlcd/src/lcd_init.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1025143788" 
	@${RM} ${OBJECTDIR}/_ext/1025143788/lcd_init.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1025143788/lcd_init.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/_ext/1025143788/lcd_init.p1 ../../../../../bsp/mlcd/src/lcd_init.c 
	@-${MV} ${OBJECTDIR}/_ext/1025143788/lcd_init.d ${OBJECTDIR}/_ext/1025143788/lcd_init.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1025143788/lcd_init.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1025143788/lcd_sendChar.p1: ../../../../../bsp/mlcd/src/lcd_sendChar.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1025143788" 
	@${RM} ${OBJECTDIR}/_ext/1025143788/lcd_sendChar.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1025143788/lcd_sendChar.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/_ext/1025143788/lcd_sendChar.p1 ../../../../../bsp/mlcd/src/lcd_sendChar.c 
	@-${MV} ${OBJECTDIR}/_ext/1025143788/lcd_sendChar.d ${OBJECTDIR}/_ext/1025143788/lcd_sendChar.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1025143788/lcd_sendChar.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1025143788/lcd_sendCommand.p1: ../../../../../bsp/mlcd/src/lcd_sendCommand.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1025143788" 
	@${RM} ${OBJECTDIR}/_ext/1025143788/lcd_sendCommand.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1025143788/lcd_sendCommand.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/_ext/1025143788/lcd_sendCommand.p1 ../../../../../bsp/mlcd/src/lcd_sendCommand.c 
	@-${MV} ${OBJECTDIR}/_ext/1025143788/lcd_sendCommand.d ${OBJECTDIR}/_ext/1025143788/lcd_sendCommand.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1025143788/lcd_sendCommand.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1025143788/lcd_sendString.p1: ../../../../../bsp/mlcd/src/lcd_sendString.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1025143788" 
	@${RM} ${OBJECTDIR}/_ext/1025143788/lcd_sendString.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1025143788/lcd_sendString.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/_ext/1025143788/lcd_sendString.p1 ../../../../../bsp/mlcd/src/lcd_sendString.c 
	@-${MV} ${OBJECTDIR}/_ext/1025143788/lcd_sendString.d ${OBJECTDIR}/_ext/1025143788/lcd_sendString.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1025143788/lcd_sendString.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
${OBJECTDIR}/_ext/1025143788/lcd_sendStringXY.p1: ../../../../../bsp/mlcd/src/lcd_sendStringXY.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1025143788" 
	@${RM} ${OBJECTDIR}/_ext/1025143788/lcd_sendStringXY.p1.d 
	@${RM} ${OBJECTDIR}/_ext/1025143788/lcd_sendStringXY.p1 
	${MP_CC} --pass1 $(MP_EXTRA_CC_PRE) --chip=$(MP_PROCESSOR_OPTION) -Q -G    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist -DXPRJ_default=$(CND_CONF)  --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     -o${OBJECTDIR}/_ext/1025143788/lcd_sendStringXY.p1 ../../../../../bsp/mlcd/src/lcd_sendStringXY.c 
	@-${MV} ${OBJECTDIR}/_ext/1025143788/lcd_sendStringXY.d ${OBJECTDIR}/_ext/1025143788/lcd_sendStringXY.p1.d 
	@${FIXDEPS} ${OBJECTDIR}/_ext/1025143788/lcd_sendStringXY.p1.d $(SILENT) -rsi ${MP_CC_DIR}../  
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
dist/${CND_CONF}/${IMAGE_TYPE}/ChronoApp.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    ../../../../../bsp/lib/pjct/dist/default/production/bsplib_pic18f4550.lpp
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE) --chip=$(MP_PROCESSOR_OPTION) -G -mdist/${CND_CONF}/${IMAGE_TYPE}/ChronoApp.X.${IMAGE_TYPE}.map  -D__DEBUG=1  --debugger=none  -DXPRJ_default=$(CND_CONF)    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"        $(COMPARISON_BUILD) --memorysummary dist/${CND_CONF}/${IMAGE_TYPE}/memoryfile.xml -odist/${CND_CONF}/${IMAGE_TYPE}/ChronoApp.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}     
	@${RM} dist/${CND_CONF}/${IMAGE_TYPE}/ChronoApp.X.${IMAGE_TYPE}.hex 
	
else
dist/${CND_CONF}/${IMAGE_TYPE}/ChronoApp.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   ../../../../../bsp/lib/pjct/dist/default/production/bsplib_pic18f4550.lpp
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE) --chip=$(MP_PROCESSOR_OPTION) -G -mdist/${CND_CONF}/${IMAGE_TYPE}/ChronoApp.X.${IMAGE_TYPE}.map  -DXPRJ_default=$(CND_CONF)    --double=24 --float=24 --emi=wordwrite --opt=+asm,+asmfile,-speed,+space,-debug,-local --addrqual=ignore --mode=free -P -N255 -I"../../../include" -I"../../../../../bsp" --warn=-3 --asmlist --summary=default,-psect,-class,+mem,-hex,-file --output=default,-inhx032 --runtime=default,+clear,+init,-keep,-no_startup,-download,+config,+clib,-plib --output=-mcof,+elf:multilocs --stack=compiled:auto:auto:auto "--errformat=%f:%l: error: (%n) %s" "--warnformat=%f:%l: warning: (%n) %s" "--msgformat=%f:%l: advisory: (%n) %s"     $(COMPARISON_BUILD) --memorysummary dist/${CND_CONF}/${IMAGE_TYPE}/memoryfile.xml -odist/${CND_CONF}/${IMAGE_TYPE}/ChronoApp.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}     
	
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r build/default
	${RM} -r dist/default

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(shell mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
