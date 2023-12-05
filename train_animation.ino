#include<LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

byte train[8]={
  B00000,
  B01100,
  B01100,
  B11111,
  B11111,
  B11111,
  B11111,
  B01111

  
};

byte bogey[]= {


  B11111,
  B11111,
  B11111,
  B10101,
  B11111,
  B11111,
  B11111,
  B11111
};

byte man[]={

    B00110,
  B00110,
  B00000,
  B01110,
  B00111,
  B00110,
  B01010,
  B11001,

  
};

byte man1[]={

   B00110,
  B00110,
  B00000,
  B00111,
  B00111,
  B00110,
  B00110,
  B00110,

  
};

byte weapon[8]={
   B00000,
  B00000,
  B01000,
  B11111,
  B11111,
  B01000,
  B00000,
  B00000,


  
};

byte wall[8]={

  B00000,B11111,B11111,B11111,B11111,B11111,B11111,B00000,


  
};

byte box[8]={
   B00000,
  B00000,
  B11100,
  B11100,
  B11100,
  B00000,
  B00000,
  B00000,


  
};

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);

lcd.createChar(0,train);
lcd.createChar(1,bogey);
lcd.createChar(2,man);
lcd.createChar(3,man1);
lcd.createChar(4,weapon);
lcd.createChar(5,wall);
lcd.createChar(6,box);
lcd.begin(16,2);



}

void loop() {

 

  for( int i=13;i>=3;i=i-1){

     lcd.setCursor(i,0);
lcd.write(byte(0));
lcd.setCursor(i+1,0);
lcd.write(byte(1));
lcd.setCursor(i+2,0);
lcd.write(byte(1));
if(i==7){
   lcd.setCursor(0,0);
  lcd.write(byte(3)); 
  lcd.setCursor(1,0);
  lcd.write(byte(4)); 


  
}

delay(500);
lcd.clear();
if(i>7){
lcd.write(byte(2));  
    
}  
if(i<7){

lcd.write(byte(3));
lcd.setCursor(1,0);
lcd.write(byte(4));
  
}

if(i<5){
  lcd.setCursor(2,0);
  lcd.write(byte(5));
}
if(i==3){

  lcd.setCursor(3,0);
  lcd.write(byte(6));
  delay(3000);
  lcd.clear();


  
}

    
    
    }

 

  

}
