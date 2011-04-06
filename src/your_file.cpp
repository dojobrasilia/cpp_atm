#include "your_file.h"
#include "stdlib.h"

int* withdraw(int ammount, int* size){
    int *bills = (int*)calloc(256, sizeof(int));
    *size = 0;
    
    int index = 0;
    int bill_values[] = {100, 50, 20, 10};
    int bill_values_size = 4;

    int i;
    for (i = 0; i < bill_values_size; i++){
        while(ammount >= bill_values[i]){
            *size += 1;
            bills[index++] = bill_values[i];
            ammount -= bill_values[i];
        }    
    }

	return bills;
}


