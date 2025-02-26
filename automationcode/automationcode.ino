/*created by Prasant Bhatt
www.facebook.com/elefy
you can do whatever you want with this code
*/
#include <LiquidCrystal.h>
LiquidCrystal lcd(10, 9, 8, 7, 6, 5);
// constants won't change. They're used here to
// set pin numbers:
const int buttonPin1 = 2; // the number of the pushbutton pin
const int buttonPin2 = 3;
const int buttonPin3 = 4;
const int relayPin1 = 13; // the number of the relay pin
const int relayPin2 = 12 ;
const int relayPin3 = 11;
// variables will change:
int buttonState1 = 0; // variable for reading the pushbutton status
int buttonState2 = 0;
int buttonState3 = 0;
void setup() {
// initialize the relay pins as an output:
pinMode(relayPin1, OUTPUT);
pinMode(relayPin2,OUTPUT);
pinMode(relayPin3,OUTPUT);
// initialize the pushbutton pin as an input:
pinMode(buttonPin1, INPUT);
pinMode(buttonPin2, INPUT);
pinMode(buttonPin3, INPUT);
lcd.begin (20, 4);
lcd.clear ();
lcd.setCursor (0, 0);
lcd.print ("Davie's Automation");
}
void loop(){
// read the state of the pushbutton value:
buttonState1 = digitalRead(buttonPin1);
buttonState2=digitalRead(buttonPin2);
buttonState3=digitalRead(buttonPin3);
// check if the pushbutton is pressed.
// if it is, the buttonState is HIGH:
if (buttonState1 == HIGH) {
// turn Lamp on:
digitalWrite(relayPin1, HIGH);
lcd.setCursor (0, 1);
lcd.print ("LAMP 1 IS ON ");
}
else {
// turn Lamp off:
digitalWrite(relayPin1, LOW);
lcd.setCursor (0, 1);
lcd.print ("LAMP 1 IS OFF ");
}
if(buttonState2==HIGH){
digitalWrite(relayPin2,HIGH);
lcd.setCursor (0, 2);
lcd.print ("FAN IS ON ");
}
else{
digitalWrite(relayPin2,LOW);
lcd.setCursor (0, 2);
lcd.print ("FAN IS OFF ");
}
if(buttonState3==HIGH){
digitalWrite(relayPin3,HIGH);
lcd.setCursor (0, 3);
lcd.print ("LAMP 2 IS ON ");
}
else{
digitalWrite(relayPin3,LOW);
lcd.setCursor (0, 3);
lcd.print ("LAMP2 IS OFF ");
}
}