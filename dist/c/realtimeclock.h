// Autogenerated C header file for Real time clock
#ifndef _JACDAC_SPEC_REAL_TIME_CLOCK_H
#define _JACDAC_SPEC_REAL_TIME_CLOCK_H 1

#define JD_SERVICE_CLASS_REAL_TIME_CLOCK  0x1a8b1a28

/**
 * Current time in 24h representation. ``echo`` is the Unix epoch, seconds since ``1/1/1970``. 
 * Default streaming period is 1 second.
 */
#define JD_REAL_TIME_CLOCK_REG_NOW JD_REG_READING
typedef struct jd_real_time_clock_now {
    uint32_t epoch;
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t reserved;
    uint8_t hour;
    uint8_t min;
    uint8_t sec;
} jd_real_time_clock_now_t;


/**
 * Read-only s u16.16 (uint32_t). Time drift since the last call to the ``set_time`` command.
 */
#define JD_REAL_TIME_CLOCK_REG_ERROR 0x180

/**
 * Constant ppm u16.16 (uint32_t). Error on the clock, in parts per million of seconds.
 */
#define JD_REAL_TIME_CLOCK_REG_PRECISION 0x180

/**
 * Sets the current time and resets the error.
 */
#define JD_REAL_TIME_CLOCK_CMD_SET_TIME 0x80
typedef struct jd_real_time_clock_set_time {
    uint32_t epoch;
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t reserved;
    uint8_t hour;
    uint8_t min;
    uint8_t sec;
} jd_real_time_clock_set_time_t;


#endif
