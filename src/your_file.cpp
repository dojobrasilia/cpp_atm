#include "your_file.h"
#include "stdlib.h"

int* withdraw(int ammount, int* size){
    int *bills = (int*)calloc(256, sizeof(int));
    *size = 0;
    
    int index = 0;

    if(ammount >= 100){
    
        *size =  ammount / 100;

        int i;        
        for(i=0; i<*size; i++){
            bills[index++] = 100;
        }
        
        ammount -= *size * 100;
    }
    
    if (ammount >= 50) {
        *size += 1;
        bills[index++] = 50;
        ammount -= 50;
    }
    
    while (ammount >= 20) {
        *size += 1;
        bills[index++] = 20;
        ammount -= 20;
    }
    
    if (ammount >= 10) {
        *size += 1;
        bills[index++] = 10;
        ammount -= 10;
    }

	return bills;
}
