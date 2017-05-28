#include <EEPROM.h>

//Pines analogicos de conexion de potenciometros
const int pinDedoIndice1 = 0;
const int pinDedoIndice2 = 1;
const int pinDedoMedio1 = 2;
const int pinDedoMedio2 = 3;
const int pinDedoAnular1 = 4;
const int pinDedoAnular2 = 5;
//const int pinDedoMenique1 = 6;
//const int pinDedoMenique2 = 7;
const int pinDedoPulgar1 = 8;
//const int pinDedoPulgar2 = 9;

//Datos de configuracion
int tolerancia = 50;

//Direcciones datos
const int a = 1;
const int b = 2;
const int c = 3;
const int ch = 4;
const int d = 5;
const int e = 6;
const int f = 7;
const int g = 8;
const int h = 9;
const int i = 10;
const int j = 11;
const int k = 12;
const int l = 13;
const int m = 14;
const int n = 15;
const int o = 17;
const int p = 18;
const int q = 19;
const int r = 20;
const int s = 21;
const int t = 22;
const int u = 23;
const int v = 24;
const int w = 25;
const int x = 26;
const int y = 27;
const int z = 28;
const int inicioMemoria = 255;

//Declaracion de variables
byte DedoIndice1;
byte DedoIndice2;
byte DedoMedio1;
byte DedoMedio2;
byte DedoAnular1;
byte DedoAnular2;
byte DedoMenique1;
byte DedoMenique2;
byte DedoPulgar1;
byte DedoPulgar2;

byte ObjDedoIndice1;
byte ObjDedoIndice2;
byte ObjDedoMedio1;
byte ObjDedoMedio2;
byte ObjDedoAnular1;
byte ObjDedoAnular2;
byte ObjDedoMenique1;
byte ObjDedoMenique2;
byte ObjDedoPulgar1;
byte ObjDedoPulgar2;

String mensaje;
int letra;

//Modo de calibracion
const boolean calibracion = false;


void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  if (calibracion == true) {

  }
  else {

  }
}

void loop() {
  if (Serial.available() > 0) {
    mensaje = Serial.readStringUntil('\n');

//    Serial.print("Mensaje recibido: ");
//    Serial.println(mensaje);
    
    letra = IdentificarLetra(mensaje);

//    Serial.print("Letra identificada: ");
//    Serial.println(letra);
    
    if (letra != -1) {
      if (calibracion == true) {
        LeerPotenciometros();
        if (GuardarDatos(letra) == true) {
        Serial.print("Letra \"");
        Serial.print(mensaje);
        Serial.println("\" guardada");
        digitalWrite(13, HIGH);
        delay(300);
        digitalWrite(13, LOW);
        delay(300);
        digitalWrite(13, HIGH);
        delay(300);
        digitalWrite(13, LOW);
        delay(300);
        digitalWrite(13, HIGH);
        delay(300);
        digitalWrite(13, LOW);
        delay(300);
        }
      }


      else {
        LeerDatos(letra);
        
        while (CompararDatos() == false){}


        Serial.println("Correcto!!");
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
      }
    }
  }
}
