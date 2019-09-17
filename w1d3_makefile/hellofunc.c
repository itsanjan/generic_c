#include "hellomake.h"

void myPrintHelloMake(void) {
  printf("I am at FILE : %s FUNCTION : %s : LINE : %d\n",__FILE__,__func__,__LINE__);
	printf("Hello makefiles!\n");
	return;
}
