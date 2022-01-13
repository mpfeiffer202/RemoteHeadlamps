#ifndef Utilities_h
#define Utilities_h


String fileName = " ------------------ Headlamp ------------------";
String author = " Matt Pfeiffer   Jan, 2022 ";
const int baud1 = 9600;
const int baud2 = 19200;
const int baud3 = 115200;

int timer1;

void utilitiesSetup()
{
  Serial.begin(baud1); delay(10);
  Serial.println(" "); Serial.println(" ");
  Serial.println(fileName);
  Serial.println(author);
  Serial.println(" ");
}


#endif
