const int LED=9;  //Define LED for pin 9


void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(13, LOW);
  pinMode(LED, OUTPUT); //Set the LED pin as a output
  digitalWrite(LED,HIGH); //Set the Led pin high

}

void loop() {
  // put your main code here, to run repeatedly:

  //We are not doing anything in the loop
/*


for(int i=1;i<=10;i++)
{
   
   digitalWrite(LED, HIGH);
   delay(500);
   digitalWrite(LED, LOW);
   delay(500); 
}

for(int i=1;i<=1000;i++)
{
digitalWrite(LED, HIGH);
delay(10);
digitalWrite(LED, LOW);
delay(100);
}



digitalWrite(LED, HIGH);
delay(10000);
//digitalWrite(13, LOW);

//delay(1000);

*/
}
