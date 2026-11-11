



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