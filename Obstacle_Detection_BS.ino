#include <Arduino.h>
#include "functions.h"

void setup()
{
    Serial.begin(9600);

    pinMode(TRIG_FRONT_PIN, OUTPUT);
    pinMode(ECHO_FRONT_PIN, INPUT);

    pinMode(TRIG_RIGHT_PIN, OUTPUT);
    pinMode(ECHO_RIGHT_PIN, INPUT);

    pinMode(TRIG_LEFT_PIN, OUTPUT);
    pinMode(ECHO_LEFT_PIN, INPUT);

    pinMode(BUZZER_PIN, OUTPUT);
    pinMode(VIBRATOR_PIN, OUTPUT);

    digitalWrite(TRIG_FRONT_PIN, LOW);
    digitalWrite(TRIG_RIGHT_PIN, LOW);
    digitalWrite(TRIG_LEFT_PIN, LOW);
    analogWrite(VIBRATOR_PIN, 0);
    noTone(BUZZER_PIN);
}

void loop()
{
    const float frontDistance = get_distance(TRIG_FRONT_PIN, ECHO_FRONT_PIN);
    delay(50);
    const float rightDistance = get_distance(TRIG_RIGHT_PIN, ECHO_RIGHT_PIN);
    delay(50);
    const float leftDistance = get_distance(TRIG_LEFT_PIN, ECHO_LEFT_PIN);

    Serial.print("Front: ");
    if (frontDistance < 0) Serial.print("No reading");
    else Serial.print(frontDistance);
    Serial.println(" cm");

    Serial.print("Right: ");
    if (rightDistance < 0) Serial.print("No reading");
    else Serial.print(rightDistance);
    Serial.println(" cm");

    Serial.print("Left: ");
    if (leftDistance < 0) Serial.print("No reading");
    else Serial.print(leftDistance);
    Serial.println(" cm");

    get_direction(frontDistance, rightDistance, leftDistance);

    Serial.println("--------------------");
    delay(100);
}
