#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    // Set PB5 as output (Pin 13 LED)
    DDRB |= (1 << DDB5);

    while (1)
    {
        PORTB ^= (1 << PORTB5); // Toggle LED
        _delay_ms(500);
    }
}
