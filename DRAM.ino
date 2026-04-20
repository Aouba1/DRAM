#include <Keypad.h>
#include <LiquidCrystal_I2C.h>
#include "pins.h"

const byte ROWS = 4, COLS = 4;
char keys[ROWS][COLS] = {
    {'1','2','3','A'},
    {'4','5','6','B'},
    {'7','8','9','C'},
    {'*','0','#','D'}
};
byte rowPins[ROWS] = {R1, R2, R3, R4};
byte colPins[COLS] = {C1, C2, C3, C4};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

int start();
void displayText(String line1, String line2);
char getkey();

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  lcd.init();
  lcd.backlight();
  start();
}

void loop()
{}

int start()
{
  displayText("44256 Interface", "    Welcome!    ");
  delay(2000);
  displayText("1:read, 2:write", "input: ");

  char key;
  int input = 0;
  
  while(1)
  {
    do
    {
      key = getkey();
      input = key - '0';
    }
    while (input != 1 && input != 2);

    lcd.setCursor(7, 1);
    lcd.print(input);

    char confirm;
    do
    {
      confirm = getkey();
    }
    while (confirm != 'D' && confirm != '#');

    if (confirm == '#')
    {
      break;
    }
    else if (confirm == 'D')
    {
      lcd.setCursor(7, 1);
      lcd.print(' ');
    }
  }
  if (input == 1)
  {
    //read();
  }
  //else write();
}

void displayText(const char* line1, const char* line2)
{
  lcd.setCursor(0, 0);
  lcd.print("                ");  // Clear line 1.
  lcd.setCursor(0, 0);
  lcd.print(line1);

  lcd.setCursor(0, 1);
  lcd.print("                ");  // Clear line 2.
  lcd.setCursor(0, 1);
  lcd.print(line2);
}

char getkey()
{
  char key = 0;
  while (!key)
  {
    key = keypad.getKey();
  }
  return key;
}