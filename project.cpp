#include <iostream>

using namespace std;

void main()
[
char theBestChar;
char* pPartOne = &theBestChar;

cout << "theBestChar value:" << theBestChar << endl;
cout << "pPartOne value:" << pPartOne << endl;
cout << "pPartOne deferenced:" << *pPartOne << endl;

int theBestInt;
int* pPartTwo = &theBestInt;

cout << "theBestInt value:" << theBestInt << endl;
cout << "pPartTwo value:" << pPartTwo << endl;
cout << "pPartTwo deferenced:" << *pPartTwo << endl;

]

int FunctionOne ()
[
	int Value = 5
	int *pPtr = &Value;
	cout << *pPtr;
]

void FunctionTwo()
[
	char Char = 'a'
	int *pPtr = &Char;
	cout << *pPtr;

]

void Swap()
{


}

int To1337Speak()
[



]
/*[
	int theBestArray[5] = {2, 4, 9, 900, -1};
	int* pPointer = theBestArray;

	for (int i = 0; i < 4; ++i)
	{
		cout << *(theBestArray + i) << endl;
	}
	system("pause");


	char someString[] = "The Elements will destroy you!";
	for (int i = 0; i < strlen(someString); ++i)
		[
		cout << someString[i] << endl;
		]
]*/
