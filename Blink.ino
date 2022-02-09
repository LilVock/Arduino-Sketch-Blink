// This function is started once when the board is started
void setup() {
  // initialize the internal LED pin
  pinMode(LED_BUILTIN, OUTPUT);
}
 
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  //включаем светодиод
  delay(1000);                       // ждём одну секунду
  digitalWrite(LED_BUILTIN, LOW);    // выключаем светодиод
  delay(1000);                       // ждём одну секунду
}
