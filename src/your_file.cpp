#include "your_file.h"
#include "stdlib.h"

int* withdraw(int ammount, int* size){
    int *bills = (int*)calloc(256, sizeof(int));

    if(ammount >= 100){
    
        *size =  ammount / 100;

        int i;        
        for(i=0; i<*size; i++){
            bills[i] = 100;
        }
        
        ammount -= *size * 100;
        
    }
    
    
    if (ammount >= 50) {
        *size = 1;
        bills[0] = ammount;
    }

    if (ammount == 40 || ammount == 30) {
        *size = 2;
        
        if(ammount % 20 == 0){
            bills[0] = bills[1] = ammount/2;
        }
        else{
            bills[0] = 20;
            bills[1] = 10;
        }
        
    }

    if (ammount == 10) {
        *size = 1;
        bills[0] = ammount;
    }

	return bills;
}
