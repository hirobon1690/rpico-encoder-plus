#pragma once
#include "encoder.pio.h"
#include "encoderBase.h"

class Qenc : public Encoder {
   public:
    Qenc(int pin);
    void init();
    void set(int);
    int get();

   private:
    static void pio_irq_handler_0();
    static void pio_irq_handler_1();
    // the pio instance
    PIO pio;
    // the state machine
    uint sm;
    // the current location of rotation
    static int rotation[8];
    static int id;
    static bool isInitialized;
    int pinA;
    static uint offset;
};