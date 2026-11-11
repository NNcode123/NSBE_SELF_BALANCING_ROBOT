
#include "../Motor/Motor.h"

#include "../Config.h"


void setup() {
for (int pin: motorpins){
pinMode(pin, OUTPUT);
}
}

void loop() {
    drive(0.5f, 0.0f);
    drive(-0.5f, -0.5f);
    drive(0.5f, 0.5f);
    stop();
}