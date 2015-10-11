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
  if (digitalRead(5) == 0) {
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, ind[1]);      
    shiftOut(dataPin, clockPin, MSBFIRST, ind[0]);
    digitalWrite(latchPin, HIGH);
  } 
  if (digitalRead(6) == 0) {
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, ind[0]);      
    shiftOut(dataPin, clockPin, MSBFIRST, ind[1]);
    digitalWrite(latchPin, HIGH);
  }
}

