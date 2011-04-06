#include "tests.h"

void Tests::should_do_withdraw_a_single_bill() {

	// ---> write your test here
	int size;
	int *response = withdraw(10, &size);
	ASSERT_EQUALS_INT(size,1);
	ASSERT_EQUALS_INT(response[0],10);

	//asserts examples 
	/*
    ASSERT_TRUE(false);
    ASSERT_EQUALS_INT(1,2);
    ASSERT_EQUALS_FLOAT(3.2,3.22,0.01);
    ASSERT_EQUALS_STRING("oi", "oi1");
	*/
}
