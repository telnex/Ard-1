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
  for (int k=0; k <= 9; k++) {
    for (int i=0; i <= 9; i++) {
      digitalWrite(latchPin, LOW);
      shiftOut(dataPin, clockPin, MSBFIRST, ind[i]);      
      shiftOut(dataPin, clockPin, MSBFIRST, ind[k]);
      digitalWrite(latchPin, HIGH);
      delay(500);
    }
  }
}

