#include <SoftwareSerial.h>
#include <TinyWireM.h>
SoftwareSerial mySerial(4, 1); // RX, TX
#include "Nunchuk.h"


void setup() {
  mySerial.begin(9600);
  TinyWireM.begin();
  nunchuk_init();
}


void loop() {
  if (nunchuk_read()) {
    nunchuk_print();
  }
}
