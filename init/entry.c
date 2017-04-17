#include "int32_test.h"
int kern_entry()
{
		
	regs16_t regs;	
	regs.ax = 0x0013;
	int32(0x10, &regs);
	//unsigned int* buffer = (unsigned int*) 0xA0000;
	int i;
	char *p;	
	for(i = 0xa0000; i < 0xaffff; i++) {
		p = i;
		*p = 15;	
	}   
	return 0;	
}

