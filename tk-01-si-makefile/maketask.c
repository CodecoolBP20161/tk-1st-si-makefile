#include "functions.h"
#include <stdio.h>

int main() {
	if(test1()==13 && test2()==21 && test3()==42) {
		printf("OK");
		return 0;
	}
	printf("FAIL");
	return 1;
}
