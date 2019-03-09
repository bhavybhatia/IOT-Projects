void setup() {
  Serial.begin (9600);
  
  

}

void loop() {
  while (Serial.available()){
    char x = Serial.read();
    Serial.print (x);
  

   }
}
