/*******************************************************************************
* File Name: gnd_P2_0.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_gnd_P2_0_ALIASES_H) /* Pins gnd_P2_0_ALIASES_H */
#define CY_PINS_gnd_P2_0_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define gnd_P2_0_0			(gnd_P2_0__0__PC)
#define gnd_P2_0_0_PS		(gnd_P2_0__0__PS)
#define gnd_P2_0_0_PC		(gnd_P2_0__0__PC)
#define gnd_P2_0_0_DR		(gnd_P2_0__0__DR)
#define gnd_P2_0_0_SHIFT	(gnd_P2_0__0__SHIFT)
#define gnd_P2_0_0_INTR	((uint16)((uint16)0x0003u << (gnd_P2_0__0__SHIFT*2u)))

#define gnd_P2_0_INTR_ALL	 ((uint16)(gnd_P2_0_0_INTR))


#endif /* End Pins gnd_P2_0_ALIASES_H */


/* [] END OF FILE */
