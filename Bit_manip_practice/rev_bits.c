#include <stdio.h>

unsigned int revBits(unsigned int num);

int main(){   
	unsigned int num = 0x4;
	printf("\n%u", revBits(num));
   return 0;
}


unsigned int revBits(unsigned int data){   
  unsigned char totalBits = sizeof(data) * 8;
    unsigned int revNum = 0, i, temp;

    for (i = 0; i < totalBits; i++) {
        temp = (data & (1 << i));
        if (temp)
            revNum |= (1 << ((totalBits - 1) - i));
    }

    return revNum;
}
