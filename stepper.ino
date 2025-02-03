#include <Stepper.h>

// Tentukan jumlah langkah per putaran untuk motor stepper (biasanya 2048 untuk motor stepper biasa) 
#define STEPS_PER_REVOLUTION 2048  

//in1 in3 in2 in4
Stepper stepper1(STEPS_PER_REVOLUTION, 2, 4, 3, 5);


void setup() {
  // Set kecepatan motor dalam RPM (putaran per menit)
  stepper1.setSpeed(10); 
  
}

void loop() {
  stepper1.step(2000); //2000 langkah berlawanan arah jarum jam
  stepper1.step(-1000); //1000 langkah searah jarum jam
}
  