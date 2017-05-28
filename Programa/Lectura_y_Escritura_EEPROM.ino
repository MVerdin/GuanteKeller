boolean GuardarDatos(int numLetra){
  int dir;
  dir=inicioMemoria+(numLetra*10);

//  byte DedoIndice1;
//  byte DedoIndice2;
//  byte DedoMedio1;
//  byte DedoMedio2;
//  byte DedoAnular1;
//  byte DedoAnular2;
//  byte DedoMenique1;
//  byte DedoMenique2;
//  byte DedoPulgar1;
//  byte DedoPulgar2;

  EEPROM.update(dir,DedoIndice1);
  EEPROM.update(dir+1,DedoIndice2);
  EEPROM.update(dir+2,DedoMedio1);
  EEPROM.update(dir+3,DedoMedio2);
  EEPROM.update(dir+4,DedoAnular1);
  EEPROM.update(dir+5,DedoAnular2);
  EEPROM.update(dir+6,DedoMenique1);
  EEPROM.update(dir+7,DedoMenique2);
  EEPROM.update(dir+8,DedoPulgar1);
  EEPROM.update(dir+9,DedoPulgar2);
  //TODO
  return true;
}

void LeerDatos(int numLetra){
  int dir;
  dir=inicioMemoria+(numLetra*10);

  ObjDedoIndice1=EEPROM.read(dir);
  ObjDedoIndice2=EEPROM.read(dir+1);
  ObjDedoMedio1=EEPROM.read(dir+2);
  ObjDedoMedio2=EEPROM.read(dir+3);
  ObjDedoAnular1=EEPROM.read(dir+4);
  ObjDedoAnular2=EEPROM.read(dir+5);
  ObjDedoMenique1=EEPROM.read(dir+6);
  ObjDedoMenique2=EEPROM.read(dir+7);
  ObjDedoPulgar1=EEPROM.read(dir+8);
  ObjDedoPulgar2=EEPROM.read(dir+9); 

  Serial.println("Posicion deseada");
  Serial.println(ObjDedoIndice1);
  Serial.println(ObjDedoIndice2);
  Serial.println(ObjDedoMedio1);
  Serial.println(ObjDedoMedio2);
  Serial.println(ObjDedoAnular1);
  Serial.println(ObjDedoAnular2);
  Serial.println(ObjDedoMenique1);
  Serial.println(ObjDedoPulgar1);
  Serial.println(ObjDedoPulgar2);
   
}

