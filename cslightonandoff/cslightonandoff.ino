#define led 12
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}
String data;
char d1;
void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    data = Serial.readString();
    d1 = data.charAt(0);

    if(d1 == 'A'){
      digitalWrite(led, HIGH);
    }else if(d1 == 'a'){
      digitalWrite(led, LOW);
    }
  }
}
