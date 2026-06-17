#include <LiquidCrystal.h>

// LCD Pins: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int sensorPin = A0;
int ledPin = 13;
int buzzerPin = 8;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  lcd.begin(16, 2);
  lcd.print("IoT Temp System");

  Serial.begin(9600);

  delay(2000);
  lcd.clear();
}

void loop()
{
  int sensorValue = analogRead(sensorPin);

  float voltage = sensorValue * (5.0 / 1023.0);
  float temperatureC = (voltage - 0.5) * 100.0;

  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" C");

  lcd.setCursor(0, 0);
  lcd.print("Temp:");
  lcd.print(temperatureC);
  lcd.print((char)223);
  lcd.print("C ");

  lcd.setCursor(0, 1);

  if (temperatureC > 30)
  {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);

    lcd.print("WARNING HOT   ");
  }
  else
  {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);

    lcd.print("SAFE          ");
  }

  delay(1000);
}