
#include <Wire.h>
#include <Adafruit_MLX90614.h> //sensor mlx
#include <SPI.h>//rfid
#include <MFRC522.h>//rfid
#include <Process.h>//fechas
#include <RTClib.h>//tiempo

Process date;
RTC_Millis RTC;

const int RST_PIN = 9; //RFID
const int SS_PIN = 10;//RFID
MFRC522 mfrc522(SS_PIN, RST_PIN);


Adafruit_MLX90614 mlx = Adafruit_MLX90614();

float TempObj; //Temperatura del sujeto
int ledPin=7;
String identificador;
String id;
int cont=0;
int lugar;
long randomNumber;

  
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  SPI.begin();
  mfrc522.PCD_Init();  
  mlx.begin(); 
  RTC.adjust(DateTime(F(__DATE__), F(__TIME__))); 
  menu();
 
}


void loop() {
 

}
