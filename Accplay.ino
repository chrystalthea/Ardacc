#define ACCELX1 A0
#define ACCELY1 A1
#define ACCELZ1 A2
#define ACCELX2 A3
#define ACCELY2 A4
#define ACCELZ2 A5

void setup() {
 Serial.begin(9600);
}
void loop() {
// Serial.print("X1 " );
// Serial.print(analogRead(ACCELX1));
// Serial.print(" Y1 " );
// Serial.print(analogRead(ACCELY1));
// Serial.print(" Z1 " );
// Serial.print(analogRead(ACCELZ1));
// Serial.println();
//  Serial.print("X2 " );
// Serial.print(analogRead(ACCELX2));
// Serial.print(" Y2 " );
// Serial.print(analogRead(ACCELY2));
// Serial.print(" Z2 " );
// Serial.print(analogRead(ACCELZ2));
// Serial.println();
// delay(500);

int difx = analogRead(ACCELX1) - analogRead(ACCELX2);
if (difx > 10){
  Serial.print("Just right! X:");
  Serial.print(difx);
  Serial.println();}
  else if (-10 > difx < 9){
    Serial.print("Too Close! X:");
    Serial.print(difx);
    Serial.println();}
int dify = analogRead(ACCELY1) - analogRead(ACCELY2);
if (dify > 10){
  Serial.print("Just right! Y:");
  Serial.print(dify);
  Serial.println();}
  else if (-10 > difx < 9){
    Serial.print("Too Close! y:");
    Serial.print(dify);
    Serial.println();}
int difz = analogRead(ACCELZ1) - analogRead(ACCELZ2);
delay(1750);

 Serial.print("X " );
 Serial.print(difx);
 Serial.print(" Y " );
 Serial.print(dify);
 Serial.print(" Z " );
 Serial.print(difz);
 Serial.println();
 delay(250);

 
}
