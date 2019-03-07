/*
  DigitalReadSerial
 Reads a digital input on pin 2, prints the result to the serial monitor

 This example code is in the public domain.
 */

void setup() {
  Serial.begin(9600);
  
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
 
}

void forward () {
  digitalWrite (5 , HIGH);
  digitalWrite (6 , LOW);
  digitalWrite (3 , LOW);
  digitalWrite (4 , HIGH);
  }
void reverse () {
    digitalWrite (5, HIGH);
    digitalWrite (6,LOW);
    digitalWrite (3, LOW);
    digitalWrite (4, HIGH);
    }
void left () {
  digitalWrite (5,LOW);
  digitalWrite (6 , HIGH);
  digitalWrite (3 , LOW);
  digitalWrite (4 , HIGH);
  }

void right  () {
  digitalWrite (5 , HIGH);
  digitalWrite (6 , LOW);
  digitalWrite (3 , HIGH);
  digitalWrite (4 ,LOW);
  }
  
void loop() {
 int x =  analogRead (A1);
Serial.print ("x = " );
Serial.println (x);

int y = analogRead (A2);
Serial.print ("y = ");
Serial.println(y);

  if (x<= 100 && y <= 100) {
    forward ();
    }
    else if (x<= 100 && y >100){
      left ();
      }
      else if (x>100 && y<100) {
        right ();
        }
 


  
}



