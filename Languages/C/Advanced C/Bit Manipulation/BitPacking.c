#include <stdio.h>
#include <stdint.h>

uint8_t Flag_Frame = 0;

/* Bit layout:
 * Bit 0     : Reserved
 * Bits 1-4  : Flags (4 bits)
 * Bits 5-7  : Mode  (3 bits)
 */

#define FLAG_VAL_MASK   0x0F   // 4 bits
#define MODE_VAL_MASK   0x07   // 3 bits

#define FLAG_POS        1
#define MODE_POS        5

int main(void)
{
    uint8_t flag_value = 12; // 0–15
    uint8_t mode_value = 5;  // 0–7

    Flag_Frame = 0;

    // frame packing

    Flag_Frame |= (flag_value & FLAG_VAL_MASK) << FLAG_POS;
    Flag_Frame |= (mode_value & MODE_VAL_MASK) << MODE_POS;

    printf("Packed Flag_Frame: %u (0x%02X)\n", Flag_Frame, Flag_Frame);

    // frame unpacking
    uint8_t unpacked_flag_value = (Flag_Frame >> FLAG_POS) & FLAG_VAL_MASK;
    uint8_t unpacked_mode_value = (Flag_Frame >> MODE_POS) & MODE_VAL_MASK;

    printf("Unpacked Flag Value: %u\n", unpacked_flag_value);
    printf("Unpacked Mode Value: %u\n", unpacked_mode_value);

    return 0;
}
