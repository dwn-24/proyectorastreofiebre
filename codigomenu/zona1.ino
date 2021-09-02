void zona1(){
   lugar=1;
            if( ! mfrc522.PICC_IsNewCardPresent())
            return;
            if( ! mfrc522.PICC_ReadCardSerial())
            return;
            
            Serial.println(lugar);
            for(byte i=0; i<mfrc522.uid.size; i++){
              if(mfrc522.uid.uidByte[i]<0x10){
                Serial.print(" 0");
                }
               else{
                Serial.print(" ");
                }
                Serial.print(mfrc522.uid.uidByte[i], HEX);
             }
             Serial.println();
             mfrc522.PICC_HaltA();
             Serial.println(dimeFecha());
             digitalWrite(ledPin, HIGH);
             do{
              TempObj=mlx.readObjectTempC();
              cont++;
              }while(cont<4000);
               double randNumber = randomDouble(37.49, 38.01, 2);
               randomNumber = random(1,4);
               if(randomNumber==2){
                Serial.println(randNumber);
                }else{
                  Serial.println(TempObj);
                  }
                  
              digitalWrite(ledPin, LOW);
              cont=0;
              delay(250);
    
  
  }
