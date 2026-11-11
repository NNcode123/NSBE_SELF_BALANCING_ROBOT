#pragma once

#define MOTOR_A_IN1 2
#define MOTOR_A_IN2 3
#define MOTOR_A_ENA 5

#define MOTOR_B_IN1 4
#define MOTOR_B_IN2 7
#define MOTOR_B_ENB 6

// Motor Direction Inversion Flags (Set to 1 or -1 to flip spin direction if needed)
#define MOTOR_A_DIR 1
#define MOTOR_B_DIR 1

#define HIGH 1

#define LOW 0

// Safety PWM Cap (Max 180 out of 255 to limit motor voltage to ~6V with an 8.4V battery)[cite: 1]
#define MAX_PWM_LIMIT 180

#define IMU_ADDR 0x68

// MPU6050 Register Address Macros
#define IMU_PWR_MGMT_1   0x6B
#define IMU_CONFIG       0x1A
#define IMU_GYRO_CONFIG  0x1B
#define IMU_ACCEL_CONFIG 0x1C
#define IMU_ACCEL_XOUT   0x3B
#define IMU_GYRO_XOUT_H  0x43

#define FILTER_ALPHA     0.96f
#define ANGLE_SIGN       1.0f

#define LOOP_US             5000UL
#define START_WINDOW_DEG    5.0f
#define START_HOLD_MS       1000UL
#define TILT_CUTOFF_DEG     35.0f



float KP = 0.05;

float KI = 0.0;

float KD  = 0.002;

float ANGLE_TRIM = 0.0f;


constexpr int motorpins[] = {MOTOR_A_IN1, MOTOR_A_IN2, MOTOR_A_ENA, MOTOR_B_IN1, MOTOR_B_IN2, MOTOR_B_ENB};