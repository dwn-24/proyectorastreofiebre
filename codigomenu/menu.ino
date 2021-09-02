void menu(){
 // Serial.println("Menu");
  char caracter;
  while(true){
    caracter=leerCaracter();
    if(caracter != 0)
    {
      switch(caracter){
    case '1':
           runZona1();
    break;
    case '2':
           runZona2();
    break;
    case '3':
          runZona3();
    break;
    case 'r':
    return;
    break;
    
    
    }
      
    }
  }
  
  return;
  }



  String dimeFecha(){
  
  char fecha[20];
  DateTime now = RTC.now(); //Obtener fecha y hora actual.

  int dia = now.day();
  int mes = now.month();
  int anio = now.year();

  sprintf( fecha, "%.2d/%.2d/%.4d", dia, mes, anio);
  return String( fecha );
}

char leerCaracter()
{
  if(Serial.available()>0)
  {
    char caracter=Serial.read();
    return caracter;
  }else
  {
    return 0;
    }
}

double randomDouble(double min, double max, int numCasas){
  long _min = min * pow(30, numCasas) + 0.1;
  long _max = max * pow(30, numCasas) + 0.1;
  
  return (double) random(_min, _max) / pow(30, numCasas) ; 
}



void runZona1(){
  while(true)
  {
    zona1();
    if(leerCaracter()=='r')
    return;
   }
}

void runZona2(){
  while(true)
  {
    zona2();
    if(leerCaracter()=='r')
    return;
   }
 }

 void runZona3(){
  while(true)
  {
    zona3();
    if(leerCaracter()=='r')
    return;
   }
 }
