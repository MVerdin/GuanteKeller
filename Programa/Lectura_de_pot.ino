
byte LeerEntradaAnalogica(int pin){
  byte lectura;
  lectura=(byte)map(analogRead(pin),0,1023,0,255);
  return lectura;
}

void leerPotenciometros(){
  DedoIndice1=LeerEntradaAnalogica(pinDedoIndice1);
  DedoIndice2=LeerEntradaAnalogica(pinDedoIndice2);
  DedoMedio1=LeerEntradaAnalogica(pinDedoMedio1);
  DedoMedio2=LeerEntradaAnalogica(pinDedoMedio2);
  DedoAnular1=LeerEntradaAnalogica(pinDedoAnular1);
  DedoAnular2=LeerEntradaAnalogica(pinDedoAnular2);
  DedoMenique1=LeerEntradaAnalogica(pinDedoMenique1);
  DedoMenique2=LeerEntradaAnalogica(pinDedoMenique2);
  DedoPulgar1=LeerEntradaAnalogica(pinDedoPulgar1);
  DedoPulgar2=LeerEntradaAnalogica(pinDedoPulgar2);
}


