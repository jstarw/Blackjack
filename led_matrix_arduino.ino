#include <FrequencyTimer2.h>

#define SPACE { \
    {0, 0, 0, 0, 0},  \
    {0, 0, 0, 0, 0}, \
    {0, 0, 0, 0, 0}, \
    {0, 0, 0, 0, 0}, \
    {0, 0, 0, 0, 0}  \
}

#define SPADE { \
    {0, 0, 1, 0, 0},  \
    {0, 1, 1, 1, 0}, \
    {0, 1, 1, 1, 0}, \
    {1, 0, 1, 0, 1}, \
    {0, 0, 1, 0, 0}  \
}

#define DIAMOND { \
    {0, 0, 1, 0, 0},  \
    {0, 1, 1, 1, 0}, \
    {1, 1, 1, 1, 1}, \
    {0, 1, 1, 1, 0}, \
    {0, 0, 1, 0, 0}  \
}

#define HEART { \
    {0, 1, 0, 1, 0},  \
    {1, 1, 1, 1, 1}, \
    {1, 1, 1, 1, 1}, \
    {0, 1, 1, 1, 0}, \
    {0, 0, 1, 0, 0}  \
}

#define CLUB { \
    {0, 1, 1, 1, 0},  \
    {1, 0, 1, 0, 1}, \
    {1, 1, 1, 1, 1}, \
    {1, 0, 1, 0, 1}, \
    {0, 0, 1, 0, 0}  \
}

#define ZERO { \
    {0, 0, 1, 0, 0},  \
    {0, 1, 0, 1, 0}, \
    {0, 1, 0, 1, 0}, \
    {0, 1, 0, 1, 0}, \
    {0, 0, 1, 0, 0}  \
}

#define ONE { \
    {0, 0, 1, 0, 0},  \
    {0, 1, 1, 0, 0}, \
    {0, 0, 1, 0, 0}, \
    {0, 0, 1, 0, 0}, \
    {0, 1, 1, 1, 0}  \
}

#define TWO { \
    {0, 1, 1, 0, 0},  \
    {0, 0, 0, 1, 0}, \
    {0, 0, 1, 1, 0}, \
    {0, 1, 0, 0, 0}, \
    {0, 1, 1, 1, 0}  \
}

#define THREE { \
    {0, 1, 1, 1, 0},  \
    {0, 0, 0, 1, 0}, \
    {0, 1, 1, 1, 0}, \
    {0, 0, 0, 1, 0}, \
    {0, 1, 1, 1, 0}  \
}

#define FOUR { \
    {0, 1, 0, 1, 0},  \
    {0, 1, 0, 1, 0}, \
    {0, 1, 1, 1, 0}, \
    {0, 0, 0, 1, 0}, \
    {0, 0, 0, 1, 0}  \
}

#define FIVE { \
    {0, 1, 1, 1, 0},  \
    {0, 1, 0, 0, 0}, \
    {0, 1, 1, 1, 0}, \
    {0, 0, 0, 1, 0}, \
    {0, 1, 1, 1, 0}  \
}

#define SIX { \
    {0, 0, 1, 1, 0},  \
    {0, 1, 0, 0, 0}, \
    {0, 1, 1, 1, 0}, \
    {0, 1, 0, 1, 0}, \
    {0, 1, 1, 1, 0}  \
}

#define SEVEN { \
    {0, 1, 1, 1, 0},  \
    {0, 0, 0, 1, 0}, \
    {0, 0, 0, 1, 0}, \
    {0, 0, 1, 0, 0}, \
    {0, 0, 1, 0, 0}  \
}

#define EIGHT { \
    {0, 0, 1, 0, 0},  \
    {0, 1, 0, 1, 0}, \
    {0, 0, 1, 0, 0}, \
    {0, 1, 0, 1, 0}, \
    {0, 0, 1, 0, 0}  \
}

#define NINE { \
    {0, 1, 1, 1, 0},  \
    {0, 1, 0, 1, 0}, \
    {0, 1, 1, 1, 0}, \
    {0, 0, 0, 1, 0}, \
    {0, 1, 1, 1, 0}  \
}

#define TEN { \
    {1, 0, 0, 1, 0},  \
    {1, 0, 1, 0, 1}, \
    {1, 0, 1, 0, 1}, \
    {1, 0, 1, 0, 1}, \
    {1, 0, 0, 1, 0}  \
}

#define J { \
    {0, 1, 1, 1, 0},  \
    {0, 0, 1, 0, 0}, \
    {0, 0, 1, 0, 0}, \
    {0, 0, 1, 0, 0}, \
    {0, 1, 1, 0, 0}  \
}

#define Q { \
    {0, 1, 1, 1, 0}, \
    {0, 1, 0, 1, 0}, \
    {0, 1, 0, 1, 0}, \
    {0, 1, 1, 1, 0}, \
    {0, 0, 0, 1, 1}  \
}

#define K  { \
    {0, 1, 0, 1, 0}, \
    {0, 1, 0, 1, 0}, \
    {0, 1, 1, 0, 0}, \
    {0, 1, 0, 1, 0}, \
    {0, 1, 0, 1, 0}  \
}

#define A { \
    {0, 0, 1, 0, 0}, \
    {0, 1, 0, 1, 0}, \
    {0, 1, 1, 1, 0}, \
    {0, 1, 0, 1, 0}, \
    {0, 1, 0, 1, 0}  \
}

#define B { \
    {0, 1, 1, 1, 0}, \
    {0, 1, 0, 1, 0}, \
    {0, 1, 1, 0, 0}, \
    {0, 1, 0, 1, 0}, \
    {0, 1, 1, 1, 0}  \
}

#define L { \
    {0, 1, 0, 0, 0}, \
    {0, 1, 0, 0, 0}, \
    {0, 1, 0, 0, 0}, \
    {0, 1, 0, 0, 0}, \
    {0, 1, 1, 1, 0}  \
}

#define C { \
    {0, 1, 1, 1, 0}, \
    {0, 1, 0, 0, 0}, \
    {0, 1, 0, 0, 0}, \
    {0, 1, 0, 0, 0}, \
    {0, 1, 1, 1, 0}  \
}

#define S { \
    {0, 0, 1, 1, 0}, \
    {0, 1, 0, 0, 0}, \
    {0, 1, 1, 0, 0}, \
    {0, 0, 0, 1, 0}, \
    {0, 1, 1, 0, 0}  \
}

#define U { \
    {1, 0, 0, 1, 0}, \
    {1, 0, 0, 1, 0}, \
    {1, 0, 0, 1, 0}, \
    {1, 0, 0, 1, 0}, \
    {0, 1, 1, 0, 0}  \
}

#define M { \
    {1, 0, 0, 0, 1}, \
    {1, 1, 0, 1, 1}, \
    {1, 0, 1, 0, 1}, \
    {1, 0, 0, 0, 1}, \
    {1, 0, 0, 0, 1}  \
}

byte space[5][5] = SPACE;
byte spade[5][5] = SPADE;
byte club[5][5] = CLUB;
byte heart[5][5] = HEART;
byte diamond[5][5] = DIAMOND;
byte ace[5][5] = A;
byte zero[5][5] = ZERO;
byte one[5][5] = ONE;
byte two[5][5] = TWO;
byte three[5][5] = THREE;
byte four[5][5] = FOUR;
byte five[5][5] = FIVE;
byte six[5][5] = SIX;
byte seven[5][5] = SEVEN;
byte eight[5][5] = EIGHT;
byte nine[5][5] = NINE;
byte ten[5][5] = TEN;
byte j[5][5] = J;
byte q[5][5] = Q;
byte k[5][5] = K;
byte b[5][5] = B;
byte l[5][5] = L;
byte c[5][5] = C;
byte s[5][5] = S;
byte u[5][5] = U;
byte m[5][5] = M;


byte col = 0;
byte leds[5][5];

// pin[xx] on led matrix connected to nn on Arduino (-1 is dummy to make array start at pos 1)
int pins[11]= {-1,4,5,6,7,8,9,10,11,12,13};

// col[xx] of leds = pin yy on led matrix
int cols[5] = {pins[5], pins[4], pins[3], pins[2], pins[1]};

// row[xx] of leds = pin yy on led matrix
int rows[5] = {pins[6], pins[7], pins[8], pins[9], pins[10]};

const int numPatterns = 4;
const int messageLength = 10;
const int cardCountLength = 7;

int pattern = 0;
int messagePattern = 0;
int sumPattern = 0;

volatile bool isHit = false;
volatile bool isMessage = true;
volatile bool isSum = false;

byte cardCount[cardCountLength][5][5] = {
  S,U,M,SPACE,ZERO,ZERO,SPACE
};
byte message[messageLength][5][5] = {
  B,L,A,C,K,J,A,C,K,SPACE
};
byte patterns[numPatterns][5][5] = {
  SIX,SPACE,HEART,SPACE
};

//long randNumber;

volatile int card;
volatile int suit;
volatile int sum = 0;


void setup() {
  Serial.begin(9600);
  // sets the pins as output
  for (int i = 1; i <= 10; i++) {
    pinMode(pins[i], OUTPUT);
  }
  // set up random seed
  randomSeed(analogRead(0));
  // set up cols and rows
  for (int i = 1; i <= 5; i++) {
    digitalWrite(cols[i - 1], LOW);
  }

  for (int i = 1; i <= 5; i++) {
    digitalWrite(rows[i - 1], LOW);
  }

  clearLeds();

  // Turn off toggling of pin 11
  FrequencyTimer2::disable();
  // Set refresh rate (interrupt timeout period)
  FrequencyTimer2::setPeriod(2000);
  // Set interrupt routine to be called
  FrequencyTimer2::setOnOverflow(display);

  setPattern(pattern);
  //interrupts set up at the start of the program
  attachInterrupt(0, hit, RISING);
  attachInterrupt(1, countSum, RISING);
//  Serial.println(digitalRead(2));
}

void loop() {
  while(isMessage) {
    messagePattern = ++messagePattern % messageLength;
    slidePattern(messagePattern, 200, message);
  }
  
  while(isHit) {
    pattern = ++pattern % numPatterns;
    slidePattern(pattern, 200, patterns); 
  }

  while(isSum) {
    sumPattern = ++sumPattern % cardCountLength;
    slidePattern(sumPattern, 200, cardCount); 
  }
}

void clearLeds() {
  // Clear display array
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      leds[i][j] = 0;
    }
  }
}

void setPattern(int pattern) {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      leds[i][j] = patterns[pattern][i][j];
    }
  }
}

void slidePattern(int pattern, int del, byte ledpattern[][5][5]) {
  for (int l = 0; l < 5; l++) {
    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        leds[j][i] = leds[j][i+1];
      }
    }
    for (int j = 0; j < 5; j++) {
      leds[j][4] = ledpattern[pattern][j][0 + l];
    }
    delay(del);
  }
}

// Interrupt routine
void display() {
  digitalWrite(cols[col], LOW);  // Turn whole previous column off
  col++;
  if (col == 5) {
    col = 0;
  }
  for (int row = 0; row < 5; row++) {
    if (leds[col][4 - row] == 1) {
      digitalWrite(rows[row], LOW);  // Turn on this led
    }
    else {
      digitalWrite(rows[row], HIGH); // Turn off this led
    }
  }
  digitalWrite(cols[col], HIGH); // Turn whole column on at once (for equal lighting times)
}

void hit() {
  isHit=true;
  isMessage = false;
  isSum = false;
  
  card = random(1,14);
  suit = random(1,5);
  if (card<11) {
    sum +=card;
  }
  else {
    sum +=10;
  }
  
  Serial.println(card);
  switch(suit) {
    case 1:
      setCard(diamond, 2, patterns);
      break;
    case 2:
      setCard(club, 2, patterns);
      break;
    case 3:
      setCard(heart, 2, patterns);
      break;
    case 4:
      setCard(spade, 2, patterns);
      break;
  }
  intSwitch(card, 0, patterns);
  
}

void countSum() {
  isSum = true;
  isMessage = false;
  isHit = false;
  
  Serial.println(sum);
  if (sum == 21) {
    isSum = false;
    isMessage = true;
    isHit = false;
  }
  else if (sum < 10) {
    intSwitch(sum, 5, cardCount);
   }
   else {
    volatile int temp = sum/10;
    intSwitch(temp, 4, cardCount);
    intSwitch(sum%10, 5, cardCount);
   }
}

void intSwitch(int num, int pos, byte Array[][5][5]) {
  switch (num){
    case 0:
      setCard(zero, pos, Array);
      break;
    case 1:
      if (Array==patterns) {
        setCard(ace, pos, patterns);
      }
      else {
        setCard(one, pos, cardCount);
      }
      
      break;
    case 2:
      setCard(two, pos, Array);
      break;
    case 3:
      setCard(three, pos, Array);
      break;
    case 4:
      setCard(four, pos, Array);
      break;
    case 5:
      setCard(five, pos, Array);
      break;
    case 6:
      setCard(six, pos, Array);
      break;
    case 7:
      setCard(seven, pos, Array);
      break;
    case 8:
      setCard(eight, pos, Array);
      break;
    case 9:
      setCard(nine, pos, Array);
      break;
    case 10:
      setCard(ten, pos, Array);
      break;
    case 11:
      setCard(j, pos, Array);
      break;
    case 12:
      setCard(q, pos, Array);
      break;
    case 13:
      setCard(k, pos, Array);
      break;
    }
}
void setCard(byte arr[5][5], int pos, byte Array[][5][5]) {
  for (int i = 0; i<5;i++) {
    for (int j = 0; j<5; j++){
      Array[pos][i][j] = arr[i][j];
    }
  }
}

