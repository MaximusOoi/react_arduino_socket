#include <IRremote.h>

#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978

//Mario main theme melody
int mario_melody[] = {
  NOTE_E7, NOTE_E7, 0, NOTE_E7,
  0, NOTE_C7, NOTE_E7, 0,
  NOTE_G7, 0, 0,  0,
  NOTE_G6, 0, 0, 0,

  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,

  NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0,

  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,

  NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0
};

//Mario main them tempo
int tempo[] = {
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
};

//Underworld melody
int underworld_melody[] = {
  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,
  NOTE_AS3, NOTE_AS4, 0,
  0,
  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,
  NOTE_AS3, NOTE_AS4, 0,
  0,
  NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
  NOTE_DS3, NOTE_DS4, 0,
  0,
  NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
  NOTE_DS3, NOTE_DS4, 0,
  0, NOTE_DS4, NOTE_CS4, NOTE_D4,
  NOTE_CS4, NOTE_DS4,
  NOTE_DS4, NOTE_GS3,
  NOTE_G3, NOTE_CS4,
  NOTE_C4, NOTE_FS4, NOTE_F4, NOTE_E3, NOTE_AS4, NOTE_A4,
  NOTE_GS4, NOTE_DS4, NOTE_B3,
  NOTE_AS3, NOTE_A3, NOTE_GS3,
  0, 0, 0
};
//Underwolrd tempo
int underworld_tempo[] = {
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  6, 18, 18, 18,
  6, 6,
  6, 6,
  6, 6,
  18, 18, 18, 18, 18, 18,
  10, 10, 10,
  10, 10, 10,
  3, 3, 3
};

#define one 1000;
#define doublet 500;
#define triplet 333;
#define fourth 250;
#define eigth 125;
#define sixteenth 63;

int RECV_PIN = 11;
int BUZZ_PIN = 3;
int LED_YELLOW = 5;
int LED_BLUE = 6;
int LED_RED = 7;
int LED_GREEN = 8;

IRrecv irrecv(RECV_PIN);
decode_results results;

int octave;
int note;
int interval;

int btone[7][12] {
  {33, 35, 37, 39, 41, 44, 46, 49, 52, 55, 58, 62},
  {65, 69, 73, 78, 82, 87, 93, 98, 104, 110, 117, 123},
  {131, 139, 147, 156, 165, 175, 185, 196, 208, 220, 233, 247},
  {262, 277, 294, 311, 330, 349, 370, 392, 415, 440, 466, 494},
  {523, 554, 587, 622, 659, 698, 740, 784, 831, 880, 932, 988},
  {1047, 1109, 1175, 1245, 1319, 1397, 1480, 1568, 1661, 1760, 1875, 1976},
  {2093, 2217, 2349, 2489, 2637, 2794, 2960, 3136, 3322, 3520, 3729, 3951}
};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(BUZZ_PIN, OUTPUT);//buzzer
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  irrecv.enableIRIn(); // Start the receiver
  irrecv.blink13(true);

  octave = 5;
  interval = eigth;
}

void loop() {
  takeInput();
}

void takeInput()
{
  resetLED();
  if (irrecv.decode(&results)) {    //if recieve data from the ir receiver, run the switch statement
    switch (results.value) {
      case 0xFFE01F:
        //Serial.println("UP");
        sing(1);
        break;
      case 0xFFA857:
        //Serial.println("VOL");
        break ;
      case 0xFF906F:
       //Serial.println("DOWN");
      sing(2);
        break ;
      case 0xFF22DD:
        //Serial.println("|<<");
        if (octave > 0)
          octave--;
        //Serial.println(octave);
        break;
      case 0xFF02FD:
        //Serial.println(">||");
        break ;
      case 0xFFC23D:
        //Serial.println(">>|");
        if (octave < 6)
          octave++;
        //Serial.println(octave);
        break ;
      case 0xFF6897:
        //Serial.println("0");
        buzz(BUZZ_PIN, btone[octave][1], interval);
        delayNLight(LED_GREEN);
        break ;
      case 0xFF9867:
        //Serial.println("EQ");
        buzz(BUZZ_PIN, btone[octave][2], interval);
        delayNLight(LED_GREEN);

        break ;
      case 0xFFB04F:
        //Serial.println("ST/REPT");
        buzz(BUZZ_PIN, btone[octave][3], interval);
        delayNLight(LED_GREEN);
        break ;
      case 0xFF30CF:
        //Serial.println("1");
        buzz(BUZZ_PIN, btone[octave][4], interval);
        delayNLight(LED_RED);
        break ;
      case 0xFF18E7:
        //Serial.println("2");
        buzz(BUZZ_PIN, btone[octave][5], interval);
        delayNLight(LED_RED);
        break;
      case 0xFF7A85:
        //Serial.println("3");
        buzz(BUZZ_PIN, btone[octave][6], interval);
        delayNLight(LED_RED);
        break ;
      case 0xFF10EF:
        //Serial.println("4");
        buzz(BUZZ_PIN, btone[octave][7], interval);
        delayNLight(LED_BLUE);
        break ;
      case 0xFF38C7:
        //Serial.println("5");
        buzz(BUZZ_PIN, btone[octave][8], interval);
        delayNLight(LED_BLUE);
        break ;
      case 0xFF5AA5:
        //Serial.println("6");
        buzz(BUZZ_PIN, btone[octave][9], interval);
        delayNLight(LED_BLUE);
        break ;
      case 0xFF42BD:
        //Serial.println("7");
        buzz(BUZZ_PIN, btone[octave][10], interval);
        delayNLight(LED_YELLOW);
        break ;
      case 0xFF4AB5:
        //Serial.println("8");
        buzz(BUZZ_PIN, btone[octave][11], interval);
        delayNLight(LED_YELLOW);
        break ;
      case 0xFF52AD:
        //Serial.println("9");
        buzz(BUZZ_PIN, btone[octave][12], interval);
        delayNLight(LED_YELLOW);
        break ;
      default:
        //Serial.println(results.value, HEX);
        break;
    }
    irrecv.resume();
  }
}

void buzz(int targetPin, long frequency, long length) {
  long delayValue = 1000000 / frequency / 2; 
  
  long numCycles = frequency * length / 1000; 

  for (long i = 0; i < numCycles; i++) { 
    digitalWrite(targetPin, HIGH); 
    delayMicroseconds(delayValue); 
    digitalWrite(targetPin, LOW); 
    delayMicroseconds(delayValue); 
  }
}

void resetLED()
{
  digitalWrite(LED_BLUE, LOW);
  digitalWrite(LED_YELLOW, LOW);
  digitalWrite(LED_RED, LOW);
  digitalWrite(LED_GREEN, LOW);

}

void delayNLight(int ledColor)
{
  digitalWrite(ledColor, HIGH);
  delay(interval * 1.3);
  noTone(BUZZ_PIN);
  digitalWrite(ledColor, LOW);
}

int song = 0;

void sing(int song) {
    int ledShuffle = 1;
    
  if (song == 2) {
    //Serial.println(" 'Underworld Theme'");
    int size = sizeof(underworld_melody) / sizeof(int);
    for (int thisNote = 0; thisNote < size; thisNote++) {
      int noteDuration = 1000 / underworld_tempo[thisNote];

      buzz(BUZZ_PIN, underworld_melody[thisNote], noteDuration);
      
      delay(noteDuration * 1.30);
    resetLED();
    if (ledShuffle == 1)
    {
      ledShuffle = 2;
      digitalWrite(LED_BLUE, HIGH);
      digitalWrite(LED_GREEN, HIGH);

    }
    else
    {
      ledShuffle = 1;
      digitalWrite(LED_YELLOW, HIGH);
      digitalWrite(LED_RED, HIGH);
    }
      // stop the tone playing:
      buzz(BUZZ_PIN, 0, noteDuration);

    }

  } else {

    //Serial.println(" 'Mario Theme'");
    int size = sizeof(mario_melody) / sizeof(int);
    for (int thisNote = 0; thisNote < size; thisNote++) {

      int noteDuration = 1000 / tempo[thisNote];

      buzz(BUZZ_PIN, mario_melody[thisNote], noteDuration);

      delay(noteDuration * 1.30);
    resetLED();
    if (ledShuffle == 1)
    {
      ledShuffle = 2;
      digitalWrite(LED_BLUE, HIGH);
      digitalWrite(LED_GREEN, HIGH);

    }
    else
    {
      ledShuffle = 1;
      digitalWrite(LED_YELLOW, HIGH);
      digitalWrite(LED_RED, HIGH);
    }
      buzz(BUZZ_PIN, 0, noteDuration);

    }
  }
}
