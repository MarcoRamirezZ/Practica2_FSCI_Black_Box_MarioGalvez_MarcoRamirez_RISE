/*
* Copyright 2016-2017 NXP
* All rights reserved.
*
* SPDX-License-Identifier: BSD-3-Clause
*/

#ifndef APP_ZIGBEENODECONTROLBRIDGE_CMDS_H_
#define APP_ZIGBEENODECONTROLBRIDGE_CMDS_H_

/*!
\file       app_Znc_cmds.h
\brief      ZigbeeNodeControlBridge
*/

/****************************************************************************/
/***        Macro Definitions                                             ***/
/****************************************************************************/

/****************************************************************************/
/***        Type Definitions                                              ***/
/****************************************************************************/

/****************************************************************************/
/***        Exported Functions                                            ***/
/****************************************************************************/

PUBLIC void vSendStatus ( uint8          u8Status,
                          uint8          u8SeqNum,
                          const char*    pcMessage );

PUBLIC void APP_vProcessIncomingSerialCommands ( uint8    u8RxByte );
PUBLIC void vSetGroupAddress ( uint16 u16GroupStart, uint8 u8NumGroups);
/****************************************************************************/
/***        External Variables                                            ***/
/****************************************************************************/

/****************************************************************************/
/***        Inlined Functions                                            ***/
/****************************************************************************/

/****************************************************************************/
/****************************************************************************/
/****************************************************************************/

#endif /* APP_ZIGBEENODECONTROLBRIDGE_CMDS_H_ */
