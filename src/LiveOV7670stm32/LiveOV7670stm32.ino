

#include "main.h"


void setup() {
    initLiveOV7670();
    Serial.begin(115200);
}

void loop() {
    processFrame();
    delay(1000);
}
