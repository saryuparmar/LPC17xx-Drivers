/***********************************************************************//**
* @file	    lpc17xx_nvic.h
* @brief	Contains all macro definitions and function prototypes
* 			support for Nesting Vectored Interrupt firmware library
* 			on LPC17xx
* @version	1.0
* @date		24. July. 2013
* @author	Dwijay.Edutech Learning Solutions
***************************************************************************/

/* Peripheral group ----------------------------------------------------------- */
/** @defgroup NVIC
 * @ingroup LPC1700CMSIS_FwLib_Drivers
 * @{
 */

#ifndef LPC17XX_NVIC_H_
#define LPC17XX_NVIC_H_

/* Includes ------------------------------------------------------------------- */
#include "LPC17xx.h"
#include "lpc_types.h"

#ifdef __cplusplus
extern "C"
{
#endif


/* Public Functions ----------------------------------------------------------- */
/** @defgroup NVIC_Public_Functions
 * @{
 */

void NVIC_DeInit(void);
void NVIC_SCBDeInit(void);
void NVIC_SetVTOR(uint32_t offset);

/**
 * @}
 */

#ifdef __cplusplus
}
#endif

#endif /* LPC17XX_NVIC_H_ */

/**
 * @}
 */

/* --------------------------------- End Of File ------------------------------ */
