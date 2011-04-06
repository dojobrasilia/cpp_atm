#ifndef TESTS_H
#define TESTS_H

	#include "your_file.h"
	#include "asserts.h"

	class Tests{
		public:
		
			// ---> add tests prototypes here
			void should_do_withdraw_a_single_bill();
			void should_do_withdraw_two_bills();
			void should_do_withdraw_four_100_bills();
			void should_do_withdraw_three_bills();
			void should_do_withdraw_four_bills();
		
			void run_tests(){
				// ---> register tests to be executed here
		      	ADD_TEST(should_do_withdraw_a_single_bill);
		      	ADD_TEST(should_do_withdraw_two_bills);
		      	ADD_TEST(should_do_withdraw_four_100_bills);
		      	ADD_TEST(should_do_withdraw_three_bills);
		      	ADD_TEST(should_do_withdraw_four_bills);
			}

			//constructor
			Tests(){
			}

			//destructor
			~Tests(){
			}
	};
#endif
