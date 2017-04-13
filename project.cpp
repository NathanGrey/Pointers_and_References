#include <iostream>

using namespace std;

void FunctionOne () // Takes a pointer and returns an integer
{
	int Value = 5; // Declaration
	int* pPtr = &Value; // Pointer to Value
	cout << "Number is:" << *pPtr << endl; // Outputs integer
}

void FunctionTwo() // Takes a pointer and refe
{
	int SomeInt = 3;
	void* ptr = &SomeInt;

	int &Ref = SomeInt;
	cout << "SomeInt Value: " << SomeInt << endl;
	Ref = 'a';
	cout << "Ref Value: " << Ref << endl;
}

void Swap(int& i, int& j) {
    int t = i;
    i = j;
    j = t;
}

void To1337Speak()
{
	char a[] = "aetilogs";
	char b[] = "437!1095";

	char* aptr = a, *bptr = b;

	cout << "[" << aptr << "," << bptr << "]\n";
	swap(aptr, bptr);
	cout << "[" << aptr << "," << bptr << "]\n";
}

int main()
{

	char theBestChar = 'y';
	char* pPartOne = &theBestChar;

	cout << "theBestChar value:" << theBestChar << endl;
	cout << "pPartOne value:" << pPartOne << endl;
	cout << "pPartOne deferenced:" << *pPartOne << endl;

	int theBestInt = 4;
	int* pPartTwo = &theBestInt;

	cout << "theBestInt value:" << theBestInt << endl;
	cout << "pPartTwo value:" << pPartTwo << endl;
	cout << "pPartTwo deferenced:" << *pPartTwo << endl;

	FunctionOne();
	FunctionTwo();
	To1337Speak();

	int a = 23, b = 47;
    cout << "Before. a: " << a << ", b: " << b << "\n";
    swap(a, b);
    cout << "After.  a: " << a << ", b: " << b << "\n";
    return 0;
}
