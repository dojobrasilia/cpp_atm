#include "tests.h"

void Tests::should_do_withdraw_a_single_bill() {

	// ---> write your test here
	int size;
	int *response ;
	
	response = withdraw(10, &size);
	ASSERT_EQUALS_INT(size,1);
	ASSERT_EQUALS_INT(response[0],10);

    response = withdraw(50, &size);
	ASSERT_EQUALS_INT(size,1);
	ASSERT_EQUALS_INT(response[0],50);

}

void Tests::should_do_withdraw_two_bills() {

	int size;
	int *response;
	
	response = withdraw(40, &size);
	ASSERT_EQUALS_INT(size,2);
	ASSERT_EQUALS_INT(response[0],20);
	ASSERT_EQUALS_INT(response[1],20);
    
    response = withdraw(30, &size);
	ASSERT_EQUALS_INT(size,2);
	ASSERT_EQUALS_INT(response[0],20);
	ASSERT_EQUALS_INT(response[1],10);

    response = withdraw(150, &size);
	ASSERT_EQUALS_INT(size,2);
	ASSERT_EQUALS_INT(response[0],100);
	ASSERT_EQUALS_INT(response[1],50);

}

void Tests::should_do_withdraw_three_bills() {

	int size;
	int *response;
	
	response = withdraw(170, &size);
	ASSERT_EQUALS_INT(size,3);
	ASSERT_EQUALS_INT(response[0],100);
	ASSERT_EQUALS_INT(response[1],50);
	ASSERT_EQUALS_INT(response[2],20);

}

void Tests::should_do_withdraw_four_bills() {

	int size;
	int *response;
	
	response = withdraw(190, &size);
	ASSERT_EQUALS_INT(size,4);
	ASSERT_EQUALS_INT(response[0],100);
	ASSERT_EQUALS_INT(response[1],50);
	ASSERT_EQUALS_INT(response[2],20);
	ASSERT_EQUALS_INT(response[3],20);

}


void Tests::should_do_withdraw_four_100_bills() {

	int size;
	int *response;
	
	response = withdraw(400, &size);
	ASSERT_EQUALS_INT(size,4);
	ASSERT_EQUALS_INT(response[0],100);
	ASSERT_EQUALS_INT(response[1],100);
	ASSERT_EQUALS_INT(response[2],100);
	ASSERT_EQUALS_INT(response[3],100);
}

