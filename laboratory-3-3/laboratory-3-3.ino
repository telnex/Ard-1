//Пин подключен к ST_CP входу 74HC595
int latchPin = 11;
//Пин подключен к SH_CP входу 74HC595
int clockPin = 12;
//Пин подключен к DS входу 74HC595
int dataPin = 13;

char ind[]={B01111110, B00010010, B10111100, B10110110, B11010010, B11100110, B11101110, B00110010, B11111110, B11110110};

//Будем записывать кол-во нажатий
int but1 = 0;
int but2 = 0;
 
void setup() {
  //устанавливаем режим OUTPUT
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}
 
void loop() {
  if (digitalRead(5) == 0) {    
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, ind[but1]);      
    shiftOut(dataPin, clockPin, MSBFIRST, ind[but2]);
    digitalWrite(latchPin, HIGH);
    but1++;
    if (but1 > 9) {
      but1 =0;
      but2++;
      if (but2 > 9) {
        but2 =0;
      }
    }
    delay(1000);
  } 
}

