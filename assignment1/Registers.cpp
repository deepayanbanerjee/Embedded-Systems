#include <iostream>
#include "Registers.hpp"
#include "ALU.hpp"

using namespace std;

Registers :: Registers(){
	for (int i = 1; i <= 16; i++)
		arr[i] = 0;
}
void Registers :: load_value(int x){
	static int i = 1;
	if (i <= 16){
		arr[i] = x;
	        i++;
	}
}
int Registers :: read_value(int r){
	int read = r;
	int p = arr[read];
	return p;
}

int Registers :: final_result(int m){
	arr[1] = m;
	return arr[1];
}
