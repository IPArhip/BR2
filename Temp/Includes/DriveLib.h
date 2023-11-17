/* Automation Studio generated header file */
/* Do not edit ! */
/* DriveLib  */

#ifndef _DRIVELIB_
#define _DRIVELIB_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Datatypes and datatypes of function blocks */
typedef enum DoorStates
{	ST_INIT,
	ST_UNKNOWN,
	ST_OPEN,
	ST_CLOSE,
	ST_ACC_POS,
	ST_ACC_NEG,
	ST_DEC_NEG,
	ST_DEC_POS,
	ST_NEG,
	ST_POS
} DoorStates;

typedef enum DriveStates
{	CMD_ENABLED = 15,
	STATE_DISABLED = 64,
	CMD_SHUTDOWN = 6,
	CMD_SWITCHED_ON = 7,
	STATE_SWITCHED_ON = 35,
	STATE_READY = 33
} DriveStates;

typedef struct DriveStateMachine
{
	/* VAR_INPUT (analog) */
	unsigned short state;
	/* VAR_OUTPUT (analog) */
	unsigned short command;
	signed short speed;
	/* VAR_INPUT (digital) */
	plcbit enable;
} DriveStateMachine_typ;

typedef struct LedStateMachine
{
	/* VAR_INPUT (analog) */
	enum DoorStates state;
	/* VAR_OUTPUT (analog) */
	signed short timer;
	/* VAR_OUTPUT (digital) */
	plcbit led2;
	plcbit led4;
	plcbit led3;
	plcbit led1;
} LedStateMachine_typ;

typedef struct DoorStateMachine
{
	/* VAR_INPUT (analog) */
	enum DoorStates state;
	/* VAR_OUTPUT (analog) */
	signed short speed;
	/* VAR (analog) */
	unsigned char swo1;
	unsigned char swo2;
	unsigned char swo3;
	unsigned char swo4;
	/* VAR_INPUT (digital) */
	plcbit sw2;
	plcbit sw3;
	plcbit sw4;
	plcbit sw1;
	plcbit direction;
} DoorStateMachine_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void DriveStateMachine(struct DriveStateMachine* inst);
_BUR_PUBLIC void LedStateMachine(struct LedStateMachine* inst);
_BUR_PUBLIC void DoorStateMachine(struct DoorStateMachine* inst);


#ifdef __cplusplus
};
#endif
#endif /* _DRIVELIB_ */

