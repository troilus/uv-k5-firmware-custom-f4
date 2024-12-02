#ifndef APP_FLASHLIGHT_H
#define APP_FLASHLIGHT_H

#ifdef ENABLE_FLASHLIGHT

#include <stdint.h>

#if !defined(ENABLE_FEAT_F4HWN) || defined(ENABLE_FEAT_F4HWN_RESCUE_OPS)
    enum FlashlightMode_t {
        FLASHLIGHT_OFF = 0,
        FLASHLIGHT_ON,
        FLASHLIGHT_BLINK,
        FLASHLIGHT_SOS
    };

    extern enum FlashlightMode_t gFlashLightState;
    extern volatile uint16_t     gFlashLightBlinkCounter;

    void FlashlightTimeSlice(void);
#endif
void ACTION_FlashLight(void);

#endif

#endif