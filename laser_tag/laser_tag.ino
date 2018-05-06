#include <Adafruit_Sensor.h>
#include <Adafruit_Circuit_Playground.h>
#include <Adafruit_CircuitPlayground.h>

#include <Adafruit_TSL2561_U.h>
Adafruit_TSL2561_Unified tsl = Adafruit_TSL2561_Unified(TSL2561_ADDR_FLOAT, 12345);
Adafruit_TSL2561_Unified tsl1 = Adafruit_TSL2561_Unified(TSL2561_ADDR_HIGH, 12345);
Adafruit_TSL2561_Unified tsl2 = Adafruit_TSL2561_Unified(TSL2561_ADDR_LOW, 12345);
int inputVariable2 = 0;
void configureSensor(void)
{
  tsl.enableAutoRange(true);            /* Auto-gain ... switches automatically between 1x and 16x */
    tsl.setIntegrationTime(TSL2561_INTEGRATIONTIME_13MS);      /* fast but low resolution */
}






void setup() {
  sensors_event_t event;
  tsl.getEvent(&event);
  CircuitPlayground.begin();
}
void loop(){
  int counter =0;


  
  sensors_event_t event;
  tsl.getEvent(&event);
   if (event.light)
  {
    Serial.print(event.light); Serial.println(" lux");   
  }
  else{};
 
  tsl.getEvent(&event);
  double light1 = event.light;
   tsl.getEvent(&event);
  double light2 = event.light;
 
  if (light1 < light2)
  {   
      Serial.print(counter + 1);
  }








  
  else{};
  }
  
  
