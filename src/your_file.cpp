#include "your_file.h"
#include "stdlib.h"

int* withdraw(int ammount, int* size){

    *size = 1;

    int *bills = (int*)calloc(1, sizeof(int));
    bills[0] = ammount;
	return bills;
}
