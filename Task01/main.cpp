#include "util.h"
#include "logic.h"

int main()
{
	int* pointer;
	int size;

	cout << "Input size of array: ";
	cin >> size;

	pointer = new int[size];

	init(pointer, size, -20, 20);

	cout << "Array: " << convert(pointer, size) << endl;

	string msg_min = check_local_min(pointer, size) ? "Yes." : "No.";
	string msg_max = check_local_max(pointer, size) ? "Yes." : "No.";

	cout << "Does local min exist? " << msg_min << endl;
	cout << "Does local max exist? " << msg_max << endl;
	
	delete[] pointer;
	
	return 0;
}