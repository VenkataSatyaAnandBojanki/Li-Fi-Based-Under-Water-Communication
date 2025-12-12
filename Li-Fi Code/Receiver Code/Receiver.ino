#include <LiquidCrystal.h>
#include <stdio.h>
#include <string.h>

LiquidCrystal lcd(6, 7, 5, 4, 3, 2);



int relay_bulb = 9;
int relay_fan  = 8;


char gchr='x';

int sti=0; 
String inputString = "";         // a string to hold incoming data
boolean stringComplete = false;  // whether the string is complete

 
void setup()
{
    Serial.begin(1200);
    serialEvent();

    
//12.  LIFI based under water communication
    lcd.begin(16, 2);
    lcd.clear();
    lcd.print("    LIFI Based");
    lcd.setCursor(0,1);
    lcd.print(" Under Water ");
    delay(2500);
    
    lcd.clear();
    lcd.print("  Communication ");
    delay(2500);
    lcd.clear();
  serialEvent();
}

void loop()
{
 ;  
}

int cntlm=0;

void serialEvent() 
{
   while(Serial.available()) 
        {         
         char inChar = (char)Serial.read();
          cntlm++;
          
          gchr = inChar;
          if(cntlm == 16)
            {
              lcd.setCursor(0,1);
            }
          if(cntlm == 32)
            {
              lcd.clear();  
            }
          
          lcd.write(gchr);
            
        }
}


void converts(unsigned int value)
{
  unsigned int a,b,c,d,e,f,g,h;

      a=value/10000;
      b=value%10000;
      c=b/1000;
      d=b%1000;
      e=d/100;
      f=d%100;
      g=f/10;
      h=f%10;


      a=a|0x30;               
      c=c|0x30;
      e=e|0x30; 
      g=g|0x30;              
      h=h|0x30;
    
     
   Serial.write(a);
   Serial.write(c);
   Serial.write(e); 
   Serial.write(g);
   Serial.write(h);
}

void convertl(unsigned int value)
{
  unsigned int a,b,c,d,e,f,g,h;

      a=value/10000;
      b=value%10000;
      c=b/1000;
      d=b%1000;
      e=d/100;
      f=d%100;
      g=f/10;
      h=f%10;


      a=a|0x30;               
      c=c|0x30;
      e=e|0x30; 
      g=g|0x30;              
      h=h|0x30;
    
     
   lcd.write(a);
   lcd.write(c);
   lcd.write(e); 
   lcd.write(g);
   lcd.write(h);
}
