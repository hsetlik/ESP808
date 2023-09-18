#include <TaskScheduler.h>
#include "Peripherals.h"
/*
tasks needed:
- check inputs, run appropriate callbacks
- update the trigger outputs if needed
- update the LEDs
- update the displays
*/

Peripherals* p = nullptr;
void setup() 
{
  p = new Peripherals();
}

void loop() 
{
  // put your main code here, to run repeatedly:
}
