#define RED_PIN 12
#define YLW_PIN 11
#define GRN_PIN 10
#define BUTTON 2

int LedBlinkState = 1;

void setup() {
  
  pinMode(RED_PIN, OUTPUT);
  pinMode(YLW_PIN, OUTPUT);
  pinMode(GRN_PIN, OUTPUT);
  pinMode(BUTTON, INPUT);

  digitalWrite(RED_PIN, LOW);
  digitalWrite(YLW_PIN, LOW);
  digitalWrite(GRN_PIN, LOW);
}

void loop() {

   if(digitalRead(BUTTON)== LOW){
    if(LedBlinkState == 1) {
      digitalWrite(RED_PIN, HIGH );
      digitalWrite(YLW_PIN, LOW);
      digitalWrite(GRN_PIN, HIGH ); 
      LedBlinkState = 2;
    }else {
      digitalWrite(RED_PIN, LOW );
      digitalWrite(YLW_PIN, HIGH);
      digitalWrite(GRN_PIN, LOW );
      LedBlinkState = 1;
    }
     delay(300);  
    } 
    
}
