#include <iostream> // Includes the preprocessors
using namespace std; // Declares the namespace

int FunctionOne(void* pPointer, int size) // pPointer type is void and size type of int
{
	return 1; // This returns an integer
}

void FunctionTwo(char &myChar, int* pInt) // References char and points to int
{
}

void Swap(int* pFirstNumber, int* pSecondNumber) // Points to the two integers to swap their values
{
	int TemporaryNumber = *pFirstNumber; // Temporary int to hold value
	*pFirstNumber = *pSecondNumber; // Swaps the first integer with the second
	*pSecondNumber = TemporaryNumber; // Makes the temp variable hold the swap
}

void Swap2(int &pFirstNumber, int &pSecondNumber) // References the points to assign the values
{
	int TemporaryNumber = pFirstNumber;
	pFirstNumber = pSecondNumber;
	pSecondNumber = TemporaryNumber;
}

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
				break;

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
			++ptr; // Make the char increment by one due to the memory address

	}
}

int main() // Main program
{

	char* aPartOne = nullptr; // Points to char
	int* pPartTwo = nullptr; // Points to int

	int a = 7; // Declares the chars as numbers
	int b = 3;

	Swap(&a, &b); // Initiates the Swap function

	cout << a << "\n" << b << endl; // Prints the swapped values

    char someString[] = "Leaning my pointers and references"; // String to be converted
    To1337Speak(someString); // Calls the function to translate the string
    cout << someString << endl << endl; // Prints the results

    int Number = 20; // Declares a variable
    int *pPointerToNumber = &Number; // Makes a pointer to reference it

    cout << "The value of Number is: " << Number << endl;
    cout << "But the address of Number is " << pPointerToNumber << endl;
    cout << "And this will derference it: " << *pPointerToNumber << endl;
    *pPointerToNumber = 10; // Dereferencing to change the previously set value
    cout << "We can also assign a new value via derefence which is: " << Number << endl;

system("pause");
return 0;
}
