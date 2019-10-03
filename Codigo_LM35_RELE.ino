/* Este programa funcionou adequadamente simulando no Proteus Arduino VSM 8.5
 * Este programa não tem nenhuma restrição quanto ao seu uso.
 * *************************************************************************
 * Este programa segue as regras de software livre 
 * pode ser modificado e alterado por qualquer pessoa
 * Seu uso e aplicação fica por conta e risco de quem use
 * ************************************************************************
 * Sou Carlos kwiek - Eng. Eletronico - visite meu canal no Youtube.
 * https://www.youtube.com/user/kwiekbrasil/videos onde posto sempre projetos.
 * **************************************************************************
 */
#include <LiquidCrystal.h>
int reading = 0;
int sensorPin = A1;
int relay =11;
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
 
void setup() {
  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
  // Print a message to the LCD.
 pinMode(relay,OUTPUT);
}
 
void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  reading = analogRead(sensorPin);
 int celsius = reading/2;
  lcd.setCursor(0, 0);
  lcd.print("Temperature: ");
  // print the number of seconds since reset:
  lcd.setCursor(0,1);
  lcd.print(celsius, DEC);
  lcd.print((char)223);
  lcd.print("C");
  if (celsius >35)
  {
    digitalWrite(11,HIGH);
  }
  else
  
  {digitalWrite(11,LOW);
  }
  delay(500);
  lcd.clear();
} 
