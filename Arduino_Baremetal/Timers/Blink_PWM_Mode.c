#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>



int main(void) {

    // 1. Set PD6 (OC0A) as output
    DDRD |= (1 << PD6);

    // 2. Configure Fast PWM on Timer0 (8-bit)
    TCCR0A |= (1 << WGM00) | (1 << WGM01);  // Fast PWM mode
    TCCR0A |= (1 << COM0A1);                // Non-inverting PWM on OC0A (Pin 6)
    TCCR0B |= (1 << CS01);                  // Prescaler = 8 → PWM freq ≈ 7.8 kHz

    // 3. Fade loop
    while (1) {
        // Increase brightness
        for (uint8_t level = 0; level < 255; level++) {
            OCR0A = level;                 // Duty cycle (0-255)
            _delay_ms(5);
        }

        // Decrease brightness
        for (uint8_t level = 255; level > 0; level--) {
            OCR0A = level;
            _delay_ms(5);
        }
    }
}
