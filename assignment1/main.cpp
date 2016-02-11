#include <stdio.h>
#include <iostream>

#include "ALU.hpp"
#include "Registers.hpp"

using namespace std;

int execute (int op0, int op1, Operation operation);

int main(){

	int op0, op1;
	Operation operation;
	int a, b;

	ALU alu_object;
	Registers reg_object;

	cout << "\n\n -----Addressing starts from 1----- \n\n";
	cout << "Enter the location of the operand registers:" << endl;
	cin >> a >> b ;

	alu_object.load_value(23);
	alu_object.load_value(78);
	alu_object.load_value(96);
        alu_object.load_value(42);
	alu_object.load_value(88);
        alu_object.load_value(61);
        alu_object.load_value(12);
        alu_object.load_value(54);

	op0 = alu_object.read_value(a);
        op1 = alu_object.read_value(b);

	int res = alu_object.execute (op0, op1, ADD);

	cout << alu_object.final_result(res);
	cout << "\n\n";
	cout << "The content of the 1st operand register is: ";
	cout << alu_object.read_value(1) << "\n\n";
	return 0;
}
