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
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/BomberMan_MP.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/BomberMan_MP.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=main.c configuration_bits.c ../../Documents/embeddedlibrary/src/uart.c ../../Documents/embeddedlibrary/src/buffer.c ../../Documents/embeddedlibrary/src/buffer_printf.c ../../Documents/embeddedlibrary/src/charReceiverList.c ../../Documents/embeddedlibrary/src/event.c ../../Documents/embeddedlibrary/src/game.c ../../Documents/embeddedlibrary/src/itemBuffer.c ../../Documents/embeddedlibrary/src/list.c ../../Documents/embeddedlibrary/src/random_int.c ../../Documents/embeddedlibrary/src/subsys.c ../../Documents/embeddedlibrary/src/task.c ../../Documents/embeddedlibrary/src/terminal.c ../../Documents/embeddedlibrary/src/timing.c ../embeddedlibrary/hal/PIC32MX/PIC32MX250F128B/hal_uart.c bomberman.c ../../Documents/embeddedlibrary/src/nrf24.c ../../Documents/embeddedlibrary/src/nrf24network.c ../../Documents/embeddedlibrary/src/spi.c ../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B/hal_spi.c bomberman_graphics.c bomberman_map.c bomberman_networking.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/main.o ${OBJECTDIR}/configuration_bits.o ${OBJECTDIR}/_ext/225506863/uart.o ${OBJECTDIR}/_ext/225506863/buffer.o ${OBJECTDIR}/_ext/225506863/buffer_printf.o ${OBJECTDIR}/_ext/225506863/charReceiverList.o ${OBJECTDIR}/_ext/225506863/event.o ${OBJECTDIR}/_ext/225506863/game.o ${OBJECTDIR}/_ext/225506863/itemBuffer.o ${OBJECTDIR}/_ext/225506863/list.o ${OBJECTDIR}/_ext/225506863/random_int.o ${OBJECTDIR}/_ext/225506863/subsys.o ${OBJECTDIR}/_ext/225506863/task.o ${OBJECTDIR}/_ext/225506863/terminal.o ${OBJECTDIR}/_ext/225506863/timing.o ${OBJECTDIR}/_ext/1617561100/hal_uart.o ${OBJECTDIR}/bomberman.o ${OBJECTDIR}/_ext/225506863/nrf24.o ${OBJECTDIR}/_ext/225506863/nrf24network.o ${OBJECTDIR}/_ext/225506863/spi.o ${OBJECTDIR}/_ext/1210019540/hal_spi.o ${OBJECTDIR}/bomberman_graphics.o ${OBJECTDIR}/bomberman_map.o ${OBJECTDIR}/bomberman_networking.o
POSSIBLE_DEPFILES=${OBJECTDIR}/main.o.d ${OBJECTDIR}/configuration_bits.o.d ${OBJECTDIR}/_ext/225506863/uart.o.d ${OBJECTDIR}/_ext/225506863/buffer.o.d ${OBJECTDIR}/_ext/225506863/buffer_printf.o.d ${OBJECTDIR}/_ext/225506863/charReceiverList.o.d ${OBJECTDIR}/_ext/225506863/event.o.d ${OBJECTDIR}/_ext/225506863/game.o.d ${OBJECTDIR}/_ext/225506863/itemBuffer.o.d ${OBJECTDIR}/_ext/225506863/list.o.d ${OBJECTDIR}/_ext/225506863/random_int.o.d ${OBJECTDIR}/_ext/225506863/subsys.o.d ${OBJECTDIR}/_ext/225506863/task.o.d ${OBJECTDIR}/_ext/225506863/terminal.o.d ${OBJECTDIR}/_ext/225506863/timing.o.d ${OBJECTDIR}/_ext/1617561100/hal_uart.o.d ${OBJECTDIR}/bomberman.o.d ${OBJECTDIR}/_ext/225506863/nrf24.o.d ${OBJECTDIR}/_ext/225506863/nrf24network.o.d ${OBJECTDIR}/_ext/225506863/spi.o.d ${OBJECTDIR}/_ext/1210019540/hal_spi.o.d ${OBJECTDIR}/bomberman_graphics.o.d ${OBJECTDIR}/bomberman_map.o.d ${OBJECTDIR}/bomberman_networking.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/main.o ${OBJECTDIR}/configuration_bits.o ${OBJECTDIR}/_ext/225506863/uart.o ${OBJECTDIR}/_ext/225506863/buffer.o ${OBJECTDIR}/_ext/225506863/buffer_printf.o ${OBJECTDIR}/_ext/225506863/charReceiverList.o ${OBJECTDIR}/_ext/225506863/event.o ${OBJECTDIR}/_ext/225506863/game.o ${OBJECTDIR}/_ext/225506863/itemBuffer.o ${OBJECTDIR}/_ext/225506863/list.o ${OBJECTDIR}/_ext/225506863/random_int.o ${OBJECTDIR}/_ext/225506863/subsys.o ${OBJECTDIR}/_ext/225506863/task.o ${OBJECTDIR}/_ext/225506863/terminal.o ${OBJECTDIR}/_ext/225506863/timing.o ${OBJECTDIR}/_ext/1617561100/hal_uart.o ${OBJECTDIR}/bomberman.o ${OBJECTDIR}/_ext/225506863/nrf24.o ${OBJECTDIR}/_ext/225506863/nrf24network.o ${OBJECTDIR}/_ext/225506863/spi.o ${OBJECTDIR}/_ext/1210019540/hal_spi.o ${OBJECTDIR}/bomberman_graphics.o ${OBJECTDIR}/bomberman_map.o ${OBJECTDIR}/bomberman_networking.o

# Source Files
SOURCEFILES=main.c configuration_bits.c ../../Documents/embeddedlibrary/src/uart.c ../../Documents/embeddedlibrary/src/buffer.c ../../Documents/embeddedlibrary/src/buffer_printf.c ../../Documents/embeddedlibrary/src/charReceiverList.c ../../Documents/embeddedlibrary/src/event.c ../../Documents/embeddedlibrary/src/game.c ../../Documents/embeddedlibrary/src/itemBuffer.c ../../Documents/embeddedlibrary/src/list.c ../../Documents/embeddedlibrary/src/random_int.c ../../Documents/embeddedlibrary/src/subsys.c ../../Documents/embeddedlibrary/src/task.c ../../Documents/embeddedlibrary/src/terminal.c ../../Documents/embeddedlibrary/src/timing.c ../embeddedlibrary/hal/PIC32MX/PIC32MX250F128B/hal_uart.c bomberman.c ../../Documents/embeddedlibrary/src/nrf24.c ../../Documents/embeddedlibrary/src/nrf24network.c ../../Documents/embeddedlibrary/src/spi.c ../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B/hal_spi.c bomberman_graphics.c bomberman_map.c bomberman_networking.c


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
	${MAKE}  -f nbproject/Makefile-default.mk dist/${CND_CONF}/${IMAGE_TYPE}/BomberMan_MP.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=32MX250F128B
MP_LINKER_FILE_OPTION=
# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assembleWithPreprocess
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/main.o: main.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/main.o.d 
	@${RM} ${OBJECTDIR}/main.o 
	@${FIXDEPS} "${OBJECTDIR}/main.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/main.o.d" -o ${OBJECTDIR}/main.o main.c   
	
${OBJECTDIR}/configuration_bits.o: configuration_bits.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/configuration_bits.o.d 
	@${RM} ${OBJECTDIR}/configuration_bits.o 
	@${FIXDEPS} "${OBJECTDIR}/configuration_bits.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/configuration_bits.o.d" -o ${OBJECTDIR}/configuration_bits.o configuration_bits.c   
	
${OBJECTDIR}/_ext/225506863/uart.o: ../../Documents/embeddedlibrary/src/uart.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/uart.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/uart.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/uart.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/uart.o.d" -o ${OBJECTDIR}/_ext/225506863/uart.o ../../Documents/embeddedlibrary/src/uart.c   
	
${OBJECTDIR}/_ext/225506863/buffer.o: ../../Documents/embeddedlibrary/src/buffer.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/buffer.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/buffer.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/buffer.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/buffer.o.d" -o ${OBJECTDIR}/_ext/225506863/buffer.o ../../Documents/embeddedlibrary/src/buffer.c   
	
${OBJECTDIR}/_ext/225506863/buffer_printf.o: ../../Documents/embeddedlibrary/src/buffer_printf.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/buffer_printf.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/buffer_printf.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/buffer_printf.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/buffer_printf.o.d" -o ${OBJECTDIR}/_ext/225506863/buffer_printf.o ../../Documents/embeddedlibrary/src/buffer_printf.c   
	
${OBJECTDIR}/_ext/225506863/charReceiverList.o: ../../Documents/embeddedlibrary/src/charReceiverList.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/charReceiverList.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/charReceiverList.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/charReceiverList.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/charReceiverList.o.d" -o ${OBJECTDIR}/_ext/225506863/charReceiverList.o ../../Documents/embeddedlibrary/src/charReceiverList.c   
	
${OBJECTDIR}/_ext/225506863/event.o: ../../Documents/embeddedlibrary/src/event.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/event.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/event.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/event.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/event.o.d" -o ${OBJECTDIR}/_ext/225506863/event.o ../../Documents/embeddedlibrary/src/event.c   
	
${OBJECTDIR}/_ext/225506863/game.o: ../../Documents/embeddedlibrary/src/game.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/game.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/game.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/game.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/game.o.d" -o ${OBJECTDIR}/_ext/225506863/game.o ../../Documents/embeddedlibrary/src/game.c   
	
${OBJECTDIR}/_ext/225506863/itemBuffer.o: ../../Documents/embeddedlibrary/src/itemBuffer.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/itemBuffer.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/itemBuffer.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/itemBuffer.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/itemBuffer.o.d" -o ${OBJECTDIR}/_ext/225506863/itemBuffer.o ../../Documents/embeddedlibrary/src/itemBuffer.c   
	
${OBJECTDIR}/_ext/225506863/list.o: ../../Documents/embeddedlibrary/src/list.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/list.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/list.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/list.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/list.o.d" -o ${OBJECTDIR}/_ext/225506863/list.o ../../Documents/embeddedlibrary/src/list.c   
	
${OBJECTDIR}/_ext/225506863/random_int.o: ../../Documents/embeddedlibrary/src/random_int.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/random_int.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/random_int.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/random_int.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/random_int.o.d" -o ${OBJECTDIR}/_ext/225506863/random_int.o ../../Documents/embeddedlibrary/src/random_int.c   
	
${OBJECTDIR}/_ext/225506863/subsys.o: ../../Documents/embeddedlibrary/src/subsys.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/subsys.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/subsys.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/subsys.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/subsys.o.d" -o ${OBJECTDIR}/_ext/225506863/subsys.o ../../Documents/embeddedlibrary/src/subsys.c   
	
${OBJECTDIR}/_ext/225506863/task.o: ../../Documents/embeddedlibrary/src/task.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/task.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/task.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/task.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/task.o.d" -o ${OBJECTDIR}/_ext/225506863/task.o ../../Documents/embeddedlibrary/src/task.c   
	
${OBJECTDIR}/_ext/225506863/terminal.o: ../../Documents/embeddedlibrary/src/terminal.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/terminal.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/terminal.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/terminal.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/terminal.o.d" -o ${OBJECTDIR}/_ext/225506863/terminal.o ../../Documents/embeddedlibrary/src/terminal.c   
	
${OBJECTDIR}/_ext/225506863/timing.o: ../../Documents/embeddedlibrary/src/timing.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/timing.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/timing.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/timing.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/timing.o.d" -o ${OBJECTDIR}/_ext/225506863/timing.o ../../Documents/embeddedlibrary/src/timing.c   
	
${OBJECTDIR}/_ext/1617561100/hal_uart.o: ../embeddedlibrary/hal/PIC32MX/PIC32MX250F128B/hal_uart.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1617561100" 
	@${RM} ${OBJECTDIR}/_ext/1617561100/hal_uart.o.d 
	@${RM} ${OBJECTDIR}/_ext/1617561100/hal_uart.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1617561100/hal_uart.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/1617561100/hal_uart.o.d" -o ${OBJECTDIR}/_ext/1617561100/hal_uart.o ../embeddedlibrary/hal/PIC32MX/PIC32MX250F128B/hal_uart.c   
	
${OBJECTDIR}/bomberman.o: bomberman.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/bomberman.o.d 
	@${RM} ${OBJECTDIR}/bomberman.o 
	@${FIXDEPS} "${OBJECTDIR}/bomberman.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/bomberman.o.d" -o ${OBJECTDIR}/bomberman.o bomberman.c   
	
${OBJECTDIR}/_ext/225506863/nrf24.o: ../../Documents/embeddedlibrary/src/nrf24.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/nrf24.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/nrf24.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/nrf24.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/nrf24.o.d" -o ${OBJECTDIR}/_ext/225506863/nrf24.o ../../Documents/embeddedlibrary/src/nrf24.c   
	
${OBJECTDIR}/_ext/225506863/nrf24network.o: ../../Documents/embeddedlibrary/src/nrf24network.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/nrf24network.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/nrf24network.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/nrf24network.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/nrf24network.o.d" -o ${OBJECTDIR}/_ext/225506863/nrf24network.o ../../Documents/embeddedlibrary/src/nrf24network.c   
	
${OBJECTDIR}/_ext/225506863/spi.o: ../../Documents/embeddedlibrary/src/spi.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/spi.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/spi.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/spi.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/spi.o.d" -o ${OBJECTDIR}/_ext/225506863/spi.o ../../Documents/embeddedlibrary/src/spi.c   
	
${OBJECTDIR}/_ext/1210019540/hal_spi.o: ../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B/hal_spi.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1210019540" 
	@${RM} ${OBJECTDIR}/_ext/1210019540/hal_spi.o.d 
	@${RM} ${OBJECTDIR}/_ext/1210019540/hal_spi.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1210019540/hal_spi.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/1210019540/hal_spi.o.d" -o ${OBJECTDIR}/_ext/1210019540/hal_spi.o ../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B/hal_spi.c   
	
${OBJECTDIR}/bomberman_graphics.o: bomberman_graphics.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/bomberman_graphics.o.d 
	@${RM} ${OBJECTDIR}/bomberman_graphics.o 
	@${FIXDEPS} "${OBJECTDIR}/bomberman_graphics.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/bomberman_graphics.o.d" -o ${OBJECTDIR}/bomberman_graphics.o bomberman_graphics.c   
	
${OBJECTDIR}/bomberman_map.o: bomberman_map.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/bomberman_map.o.d 
	@${RM} ${OBJECTDIR}/bomberman_map.o 
	@${FIXDEPS} "${OBJECTDIR}/bomberman_map.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/bomberman_map.o.d" -o ${OBJECTDIR}/bomberman_map.o bomberman_map.c   
	
${OBJECTDIR}/bomberman_networking.o: bomberman_networking.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/bomberman_networking.o.d 
	@${RM} ${OBJECTDIR}/bomberman_networking.o 
	@${FIXDEPS} "${OBJECTDIR}/bomberman_networking.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/bomberman_networking.o.d" -o ${OBJECTDIR}/bomberman_networking.o bomberman_networking.c   
	
else
${OBJECTDIR}/main.o: main.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/main.o.d 
	@${RM} ${OBJECTDIR}/main.o 
	@${FIXDEPS} "${OBJECTDIR}/main.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/main.o.d" -o ${OBJECTDIR}/main.o main.c   
	
${OBJECTDIR}/configuration_bits.o: configuration_bits.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/configuration_bits.o.d 
	@${RM} ${OBJECTDIR}/configuration_bits.o 
	@${FIXDEPS} "${OBJECTDIR}/configuration_bits.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/configuration_bits.o.d" -o ${OBJECTDIR}/configuration_bits.o configuration_bits.c   
	
${OBJECTDIR}/_ext/225506863/uart.o: ../../Documents/embeddedlibrary/src/uart.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/uart.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/uart.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/uart.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/uart.o.d" -o ${OBJECTDIR}/_ext/225506863/uart.o ../../Documents/embeddedlibrary/src/uart.c   
	
${OBJECTDIR}/_ext/225506863/buffer.o: ../../Documents/embeddedlibrary/src/buffer.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/buffer.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/buffer.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/buffer.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/buffer.o.d" -o ${OBJECTDIR}/_ext/225506863/buffer.o ../../Documents/embeddedlibrary/src/buffer.c   
	
${OBJECTDIR}/_ext/225506863/buffer_printf.o: ../../Documents/embeddedlibrary/src/buffer_printf.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/buffer_printf.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/buffer_printf.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/buffer_printf.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/buffer_printf.o.d" -o ${OBJECTDIR}/_ext/225506863/buffer_printf.o ../../Documents/embeddedlibrary/src/buffer_printf.c   
	
${OBJECTDIR}/_ext/225506863/charReceiverList.o: ../../Documents/embeddedlibrary/src/charReceiverList.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/charReceiverList.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/charReceiverList.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/charReceiverList.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/charReceiverList.o.d" -o ${OBJECTDIR}/_ext/225506863/charReceiverList.o ../../Documents/embeddedlibrary/src/charReceiverList.c   
	
${OBJECTDIR}/_ext/225506863/event.o: ../../Documents/embeddedlibrary/src/event.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/event.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/event.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/event.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/event.o.d" -o ${OBJECTDIR}/_ext/225506863/event.o ../../Documents/embeddedlibrary/src/event.c   
	
${OBJECTDIR}/_ext/225506863/game.o: ../../Documents/embeddedlibrary/src/game.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/game.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/game.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/game.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/game.o.d" -o ${OBJECTDIR}/_ext/225506863/game.o ../../Documents/embeddedlibrary/src/game.c   
	
${OBJECTDIR}/_ext/225506863/itemBuffer.o: ../../Documents/embeddedlibrary/src/itemBuffer.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/itemBuffer.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/itemBuffer.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/itemBuffer.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/itemBuffer.o.d" -o ${OBJECTDIR}/_ext/225506863/itemBuffer.o ../../Documents/embeddedlibrary/src/itemBuffer.c   
	
${OBJECTDIR}/_ext/225506863/list.o: ../../Documents/embeddedlibrary/src/list.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/list.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/list.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/list.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/list.o.d" -o ${OBJECTDIR}/_ext/225506863/list.o ../../Documents/embeddedlibrary/src/list.c   
	
${OBJECTDIR}/_ext/225506863/random_int.o: ../../Documents/embeddedlibrary/src/random_int.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/random_int.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/random_int.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/random_int.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/random_int.o.d" -o ${OBJECTDIR}/_ext/225506863/random_int.o ../../Documents/embeddedlibrary/src/random_int.c   
	
${OBJECTDIR}/_ext/225506863/subsys.o: ../../Documents/embeddedlibrary/src/subsys.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/subsys.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/subsys.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/subsys.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/subsys.o.d" -o ${OBJECTDIR}/_ext/225506863/subsys.o ../../Documents/embeddedlibrary/src/subsys.c   
	
${OBJECTDIR}/_ext/225506863/task.o: ../../Documents/embeddedlibrary/src/task.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/task.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/task.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/task.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/task.o.d" -o ${OBJECTDIR}/_ext/225506863/task.o ../../Documents/embeddedlibrary/src/task.c   
	
${OBJECTDIR}/_ext/225506863/terminal.o: ../../Documents/embeddedlibrary/src/terminal.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/terminal.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/terminal.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/terminal.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/terminal.o.d" -o ${OBJECTDIR}/_ext/225506863/terminal.o ../../Documents/embeddedlibrary/src/terminal.c   
	
${OBJECTDIR}/_ext/225506863/timing.o: ../../Documents/embeddedlibrary/src/timing.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/timing.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/timing.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/timing.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/timing.o.d" -o ${OBJECTDIR}/_ext/225506863/timing.o ../../Documents/embeddedlibrary/src/timing.c   
	
${OBJECTDIR}/_ext/1617561100/hal_uart.o: ../embeddedlibrary/hal/PIC32MX/PIC32MX250F128B/hal_uart.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1617561100" 
	@${RM} ${OBJECTDIR}/_ext/1617561100/hal_uart.o.d 
	@${RM} ${OBJECTDIR}/_ext/1617561100/hal_uart.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1617561100/hal_uart.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/1617561100/hal_uart.o.d" -o ${OBJECTDIR}/_ext/1617561100/hal_uart.o ../embeddedlibrary/hal/PIC32MX/PIC32MX250F128B/hal_uart.c   
	
${OBJECTDIR}/bomberman.o: bomberman.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/bomberman.o.d 
	@${RM} ${OBJECTDIR}/bomberman.o 
	@${FIXDEPS} "${OBJECTDIR}/bomberman.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/bomberman.o.d" -o ${OBJECTDIR}/bomberman.o bomberman.c   
	
${OBJECTDIR}/_ext/225506863/nrf24.o: ../../Documents/embeddedlibrary/src/nrf24.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/nrf24.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/nrf24.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/nrf24.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/nrf24.o.d" -o ${OBJECTDIR}/_ext/225506863/nrf24.o ../../Documents/embeddedlibrary/src/nrf24.c   
	
${OBJECTDIR}/_ext/225506863/nrf24network.o: ../../Documents/embeddedlibrary/src/nrf24network.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/nrf24network.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/nrf24network.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/nrf24network.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/nrf24network.o.d" -o ${OBJECTDIR}/_ext/225506863/nrf24network.o ../../Documents/embeddedlibrary/src/nrf24network.c   
	
${OBJECTDIR}/_ext/225506863/spi.o: ../../Documents/embeddedlibrary/src/spi.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/225506863" 
	@${RM} ${OBJECTDIR}/_ext/225506863/spi.o.d 
	@${RM} ${OBJECTDIR}/_ext/225506863/spi.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/225506863/spi.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/225506863/spi.o.d" -o ${OBJECTDIR}/_ext/225506863/spi.o ../../Documents/embeddedlibrary/src/spi.c   
	
${OBJECTDIR}/_ext/1210019540/hal_spi.o: ../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B/hal_spi.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1210019540" 
	@${RM} ${OBJECTDIR}/_ext/1210019540/hal_spi.o.d 
	@${RM} ${OBJECTDIR}/_ext/1210019540/hal_spi.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1210019540/hal_spi.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/_ext/1210019540/hal_spi.o.d" -o ${OBJECTDIR}/_ext/1210019540/hal_spi.o ../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B/hal_spi.c   
	
${OBJECTDIR}/bomberman_graphics.o: bomberman_graphics.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/bomberman_graphics.o.d 
	@${RM} ${OBJECTDIR}/bomberman_graphics.o 
	@${FIXDEPS} "${OBJECTDIR}/bomberman_graphics.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/bomberman_graphics.o.d" -o ${OBJECTDIR}/bomberman_graphics.o bomberman_graphics.c   
	
${OBJECTDIR}/bomberman_map.o: bomberman_map.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/bomberman_map.o.d 
	@${RM} ${OBJECTDIR}/bomberman_map.o 
	@${FIXDEPS} "${OBJECTDIR}/bomberman_map.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/bomberman_map.o.d" -o ${OBJECTDIR}/bomberman_map.o bomberman_map.c   
	
${OBJECTDIR}/bomberman_networking.o: bomberman_networking.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/bomberman_networking.o.d 
	@${RM} ${OBJECTDIR}/bomberman_networking.o 
	@${FIXDEPS} "${OBJECTDIR}/bomberman_networking.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -D_SUPPRESS_PLIB_WARNING -I"../../Documents/embeddedlibrary/include" -I"../../Documents/embeddedlibrary/hal/hal_includes" -I"../../Documents/embeddedlibrary/hal/PIC32MX/PIC32MX250F128B" -I"../BomberMan_MP" -MMD -MF "${OBJECTDIR}/bomberman_networking.o.d" -o ${OBJECTDIR}/bomberman_networking.o bomberman_networking.c   
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compileCPP
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
dist/${CND_CONF}/${IMAGE_TYPE}/BomberMan_MP.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -mdebugger -D__MPLAB_DEBUGGER_PK3=1 -mprocessor=$(MP_PROCESSOR_OPTION)  -o dist/${CND_CONF}/${IMAGE_TYPE}/BomberMan_MP.${IMAGE_TYPE}.${OUTPUT_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}           -mreserve=data@0x0:0x1FC -mreserve=boot@0x1FC00490:0x1FC00BEF  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1,--defsym=__MPLAB_DEBUGGER_PK3=1,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map"
	
else
dist/${CND_CONF}/${IMAGE_TYPE}/BomberMan_MP.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -mprocessor=$(MP_PROCESSOR_OPTION)  -o dist/${CND_CONF}/${IMAGE_TYPE}/BomberMan_MP.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map"
	${MP_CC_DIR}\\xc32-bin2hex dist/${CND_CONF}/${IMAGE_TYPE}/BomberMan_MP.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} 
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
