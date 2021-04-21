const unsigned long interval=200;  // const unsigned long interval is the used to give delay in program without interrupting the execution of program 
unsigned long previoustime=0; // we  used unsigned long data type to avoid occuring of error while working
int button=0;
void setup() {
  
 pinMode(13, OUTPUT); //Pin D13 in ESP32
 digitalWrite(13, LOW);
}

void loop() {
  unsigned long currenttime=millis(); // millis() : Returns the number of milliseconds passed since the Arduino board began running the current program
 
if (touchRead(T6) < 45 and button == 0){  // T6 is pin D14 on ESP32 it is capable to work as a touch sensor  
  if (currenttime - previoustime >= interval){
   digitalWrite(13, HIGH);
   button=1;
   previoustime=currenttime;
}
}
else if (touchRead(T6) <45 and button == 1) {
  if (currenttime - previoustime >= interval){
   digitalWrite(13, LOW);
   button=0;
   previoustime=currenttime;
}
}
}
