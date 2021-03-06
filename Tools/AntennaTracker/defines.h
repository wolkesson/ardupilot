// -*- tab-width: 4; Mode: C++; c-basic-offset: 4; indent-tabs-mode: nil -*-

#ifndef _DEFINES_H
#define _DEFINES_H

#define ToRad(x) radians(x)	// *pi/180
#define ToDeg(x) degrees(x)	// *180/pi

#define EEPROM_MAX_ADDR         4096

// mark a function as not to be inlined
#define NOINLINE __attribute__((noinline))

// InertialSensor driver types
#define CONFIG_INS_OILPAN  1
#define CONFIG_INS_MPU6000 2
#define CONFIG_INS_HIL     3
#define CONFIG_INS_PX4     4
#define CONFIG_INS_FLYMAPLE 5
#define CONFIG_INS_L3G4200D 6

// barometer driver types
#define AP_BARO_BMP085   1
#define AP_BARO_MS5611   2
#define AP_BARO_PX4      3
#define AP_BARO_HIL      4

// compass driver types
#define AP_COMPASS_HMC5843   1
#define AP_COMPASS_PX4       2
#define AP_COMPASS_HIL       3

#endif // _DEFINES_H
