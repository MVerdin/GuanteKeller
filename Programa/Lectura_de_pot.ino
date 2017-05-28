
byte LeerEntradaAnalogica(int pin) {
  byte lectura;
  lectura = (byte)map(analogRead(pin), 0, 1023, 0, 255);
  return lectura;
}

void LeerPotenciometros() {
  DedoIndice1 = LeerEntradaAnalogica(pinDedoIndice1);
  DedoIndice2 = LeerEntradaAnalogica(pinDedoIndice2);
  DedoMedio1 = LeerEntradaAnalogica(pinDedoMedio1);
  DedoMedio2 = LeerEntradaAnalogica(pinDedoMedio2);
  DedoAnular1 = LeerEntradaAnalogica(pinDedoAnular1);
  DedoAnular2 = LeerEntradaAnalogica(pinDedoAnular2);
  DedoMenique1 = 0;//LeerEntradaAnalogica(pinDedoMenique1);
  DedoMenique2 = 0;//LeerEntradaAnalogica(pinDedoMenique2);
  DedoPulgar1 = LeerEntradaAnalogica(pinDedoPulgar1);
  DedoPulgar2 = 0;//LeerEntradaAnalogica(pinDedoPulgar2);
  Serial.println("Posicion actual");
  Serial.println(DedoIndice1);
  Serial.println(DedoIndice2);
  Serial.println(DedoMedio1);
  Serial.println(DedoMedio2);
  Serial.println(DedoAnular1);
  Serial.println(DedoAnular2);
  Serial.println(DedoMenique1);
  Serial.println(DedoPulgar1);
  Serial.println(DedoPulgar2);
}

boolean CompararDatos() {
  boolean posicionCorrecta = false;
  LeerPotenciometros();
  if (((ObjDedoIndice1 - tolerancia) < DedoIndice1)&&( DedoIndice1< (ObjDedoIndice1 + tolerancia))) {
    if (((ObjDedoIndice2 - tolerancia) < DedoIndice2)&&(DedoIndice2 < (ObjDedoIndice2 + tolerancia))) {
      if (((ObjDedoMedio1 - tolerancia) < DedoMedio1)&&(DedoMedio1 < (ObjDedoMedio1 + tolerancia))) {
        if (((ObjDedoMedio2 - tolerancia) < DedoMedio2)&&(DedoMedio2 < (ObjDedoMedio2 + tolerancia))) {
          if (((ObjDedoAnular1 - tolerancia) < DedoAnular1)&&(DedoAnular1 < (ObjDedoAnular1 + tolerancia))) {
            if (((ObjDedoAnular2 - tolerancia) < DedoAnular2)&&(DedoAnular2 < (ObjDedoAnular2 + tolerancia))) {
              if (((ObjDedoMenique1 - tolerancia) < DedoMenique1)&&(DedoMenique1 < (ObjDedoMenique1 + tolerancia))) {
                if (((ObjDedoMenique2 - tolerancia) < DedoMenique2)&&(DedoMenique2 < (ObjDedoMenique2 + tolerancia))) {
                  if (((ObjDedoPulgar1 - tolerancia) < DedoPulgar1)&&(DedoPulgar1 < (ObjDedoPulgar1 + tolerancia))) {
                    if (((ObjDedoPulgar2 - tolerancia) < DedoPulgar2)&&(DedoPulgar2 < (ObjDedoPulgar2 + tolerancia))) {
                      posicionCorrecta = true;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return posicionCorrecta;
}

