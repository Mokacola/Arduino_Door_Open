// pin assignments
 int LDR = 0;
 int LED = 4;
 
 //CONNOR
 
 // variables
 int base;
 int threshold = 40;
 
 // declare inputs and outputs
 // and take a baseline reading
 void setup() 
 {
   Serial.begin(9600);
   //pinMode(LED, OUTPUT);
   pinMode(LDR, INPUT);
   pinMode(LED, INPUT);
   base = analogRead(LDR);
 }
 

 void loop() 
 {
   int v = analogRead(LDR);
   if ((base - v) > threshold) 
   {
     Serial.println("Photoresistor Triggered");
     digitalWrite(LED, HIGH);
   } 
   else
   {
     digitalWrite(LED, LOW);
   }
   delay(10);
 }
 
 boolean secretCode()
 {
   
 }
