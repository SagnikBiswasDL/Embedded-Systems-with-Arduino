#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <DHT.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

#define DHTPIN 2      // Pin connected to the DHT sensor
#define DHTTYPE DHT11 // DHT 11 sensor
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  display.display();
  delay(2000);  // Pause for 2 seconds

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,0);

  dht.begin();
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(h) || isnan(t)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  display.clearDisplay();
  display.setCursor(0, 0);
  display.print(F("Humidity: "));
  display.print(h);
  display.println(F("%"));

  display.print(F("Temp: "));
  display.print(t);
  display.println(F("C"));

  display.display();
  delay(2000);
}
