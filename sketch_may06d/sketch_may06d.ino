#include <Adafruit_CircuitPlayground.h>
//make variable value
int value;
int lightRecieved;
int turnpoint;

void setup() {
 //initialize serial monitor 
  Serial.begin(9600);
//start the circuit playground  
  CircuitPlayground.begin();
  //turn lights white
    CircuitPlayground.setPixelColor(0, 255,   255,   255);
  CircuitPlayground.setPixelColor(1, 255, 255,   255);
  CircuitPlayground.setPixelColor(2,   255, 255,   255);
  CircuitPlayground.setPixelColor(3,   255, 255, 255);
  CircuitPlayground.setPixelColor(4,   255,   255, 255); 
  CircuitPlayground.setPixelColor(5, 255, 255 , 255);
  CircuitPlayground.setPixelColor(6, 255, 255, 255);
  CircuitPlayground.setPixelColor(7,255, 255, 255);
  CircuitPlayground.setPixelColor(8, 255, 255 , 255);
  CircuitPlayground.setPixelColor(9, 255, 255, 255);
   //delay 1/10 of a sec
   
   delay(1000);

}







void loop() {
//starts the neopixels and clears all the colors  
  CircuitPlayground.clearPixels();  
  CircuitPlayground.setPixelColor(0, 63,   0,   0);
  CircuitPlayground.setPixelColor(1, 63, 0,   0);
 delay(100);
//make the value the light sensor recieves assign it to variable value  
int lightRecieved = CircuitPlayground.lightSensor();
if(lightRecieved > 900 and lightRecieved < 1000){ turnpoint = 1000;}
if(lightRecieved > 800 and lightRecieved < 899){ turnpoint = lightRecieved + 50;}
if(lightRecieved > 700 and lightRecieved < 799){ turnpoint = lightRecieved + 50;}
if(lightRecieved > 600 and lightRecieved < 699){ turnpoint = lightRecieved + 50;}
if(lightRecieved > 500 and lightRecieved < 599){ turnpoint = lightRecieved + 50;}
if(lightRecieved > 400 and lightRecieved < 499){ turnpoint = lightRecieved + 50;}
if(lightRecieved > 300 and lightRecieved < 399){ turnpoint = lightRecieved + 50;}
if(lightRecieved > 200 and lightRecieved < 299){ turnpoint = lightRecieved + 50;}
if(lightRecieved > 100 and lightRecieved < 199){ turnpoint = lightRecieved + 50;} 
if(lightRecieved > 50 and lightRecieved < 99){ turnpoint = lightRecieved + 30;}
if(lightRecieved > 30 and lightRecieved < 49){ turnpoint = lightRecieved + 30;} 
if(lightRecieved > 15 and lightRecieved < 29){ turnpoint = lightRecieved + 30;}
if(lightRecieved > 10 and lightRecieved < 14){ turnpoint = lightRecieved + 30;}
if(lightRecieved >= 0 and lightRecieved < 9){ turnpoint = lightRecieved + 30;}


int var = 0;
 while(var < 1){ 


  value = CircuitPlayground.lightSensor();
  Serial.print("Light Sensor: ");
  Serial.println(value);
  Serial.println(turnpoint);
  if(value >= turnpoint)
  
  
  {
    //turn lights green
  CircuitPlayground.setPixelColor(0, 0,   255,   0);
  CircuitPlayground.setPixelColor(1, 0, 255,   0);
  CircuitPlayground.setPixelColor(2,   0, 255,   0);
  CircuitPlayground.setPixelColor(3,   0, 255, 0);
  CircuitPlayground.setPixelColor(4,   0,   255, 0); 
  CircuitPlayground.setPixelColor(5, 0, 255 , 0);
  CircuitPlayground.setPixelColor(6, 0, 255, 0);
  CircuitPlayground.setPixelColor(7,0, 255, 0);
  CircuitPlayground.setPixelColor(8, 0, 255 , 0);
  CircuitPlayground.setPixelColor(9, 0, 255, 0);
 // CircuitPlayground.playTone(500, 100);
  delay(1000);
  var = 1;
  }
  
  else{
   //turn all pixels on the pixels ring red
  CircuitPlayground.setPixelColor(0, 63,   0,   0);
  CircuitPlayground.setPixelColor(1, 63, 0,   0);

  
}
  //set delay of it being green so theh user knows it worked
 
  }
    
    
    
    }

