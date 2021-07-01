#include <iostream>

using namespace std;
void copyMas(int* source, int* dest, int size)
{
	for (int n = 0; n < size; n++) dest[n] = source[n];
}


bool compareMas(int* source, int* dest, int size) 
{  
	for (int n = 0; n < size; n++) {
		if (source[n] != dest[n]) return false;
		else return true;
	}
}



void test(int* source, int* dest, int size) 
{ 
	cout << "\ntest:\n\n";
	if (compareMas(source, dest, size)) cout << "sucsess\n\n";
	else cout << "fail\n\n";
}

int main()
{
	const int size = 10;

	int source[size];
	int dest[size];

	for (int x = 0; x < size; x++) source[x] = rand() % 100;

	copyMas(source, dest, size);

	test(source, dest, size);

}