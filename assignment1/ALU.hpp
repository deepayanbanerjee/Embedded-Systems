#ifndef ALU_HPP
#define ALU_HPP

#include <iostream>

using namespace std;

typedef enum {ADD, SUB, MUL, DIV, CMP} Operation;

class ALU{
	public:
		int execute(int op0, int op1, Operation operation);
	};

#endif
