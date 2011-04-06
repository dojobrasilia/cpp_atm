#include "your_file.h"
#include "stdlib.h"

int* withdraw(int ammount, int* size){
    int *bills = (int*)calloc(256, sizeof(int));

    if (ammount<=10) {
        *size = 1;
        bills[0] = ammount;
    } else {
        *size = 2;
        bills[0] = bills[1] = ammount/2;
    }

	return bills;
}
