#include <stdio.h>

/*
Program to swap 1st and 2nd bit of hexadecimal value stored in data variable
*/

int main()
{
    unsigned char data = 0xA, bit_1, bit_2, xor_of_bit;

    /* Get 1st bit from data */
    bit_1 = (data >> 1) & 1;

    /* Get 2nd bit from data */
    bit_2 = (data >> 2) & 1;

    /* Get XOR of bit_1 and bit_2 */
    xor_of_bit = bit_1 ^ bit_2;

    printf("After swapping the bits, data value is: %2X", data ^ (xor_of_bit << 1 | xor_of_bit << 2));

    return 0;
}
