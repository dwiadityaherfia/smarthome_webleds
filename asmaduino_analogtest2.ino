void setup(){
  pinMode(7,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(7,1);
  int anIn = analogRead(0);
  float v = anIn * (5.00 / 1023);
  Serial.print("Nilai analog terbaca (ON) : ");
  Serial.print(anIn);
  Serial.print(" Nilai Voltase : ");
  Serial.println(v);
  delay(3000);
  digitalWrite(7,0);
  anIn = analogRead(0);
  v = anIn * (5.00 / 1023);
  Serial.print("Nilai analog terbaca (OFF): ");
  Serial.print(anIn);
  Serial.print(" Nilai Voltase : ");
  Serial.println(v);
  delay(3000);
}
