namespace Motor {

    void setMotorA(float speed) {
        speed = std::clamp(speed, -1.0f, 1.0f);
        int pwmVal = (int)(fabs(speed) * MAX_PWM_LIMIT);

        digitalWrite(MOTOR_A_IN1, speed > 0 ? HIGH : LOW);
        digitalWrite(MOTOR_A_IN2, speed < 0 ? HIGH : LOW);
        analogWrite(MOTOR_A_ENA, pwmVal);
    }

    void setMotorB(float speed) {
        speed = std::clamp(speed, -1.0f, 1.0f);
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

    void setup() {
        pinMode(MOTOR_A_IN1, OUTPUT);
        pinMode(MOTOR_A_IN2, OUTPUT);
        pinMode(MOTOR_A_ENA, OUTPUT);
        
        pinMode(MOTOR_B_IN1, OUTPUT);
        pinMode(MOTOR_B_IN2, OUTPUT);
        pinMode(MOTOR_B_ENB, OUTPUT);
    }

    void loop() {
        drive(0.5f, 0.0f);
        drive(-0.5f, -0.5f);
        drive(0.5f, 0.5f);
        stop();
    }

}  // namespace Motor