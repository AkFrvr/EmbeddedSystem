# AVR (ATmega328P) Timer Modes Table

## Timer Overview
| Timer | Bits | Used For | PWM Support |
|-------|------|-----------|-------------|
| Timer0 | 8-bit  | delay(), millis(), micros() | Fast PWM, Phase Correct PWM |
| Timer1 | 16-bit | Servo control, precise timing | Fast PWM, Phase Correct PWM |
| Timer2 | 8-bit  | Tone, timing | Fast PWM, Phase Correct PWM |

---

## Timer Modes (Common)

| Mode No. | Mode Name                  | Description |
|----------|-----------------------------|-------------|
| 0        | Normal Mode                 | Counts from 0 → MAX → overflow interrupt |
| 1        | PWM Phase Correct           | Bidirectional counting for smooth PWM |
| 2        | CTC (Clear Timer on Compare Match) | Auto-resets on compare value; precise frequency |
| 3        | Fast PWM                    | One-direction counting; high-frequency PWM |

---

## Timer0 Modes (8-bit)

| WGM02 | WGM01 | WGM00 | Mode | Description |
|-------|-------|-------|------|-------------|
| 0     | 0     | 0     | 0    | Normal Mode |
| 0     | 0     | 1     | 1    | Phase Correct PWM (TOP = 0xFF) |
| 0     | 1     | 0     | 2    | CTC (TOP = OCR0A) |
| 0     | 1     | 1     | 3    | Fast PWM (TOP = 0xFF) |
| 1     | 1     | 1     | 7    | Fast PWM (TOP = OCR0A, variable frequency) |

---

## Timer1 Modes (16-bit)

| WGM13 | WGM12 | WGM11 | WGM10 | Mode | Type | TOP Value |
|--------|--------|--------|--------|------|--------|-----------|
| 0      | 0      | 0      | 0      | 0    | Normal | 0xFFFF |
| 0      | 1      | 0      | 0      | 4    | CTC    | OCR1A |
| 0      | 0      | 1      | 0      | 2    | PWM Phase Correct | 0x00FF (8-bit) |
| 0      | 0      | 1      | 1      | 3    | PWM Phase Correct | 0x01FF (9-bit) |
| 0      | 1      | 1      | 1      | 7    | Fast PWM | 0x03FF (10-bit) |
| 1      | 1      | 0      | 0      | 12   | CTC | ICR1 |
| 1      | 1      | 1      | 0      | 14   | Fast PWM | ICR1 (custom TOP) |
| 1      | 1      | 1      | 1      | 15   | Fast PWM | OCR1A (custom TOP) |

---

## Timer2 Modes (8-bit, similar to Timer0)

| WGM22 | WGM21 | WGM20 | Mode | Description |
|-------|--------|--------|------|-------------|
| 0     | 0      | 0      | 0    | Normal Mode |
| 0     | 0      | 1      | 1    | Phase Correct PWM (TOP = 0xFF) |
| 0     | 1      | 0      | 2    | CTC (TOP = OCR2A) |
| 0     | 1      | 1      | 3    | Fast PWM (TOP = 0xFF) |
| 1     | 1      | 1      | 7    | Fast PWM (TOP = OCR2A) |

---

# AVR ATmega328P — Timer Prescaler Table

| Timer | Prescaler Setting | CS Bits | Division Factor | Description |
|-------|-----------------|---------|----------------|-------------|
| Timer0 | No clock | 0 0 0 | - | Timer stopped |
| Timer0 | clk/1 | 0 0 1 | 1 | No prescaling |
| Timer0 | clk/8 | 0 1 0 | 8 | Divide system clock by 8 |
| Timer0 | clk/64 | 0 1 1 | 64 | Divide system clock by 64 |
| Timer0 | clk/256 | 1 0 0 | 256 | Divide system clock by 256 |
| Timer0 | clk/1024 | 1 0 1 | 1024 | Divide system clock by 1024 |
| Timer0 | External F, falling edge | 1 1 0 | - | Clock from external pin (falling edge) |
| Timer0 | External F, rising edge | 1 1 1 | - | Clock from external pin (rising edge) |
| Timer1 | No clock | 0 0 0 0 | - | Timer stopped |
| Timer1 | clk/1 | 0 0 0 1 | 1 | No prescaling |
| Timer1 | clk/8 | 0 0 1 0 | 8 | Divide system clock by 8 |
| Timer1 | clk/64 | 0 0 1 1 | 64 | Divide system clock by 64 |
| Timer1 | clk/256 | 0 1 0 0 | 256 | Divide system clock by 256 |
| Timer1 | clk/1024 | 0 1 0 1 | 1024 | Divide system clock by 1024 |
| Timer1 | External F, falling edge | 0 1 1 0 | - | Clock from external pin (falling edge) |
| Timer1 | External F, rising edge | 0 1 1 1 | - | Clock from external pin (rising edge) |
| Timer2 | No clock | 0 0 0 | - | Timer stopped |
| Timer2 | clk/1 | 0 0 1 | 1 | No prescaling |
| Timer2 | clk/8 | 0 1 0 | 8 | Divide system clock by 8 |
| Timer2 | clk/32 | 0 1 1 | 32 | Divide system clock by 32 |
| Timer2 | clk/64 | 1 0 0 | 64 | Divide system clock by 64 |
| Timer2 | clk/128 | 1 0 1 | 128 | Divide system clock by 128 |
| Timer2 | clk/256 | 1 1 0 | 256 | Divide system clock by 256 |
| Timer2 | clk/1024 | 1 1 1 | 1024 | Divide system clock by 1024 |

---

## Quick Summary of PWM Outputs

| Timer | PWM Pins | Mode Used |
|--------|-----------|------------|
| Timer0 | D5 (OC0B), D6 (OC0A) | Fast/Phase PWM |
| Timer1 | D9 (OC1A), D10 (OC1B) | Fast/Phase PWM, Servo |
| Timer2 | D3 (OC2B), D11 (OC2A) | Fast/Phase PWM |

---

