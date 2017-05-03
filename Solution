#include <iostream>

using namespace std;

// Part 1:3
int FunctionOne(void* pPointer, int size)
{
	return 1;
}

// Part 1:4
void FunctionTwo(char &myChar, int* pInt)
{

}

// Part 2
void Swap(int* pInt1, int* pint2)
{
	int temp = *pInt1;
	*pInt1 = *pint2;
	*pint2 = temp;
}

void Swap2(int &pInt1, int &pint2)
{
	int temp = pInt1;
	pInt1 = pint2;
	pint2 = temp;
}

// Part 3
void To1337Speak(char *pString)
{
	char* ptr = pString;
	while (*ptr != '\n')
	{
		switch (*ptr)
		{
			case 'a':
			case 'A':
				*ptr = '4';
				break;
			case 'e':
			case 'E':
				*ptr = '3';
				break;
			case 't':
			case 'T':
				*ptr = '7';
			case 'i':
			case 'I':
				*ptr = '!';
				break;
			case 'l':
			case 'L':
				*ptr = '1';
				break;
			case 'o':
			case 'O':
				*ptr = '0';
				break;
			case 'g':
			case 'G':
				*ptr = '9';
				break;
			case 's':
			case 'S':
				*ptr = '5';
				break;
			default:
				break;
		}
			++ptr;

	}
}

int main()
{
	// Part 1:1
	char* aPartOne = nullptr;
	// Part 1:2
	void* pPartTwo = nullptr;

	int a = 5;
	int b = 10;
	Swap(&a, &b);
	cout << a << " " << b << endl;

    char someString[] = "Pointers and References";
    To1337Speak(someString);
    cout << someString << endl;
    
	system("pause");
	return 0;
}
