#pragma once

#include <Arduino.h>
#include "../Config.h"


namespace Motor {


    void setMotorA(float speed) {
        if (speed > 1.0f) speed = 1.0f;
        if (speed < -1.0f) speed = -1.0f;

        speed *= MOTOR_A_DIR;

        int pwmVal = (int)(fabs(speed) * MAX_PWM_LIMIT);

        digitalWrite(MOTOR_A_IN1, speed > 0 ? HIGH : LOW);
        digitalWrite(MOTOR_A_IN2, speed < 0 ? HIGH : LOW);
        analogWrite(MOTOR_A_ENA, pwmVal);
    }

    void setMotorB(float speed) {
        if (speed > 1.0f) speed = 1.0f;
        if (speed < -1.0f) speed = -1.0f;

        speed *= MOTOR_B_DIR;

        int pwmVal = (int)(fabs(speed) * MAX_PWM_LIMIT);

        digitalWrite(MOTOR_B_IN1, speed > 0 ? HIGH : LOW);
        digitalWrite(MOTOR_B_IN2, speed < 0 ? HIGH : LOW);
        analogWrite(MOTOR_B_ENB, pwmVal);
    }

    void drive(float speedA, float speedB) {
        setMotorA(speedA);
        setMotorB(speedB);
    }

    void stop() {
        drive(0.0f, 0.0f);
    }

}  // namespace Motor