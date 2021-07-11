#pragma once

#define TAPPING_TERM 200
#define TAPPING_TOGGLE 2
#define LEADER_TIMEOUT 300


#define MK_KINETIC_SPEED
#define MOUSEKEY_DELAY 							8 	// Delay between pressing a movement key and cursor movement
#define MOUSEKEY_INTERVAL 						16 	// Time between cursor movements in milliseconds
#define MOUSEKEY_MOVE_DELTA 					2 	// Step size for accelerating from initial to base speed
#define MOUSEKEY_INITIAL_SPEED 					2 // 	Initial speed of the cursor in pixel per steps
#define MOUSEKEY_BASE_SPEED 					2000 // 	Maximum cursor speed at which acceleration stops
#define MOUSEKEY_DECELERATED_SPEED 				4000 // 	Decelerated cursor speed
#define MOUSEKEY_ACCELERATED_SPEED 				60 // 	Accelerated cursor speeds

#define MOUSEKEY_WHEEL_INITIAL_MOVEMENTS 		32 // 	Initial number of movements of the mouse wheel
#define MOUSEKEY_WHEEL_BASE_MOVEMENTS 			256 	// Maximum number of movements at which acceleration stops
#define MOUSEKEY_WHEEL_ACCELERATED_MOVEMENTS 	256 // 	Accelerated wheel movements
#define MOUSEKEY_WHEEL_DECELERATED_MOVEMENTS 	4 	// Decelerated wheel movements
