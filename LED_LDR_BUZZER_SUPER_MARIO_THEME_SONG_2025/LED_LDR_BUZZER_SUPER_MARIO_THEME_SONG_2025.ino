const int LDR_PIN = A0;     
const int LED_PIN = 13;     
const int BUZZER_PIN = 12;   


const int THRESHOLD = 500;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  Serial.begin(9600);  
}

void loop() {
  int lightLevel = analogRead(LDR_PIN);  
  Serial.print("Light Level: ");
  Serial.println(lightLevel);

  if (lightLevel > THRESHOLD) {
    
    digitalWrite(LED_PIN, HIGH);
    
    //Super Mario Bros. Theme 
tone(BUZZER_PIN, 660); delay(100);
noTone(BUZZER_PIN); delay(150);
tone(BUZZER_PIN, 660); delay(100);
noTone(BUZZER_PIN); delay(300);
tone(BUZZER_PIN, 660); delay(100);
noTone(BUZZER_PIN); delay(300);
tone(BUZZER_PIN, 510); delay(100);
noTone(BUZZER_PIN); delay(100);
tone(BUZZER_PIN, 660); delay(100);
noTone(BUZZER_PIN); delay(300);
tone(BUZZER_PIN, 770); delay(100);
noTone(BUZZER_PIN); delay(550);
tone(BUZZER_PIN, 380); delay(100);
noTone(BUZZER_PIN); delay(575);


tone(BUZZER_PIN, 510); delay(100);
noTone(BUZZER_PIN); delay(450);
tone(BUZZER_PIN, 380); delay(100);
noTone(BUZZER_PIN); delay(400);
tone(BUZZER_PIN, 320); delay(100);
noTone(BUZZER_PIN); delay(500);
tone(BUZZER_PIN, 440); delay(100);
noTone(BUZZER_PIN); delay(300);
tone(BUZZER_PIN, 480); delay(80);
noTone(BUZZER_PIN); delay(330);
tone(BUZZER_PIN, 450); delay(100);
noTone(BUZZER_PIN); delay(150);
tone(BUZZER_PIN, 430); delay(100);
noTone(BUZZER_PIN); delay(300);
tone(BUZZER_PIN, 380); delay(100);
noTone(BUZZER_PIN); delay(200);
tone(BUZZER_PIN, 660); delay(80);
noTone(BUZZER_PIN); delay(200);
tone(BUZZER_PIN, 760); delay(50);
noTone(BUZZER_PIN); delay(150);
tone(BUZZER_PIN, 860); delay(100);
noTone(BUZZER_PIN); delay(300);
tone(BUZZER_PIN, 700); delay(80);
noTone(BUZZER_PIN); delay(150);
tone(BUZZER_PIN, 760); delay(50);
noTone(BUZZER_PIN); delay(350);
tone(BUZZER_PIN, 660); delay(80);
noTone(BUZZER_PIN); delay(300);
tone(BUZZER_PIN, 520); delay(80);
noTone(BUZZER_PIN); delay(150);
tone(BUZZER_PIN, 580); delay(80);
noTone(BUZZER_PIN); delay(150);
tone(BUZZER_PIN, 480); delay(80);
noTone(BUZZER_PIN); delay(500);


tone(BUZZER_PIN, 510); delay(100);
noTone(BUZZER_PIN); delay(450);
tone(BUZZER_PIN, 380); delay(100);
noTone(BUZZER_PIN); delay(400);
tone(BUZZER_PIN, 320); delay(100);
noTone(BUZZER_PIN); delay(500);
tone(BUZZER_PIN, 440); delay(100);
noTone(BUZZER_PIN); delay(300);
tone(BUZZER_PIN, 480); delay(80);
noTone(BUZZER_PIN); delay(330);
tone(BUZZER_PIN, 450); delay(100);
noTone(BUZZER_PIN); delay(150);
tone(BUZZER_PIN, 430); delay(100);
noTone(BUZZER_PIN); delay(300);
tone(BUZZER_PIN, 380); delay(100);
noTone(BUZZER_PIN); delay(200);
tone(BUZZER_PIN, 660); delay(80);
noTone(BUZZER_PIN); delay(200);
tone(BUZZER_PIN, 760); delay(50);
noTone(BUZZER_PIN); delay(150);
tone(BUZZER_PIN, 860); delay(100);
noTone(BUZZER_PIN); delay(300);
tone(BUZZER_PIN, 700); delay(80);
noTone(BUZZER_PIN); delay(150);
tone(BUZZER_PIN, 760); delay(50);
noTone(BUZZER_PIN); delay(350);
tone(BUZZER_PIN, 660); delay(80);
noTone(BUZZER_PIN); delay(300);
tone(BUZZER_PIN, 520); delay(80);
noTone(BUZZER_PIN); delay(150);
tone(BUZZER_PIN, 580); delay(80);
noTone(BUZZER_PIN); delay(150);
tone(BUZZER_PIN, 480); delay(80);
noTone(BUZZER_PIN); delay(500);

// -- Ending riff --
tone(BUZZER_PIN, 500); delay(100);
noTone(BUZZER_PIN); delay(100);
tone(BUZZER_PIN, 760); delay(100);
noTone(BUZZER_PIN); delay(100);
tone(BUZZER_PIN, 720); delay(100);
noTone(BUZZER_PIN); delay(100);
tone(BUZZER_PIN, 680); delay(100);
noTone(BUZZER_PIN); delay(150);
tone(BUZZER_PIN, 620); delay(100);
noTone(BUZZER_PIN); delay(300);
tone(BUZZER_PIN, 650); delay(150);
noTone(BUZZER_PIN); delay(300);

tone(BUZZER_PIN, 380); delay(100);
noTone(BUZZER_PIN); delay(150);
tone(BUZZER_PIN, 430); delay(100);
noTone(BUZZER_PIN); delay(150);
tone(BUZZER_PIN, 500); delay(100);
noTone(BUZZER_PIN); delay(150);
tone(BUZZER_PIN, 430); delay(100);
noTone(BUZZER_PIN); delay(150);
tone(BUZZER_PIN, 500); delay(100);
noTone(BUZZER_PIN); delay(150);
tone(BUZZER_PIN, 570); delay(100);
noTone(BUZZER_PIN); delay(220);
tone(BUZZER_PIN, 500); delay(100);
noTone(BUZZER_PIN); delay(220);
tone(BUZZER_PIN, 760); delay(100);
noTone(BUZZER_PIN); delay(150);
tone(BUZZER_PIN, 720); delay(100);
noTone(BUZZER_PIN); delay(150);
tone(BUZZER_PIN, 680); delay(100);
noTone(BUZZER_PIN); delay(150);
tone(BUZZER_PIN, 620); delay(100);
noTone(BUZZER_PIN); delay(300);
tone(BUZZER_PIN, 650); delay(150);
noTone(BUZZER_PIN); delay(300);
tone(BUZZER_PIN, 380); delay(100);
noTone(BUZZER_PIN); delay(150);
tone(BUZZER_PIN, 430); delay(100);
noTone(BUZZER_PIN); delay(150);
tone(BUZZER_PIN, 500); delay(100);
noTone(BUZZER_PIN); delay(150);
tone(BUZZER_PIN, 430); delay(100);
noTone(BUZZER_PIN); delay(150);
tone(BUZZER_PIN, 500); delay(100);
noTone(BUZZER_PIN); delay(150);
tone(BUZZER_PIN, 570); delay(100);
noTone(BUZZER_PIN); delay(420);
               
  } 
  else {
    
    digitalWrite(LED_PIN, LOW);
    noTone(BUZZER_PIN);
  }

  delay(100);  
}