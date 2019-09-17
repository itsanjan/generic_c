#include "hellomake.h"
int main() {
	// call a function in another file\

	printf("This is a test application to show\n");
	printf("I am at FILE : %s FUNCTION : %s : LINE : %d\n",__FILE__,__func__,__LINE__);
	myPrintHelloMake();

	return(0);
}
