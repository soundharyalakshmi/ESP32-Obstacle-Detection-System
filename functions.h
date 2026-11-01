#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <Arduino.h>

#define TRIG_FRONT_PIN 22
#define ECHO_FRONT_PIN 23

#define TRIG_RIGHT_PIN 32
#define ECHO_RIGHT_PIN 33

#define TRIG_LEFT_PIN 2
#define ECHO_LEFT_PIN 4

#define BUZZER_PIN 14
#define VIBRATOR_PIN 5

float get_distance(int trig_pin, int echo_pin);
void get_direction(float FrontDistance, float RightDistance, float LeftDistance);
void set_freq(int frequency, int duration, int buzzer_pin);

#endif
