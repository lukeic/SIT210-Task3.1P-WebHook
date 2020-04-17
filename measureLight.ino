int lightSensor = A5;
int lightLevel = 0;

void setup() {
  pinMode(lightSensor, INPUT);
}

void loop() {
    lightLevel = analogRead(lightSensor);
    Particle.publish("light_level", String::format("%d", lightLevel), PRIVATE);
    delay(30000);
}

