/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  dio.h
 *       Module:  dio
 *
 *  Description:  dio APIs     
 *  
 *********************************************************************************************************************/
#ifndef DIO_H_H
#define DIO_H_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "dio_types.h"
#include "bit_math.h"
#include "dio_reg.h"
#include "../std_types.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define  BIT_MASK              0x01

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef struct{
	u8 port :3; /* @ref port_index_t */
	u8 pin :3;  /* @ref pin_index_t */
	u8 direction :1;  /* @ref direction_t */
	u8 logic :1;  /* @ref logic_t */
}pin_config_t;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void dio_vidConfigChannel(dio_portId_t port, dio_channelId_t channel, dio_direction_t direction);
void dio_vidWriteChannel(dio_portId_t port, dio_channelId_t channel, dio_level_t level);
void dio_vidWriteChannelGroup(dio_portId_t port,u8 value,u8 mask);
void dio_vidFlipChannel(dio_portId_t port, dio_channelId_t channel);
dio_level_t dio_dioLevelReadChannel(dio_portId_t port, dio_channelId_t channel);
void dio_vidEnablePullUp(dio_portId_t port, dio_channelId_t channel);
 
#endif  /* DIO_H_H */

/**********************************************************************************************************************
 *  END OF FILE: dio.h
 *********************************************************************************************************************/
