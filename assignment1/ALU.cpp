#include "Registers.hpp"
#include "ALU.hpp"
#include <stdio.h>
#include <iostream>

using namespace std;

ALU :: ALU(){
	for (int i = 1; i <= 16; i++)
	arr[i] = 0;
}

int ALU :: execute (int op0, int op1, Operation operation){

	switch (operation){
		case 0:
			cout << "The sum is: ";
			return (op0 + op1);
			break;
		case 1:
			cout << "The difference is: ";
			return (op0 - op1);
			break;
		case 2:
			cout << "The product is: ";
		         return (op0 * op1);
			break;
		case 3:
			cout << "The result of the division is: ";
			return (op0 / op1);
			break;
		case 4:
			cout << "The greater of the two is: ";
			return (op0 > op1 ? op0 : op1);
			break;
		default:
			cout << "Improper choice" << endl;
	}
}
