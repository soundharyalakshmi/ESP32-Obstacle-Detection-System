#include <Arduino.h>
#include "functions.h"

float get_distance(int trig_pin, int echo_pin)
{
    digitalWrite(trig_pin, LOW);
    delayMicroseconds(2);

    digitalWrite(trig_pin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig_pin, LOW);

    // A timeout prevents the program from waiting indefinitely.
    const unsigned long duration = pulseIn(echo_pin, HIGH, 30000UL);

    // pulseIn() returns 0 when no echo is received before the timeout.
    if (duration == 0)
    {
        return -1.0f;
    }

    // Speed of sound is approximately 0.0343 cm per microsecond.
    return (duration * 0.0343f) / 2.0f;
}
