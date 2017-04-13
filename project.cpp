#include <iostream>

using namespace std;

void FunctionOne ()
{
	int Value = 5;
	int* pPtr = &Value;
	cout << "Number is:" << *pPtr << endl;
}

void FunctionTwo()
{
	int SomeInt = 3;
	int &Ref = SomeInt;
	cout << "SomeChar Value: " << SomeInt << endl;
	Ref = 20;
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
