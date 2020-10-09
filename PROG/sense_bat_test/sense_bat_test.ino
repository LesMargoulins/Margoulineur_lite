
void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ;
  }
  Serial.println("Sense bat");
}

void loop() {
  int raw = analogRead(A5);
 float val = fmap(raw, 0, 1023, 0.0, 5.0);
 Serial.println(val);
 delay(1000);
}

float fmap(float x, float in_min, float in_max, float out_min, float out_max)
{
 return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
