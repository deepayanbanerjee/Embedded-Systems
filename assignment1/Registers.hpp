#ifndef REGISTERS_H
#define REGISTERS_H

using namespace std;

class Registers{
	public:
		Registers();
		unsigned long int arr[16];
		void load_value(int x);
		int read_value(int r);
		int final_result(int m);
};

#endif // REGISTERS_H
