
#include "BasePro1.h"

int8_t AverageThreeBytes(int8_t a, int8_t b, int8_t c)
{
return (int8_t)(((int16_t)a + (int16_t)b + (int16_t)c) / 3);
}



void setUp (void) {} /* Is run before every test, put unit init calls here. */
void tearDown (void) {} /* Is run after every test, put unit clean-up calls here. */