
int state='g';

void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  digitalWrite(8, HIGH);
}


void loop() {
  if(Serial.available() > 0){
    state=Serial.read();
  }
  
  if(state=='a'){
  digitalWrite(8, HIGH);   
  }
  
  if(state=='s'){
    digitalWrite(8, LOW);                         
  }
  
}
