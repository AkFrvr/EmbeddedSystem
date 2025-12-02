// Blink LED using timer every 1 ms

#include <avr/io.h>
#include <avr/interrupt.h>

volatile uint16_t ms = 0;

int main(){

DDRB |= (1 <<PB5); // Set PB5 as output (LED pin)

TCCR0A |= (1 << WGM01); // Set Timer0 to CTC mode

TCCR0B |= (1 << CS01 ) | (1 << CS00); // Set prescaler to 64

OCR0A = 249; // Set compare value for 1 ms at 16MHz with 64 prescaler

TIMSK0 |= (1 << OCIE0A ); // Enable Timer0 compare interrupt

sei(); // Enable global interrupts

while(1){
}

}

ISR(TIMER0_COMPA_vect) {
    ms++;
    if (ms >= 1000) { // Toggle LED every 1000 ms
        PORTB ^= (1 << PB5); // Toggle PB5
        ms = 0; // Reset millisecond counter
    }
}