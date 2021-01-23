#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>

// OLED display TWI address
#define OLED_ADDR   0x3C

Adafruit_SSD1306 display(-1);
int and_gate= 11;
int or_gate= 10;
int exor_gate= 9;
int nand_gate= 8;
char output;


void setup() {
  pinMode(and_gate,INPUT);
  pinMode(or_gate,INPUT);
  pinMode(exor_gate,INPUT);
  pinMode(nand_gate,INPUT);
  pinMode(2,OUTPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  
  // initialize and clear display
  display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR);
  display.clearDisplay();
  display.display();


  // display a line of text
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(27,30);
  display.print("Hi,I am IC Doctor!!");
  delay/(1000);
  display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR);
  display.clearDisplay();
  display.display();

  // update display with all of the above graphics
  display.display();
}

void loop() {
  if (digitalRead(and_gate)==HIGH)
  {
   display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(27,30);
  display.print("Testing IC 7408...");
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  delay(500);
  if (not(digitalRead(4)==LOW))
  {
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(27,30);
  display.print(" Gate 1 not functioning");
  break;
  
  }
   if (not(digitalRead(5)==LOW))
  {
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(27,30);
  display.print(" Gate 2 not functioning");
  break;
  
  }
   if (not(digitalRead(6)==LOW))
  {
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(27,30);
  display.print(" Gate 3 not functioning");
  break;
  
  }
   if (not(digitalRead(7)==LOW))
  {
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(27,30);
  display.print(" Gate 4 not functioning");
  break;
  
  }
  display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR);
  display.clearDisplay();
  display.display();



   digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  delay(500);
  if (not(digitalRead(4)==LOW))
  {
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(27,30);
  display.print(" Gate 1 not functioning");
  break;
  
  }
   if (not(digitalRead(5)==LOW))
  {
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(27,30);
  display.print(" Gate 2 not functioning");
  break;
  
  }
   if (not(digitalRead(6)==LOW))
  {
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(27,30);
  display.print(" Gate 3 not functioning");
  break;
  
  }
   if (not(digitalRead(7)==LOW))
  {
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(27,30);
  display.print(" Gate 4 not functioning");
  break;
  
  }
  display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR);
  display.clearDisplay();
  display.display();

   digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  delay(500);
  if (not(digitalRead(4)==LOW))
  {
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(27,30);
  display.print(" Gate 1 not functioning");
  break;
  
  }
   if (not(digitalRead(5)==LOW))
  {
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(27,30);
  display.print(" Gate 2 not functioning");
  break;
  
  }
   if (not(digitalRead(6)==LOW))
  {
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(27,30);
  display.print(" Gate 3 not functioning");
  break;
  
  }
   if (not(digitalRead(7)==LOW))
  {
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(27,30);
  display.print(" Gate 4 not functioning");
  break;
  
  }
  display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR);
  display.clearDisplay();
  display.display();

   digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  delay(500);
  if (not(digitalRead(4)==HIGH))
  {
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(27,30);
  display.print(" Gate 1 not functioning");
  break;
  
  }
   if (not(digitalRead(5)==HIGH))
  {
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(27,30);
  display.print(" Gate 2 not functioning");
  break;
  
  }
   if (not(digitalRead(6)==HIGH))
  {
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(27,30);
  display.print(" Gate 3 not functioning");
  break;
  
  }
   if (not(digitalRead(7)==HIGH))
  {
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(27,30);
  display.print(" Gate 4 not functioning");
  break;
  
  }
  display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR);
  display.clearDisplay();
  display.display();



}

 

}
