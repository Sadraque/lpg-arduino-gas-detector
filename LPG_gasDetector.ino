
/*
    LPG GAS DETECTOR  

    # LED blue = ON #
    # LED green = Safe #
    # LED yellow = Alert #
    # LED orange = Danger #
    # LED red = Contaminated Area #
    
    # ALARM 0 = On #
    # ALARM 1 = Alert #
    # ALARM 2 = Danger #
    # ALARM 3 = Contaminated Area #  

*/

int const PROGMEM SENSOR_GAS = A1; //ping GAS SENSOR
int const PROGMEM LED_ON = 8; //pin led ON
int const PROGMEM LED_GREEN = 7; //pin led GREEN
int const PROGMEM LED_YELLOW = 6; //pin led YELLOW
int const PROGMEM LED_ORANGE = 5; //pin led ORANGE
int const PROGMEM LED_RED = 4; //pino led RED
int const PROGMEM BUZZER = 3; //alarm BUZZER pin
int const PROGMEM T = 150; //delay time
int const PROGMEM H_FREQ = 1350; //high frequence song
int const PROGMEM L_FREQ = 1050; //low frequence song
int const PROGMEM CALL_A = 30; //trigger factor: ALERT
int const PROGMEM CALL_L = 50; //trigger factor: DANGER
int const PROGMEM CALL_V = 80; //trigger factor: CONTAMINATED AREA
int VOUT; //gas sensor output


/**
 * Plays HIGH Frequency (H_FREQ)
 */
void play_H(){
  tone(BUZZER, H_FREQ);
    
  digitalWrite(BUZZER, HIGH); 
  delay(T);
  
  noTone(BUZZER);
  delay(T);
}

/**
 * Plays LOW Frequency (L_FREQ)
 */
void play_L(){
  tone(BUZZER, L_FREQ);
    
  digitalWrite(BUZZER, HIGH); 
  delay(T);
  
  noTone(BUZZER);
  delay(T);
}

/**
 * Alarm ON
 */
void alarm_0(){
  play_L();
  noTone(BUZZER);
 
  digitalWrite(LED_ON, HIGH);
}

/**
 * alarm ALERT
 */
void alarm_1(){
if(VOUT > CALL_A && VOUT <= CALL_L){

  play_L();
  play_H();
    
  delay(2000);      
  }
  else{  
  noTone(BUZZER);   
  }
}

/**
 * alarm DANGER
 */
void alarm_2(){
 if(VOUT > CALL_L && VOUT <= CALL_V){

  play_L();
  play_H();
  play_L();
    
  delay(500);      
  }
  else{  
  noTone(BUZZER);   
  }
}

/**
 * alarm CONTAMINaTED AREA
 */
void alarm_3(){
  if(VOUT >= CALL_V){

    play_L();
    play_H();
  }
  else{ 
  noTone(BUZZER);  
  }
}


void setup(){
 
    pinMode(LED_ON, OUTPUT);
    pinMode(LED_GREEN, OUTPUT);
    pinMode(LED_YELLOW, OUTPUT);
    pinMode(LED_ORANGE, OUTPUT);
    pinMode(LED_RED, OUTPUT);
    pinMode(BUZZER, OUTPUT);    
  
    alarm_0();
}

void loop(){
    VOUT = analogRead(SENSOR_GAS); //reading VOUT
    VOUT = map(VOUT, 300, 750, 0, 100); //coverter A/D
 
    digitalWrite(LED_GREEN, VOUT < CALL_A ? HIGH : LOW);
    digitalWrite(LED_YELLOW, VOUT >= CALL_A && VOUT < CALL_L ? HIGH : LOW);
    digitalWrite(LED_ORANGE, VOUT >= CALL_L && VOUT < CALL_V ? HIGH : LOW);
    digitalWrite(LED_RED, VOUT >= CALL_V ? HIGH : LOW);
     
    alarm_1();
    alarm_2();
    alarm_3();
 
}
