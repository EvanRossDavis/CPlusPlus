#include <iostream>
#include <cstdlib>


// Function Prototypes=========================================================
// Do NOT change the signature of these function prototypes.
// If you do, your code will not compile with my altered main() function
// I suggest that you copy the prototypes below and then fill them in.
// ----------------------------------------------------------------------------
// Read in a line of text INCLUDING SPACES into a string.
// You may assume that the input will NOT exceed the maxLength available.
// Keep in mind that cin stops reading at a whitespace. See page 318.
void ReadString(char * c, int maxLength);

// Get the length of the string and store it in length
// Hint: How does C++ terminate a string? Look for that character!
void GetStringLength(char * c, int * length);

// PrintString - Just print the string in forward order using cout
void PrintString(char * const c);

// PrintStringBackwards - Print the string in reverse order using cout
void PrintStringBackwards(char * const c);

// Search the string for the test character. Return -1 if not found
int FindIndexOfCharacter(char * c, char testVal);

// Return a pointer to the character at the index given
char * GetValueAtIndex(char * const c, int index);

// Return the ascii integer value of the character at requested index
int GetIntegerValueOfIndex(char * c, int index);

// Print the hexadecimal value of the character at the requested index
void PrintHexValueAtIndex(char * c, int index);

// Make the entire string uppercase
void MakeUpperCase(char * c);

// Make the entire string lowercase
void MakeLowerCase(char * c);

// ============================================================================

//[BEGIN MAIN] -- Don't delete this line
int main()
{
	// Use these variables to test.
	// SIZE could change so make sure your code works with different sizes.
	const int SIZE = 80;
	char ca[SIZE];
	char *pc = ca;
	char * cptr;
	int lengthChecks = 0;

	// Your code below
	// =========================
	
	ReadString(pc, SIZE);
	std::cout << "Printing====\n";
	PrintString(pc); // see below
	std::cout << "\n";
	std::cout << "Done========" << std::endl;
	// =========================
	// Your code above
	
	std::cout << "Press ENTER";
	std::cin.get();
	return 0;
}
//[END MAIN] -- Don't delete this line

void ReadString(char * c, int maxLength)
{
	std::cout << "Enter a string less than " << maxLength << " characters." << std::endl;


	std::cin.getline(c, maxLength);


}

void GetStringLength(char * c, int * length)
{
	int i = 0;

	while (c[i] != '\0') {
		i++;
	}

	*length = i;
}


// PrintString - Just print the string in forward order using cout
void PrintString(char * const c) {
	std::cout << c << "\n";
}

// PrintStringBackwards - Print the string in reverse order using cout
void PrintStringBackwards(char * const c) {
	int leng = 0;

	GetStringLength(c, &leng);

	leng = leng - 1;

	while (leng >= 0) {
		std::cout << c[leng];
		leng--;
	}
	std::cout << "\n";
}

// Search the string for the test character. Return -1 if not found
int FindIndexOfCharacter(char * c, char testVal) {
	int flag = -1;
	for (int i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == testVal) {
			flag = i;
			break;
		}
	}
	if (flag == -1) return -1;
	else return flag;
}

// Return a pointer to the character at the index given
char * GetValueAtIndex(char * const c, int index) {

	int leng = 0;

	GetStringLength(c, &leng);

	if (index >= leng || index<0)
		return '\0';
	else
		return &(c[index]);
}

// Return the ascii integer value of the character at requested index
int GetIntegerValueOfIndex(char * c, int index) {
	return (int)c[index]; // type_cast to an int
}

// Print the hexadecimal value of the character at the requested index
void PrintHexValueAtIndex(char * c, int index) {
	std::cout << std::hex << c[index] << "\n";
}

// Make the entire string uppercase
void MakeUpperCase(char * c) {
	int i = 0;

	while (c[i] != '\0') {
		if (isalpha(c[i]))
			c[i] = toupper(c[i]);
		i++;
	}
}

// Make the entire string lowercase
void MakeLowerCase(char * c) {
	int i = 0;

	while (c[i] != '\0') {
		if (isalpha(c[i]))
			c[i] = tolower(c[i]);
		i++;
	}
}