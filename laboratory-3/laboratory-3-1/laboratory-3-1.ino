//Пин подключен к ST_CP входу 74HC595
int latchPin = 11;
//Пин подключен к SH_CP входу 74HC595
int clockPin = 12;
//Пин подключен к DS входу 74HC595
int dataPin = 13;

char ind[]={B01111110, B00010010, B10111100, B10110110, B11010010, B11100110, B11101110, B00110010, B11111110, B11110110};
 
void setup() {
  //устанавливаем режим OUTPUT
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}
 
void loop() {
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, ind[0]);      
    shiftOut(dataPin, clockPin, MSBFIRST, ind[1]);
    digitalWrite(latchPin, HIGH);
    delay(500);
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, ind[0]);      
    shiftOut(dataPin, clockPin, MSBFIRST, ind[2]);
    digitalWrite(latchPin, HIGH);
    delay(500);
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, ind[0]);      
    shiftOut(dataPin, clockPin, MSBFIRST, ind[3]);
    digitalWrite(latchPin, HIGH);
    delay(500);
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, ind[0]);      
    shiftOut(dataPin, clockPin, MSBFIRST, ind[4]);
    digitalWrite(latchPin, HIGH);
    delay(500);    
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, ind[0]);      
    shiftOut(dataPin, clockPin, MSBFIRST, ind[5]);
    digitalWrite(latchPin, HIGH);
    delay(500);
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, ind[0]);      
    shiftOut(dataPin, clockPin, MSBFIRST, ind[6]);
    digitalWrite(latchPin, HIGH);
    delay(500);
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, ind[0]);      
    shiftOut(dataPin, clockPin, MSBFIRST, ind[7]);
    digitalWrite(latchPin, HIGH);
    delay(500);
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, ind[0]);      
    shiftOut(dataPin, clockPin, MSBFIRST, ind[8]);
    digitalWrite(latchPin, HIGH);
    delay(500);
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, ind[0]);      
    shiftOut(dataPin, clockPin, MSBFIRST, ind[9]);
    digitalWrite(latchPin, HIGH);
    delay(500);
}

