/*
 * Copyright (c) 2016, CESAR.
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms
 * of the BSD license. See the LICENSE file for details.
 *
 */

/*
 * The default behavior for a Thing is to send data every 30 seconds.
 * To change its behavior on the firmware side, use the function
 * registerDefaultConfig(). See the documentation and lib examples.
 */

#include <KNoTThing.h>

#define LIGHT_BULB_PIN      2
#define LIGHT_BULB_ID       1
#define LIGHT_BULB_NAME     "Light bulb"

KNoTThing thing;


static int light_read(uint8_t *val)
{
    *val = digitalRead(LIGHT_BULB_PIN);
    Serial.print(F("Light Status: "));
    if (*val)
      Serial.println(F("ON"));
    else
      Serial.println(F("OFF"));
    return 0;
}


static int light_write(uint8_t *val)
{
    digitalWrite(LIGHT_BULB_PIN, *val);
    Serial.print(F("Light Status: "));
    if (*val)
      Serial.println(F("ON"));
    else
      Serial.println(F("OFF"));
    return 0;
}

void setup()
{

}

void loop()
{

}
