#include "your_file.h"
#include "stdlib.h"

int* withdraw(int ammount, int* size){
    int *bills = (int*)calloc(256, sizeof(int));

    

    if (ammount == 10 || ammount == 50) {
        *size = 1;
        bills[0] = ammount;
    }else {
        *size = 2;
        
        if(ammount % 20 == 0){
            bills[0] = bills[1] = ammount/2;
        }
        else{
            bills[0] = 20;
            bills[1] = 10;
        }
        
    }

	return bills;
}
