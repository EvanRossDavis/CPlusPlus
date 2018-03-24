#include <iostream>
#include <iomanip>

// Function Prototypes
// ancillary functions
void SeedRand(int x);

// Array testing
void InitializeArray(int a[], int arraySize);
void PrintArray(int a[], int arraySize);
bool Contains(int a[], int arraySize, int testVal);
void BubbleSort(int a[], int arraySize);
int SumArray(int a[], int arraySize);
int Largest(int a[], int arraySize);
int Smallest(int a[], int arraySize);
double Average(int a[], int arraySize);
void ReverseArray(int a[], int arraySize);

// multi-dimensional arrays
void InitializeTemperatures(double ma[][2], int xSize);
void PrintArray(double ma[][2], int xSize);

// DO NOT REMOVE THESE COMMENTS -- comments that start with @ are actually
// commands to the assessment tool.
//@include(main)
//@addRule(commentAll)
int main()
{
	// This entire main() function will be deleted
	// during the assessment and replaced with
	// another main() function that tests your code.

	// Develop code here to test your functions
	// You may use std::cout in any tests you develop
	// DO NOT put std::cout statements in any of the
	// provided function skeletons unless specificaly asked for

	// Here is a quick array to get you started.
	// This size may change!
	// Make sure your functions work for any array size.
	const int ARRAY_SIZE = 20;
	int a[ARRAY_SIZE];
	// Start here
	// Call your functions and test their output
	// Here is an example
	SeedRand(0); // Only call this ONCE
	InitializeArray(a, ARRAY_SIZE);
	std::cout << "My array=";
	PrintArray(a, ARRAY_SIZE);
	// Did it work?


	std::cout << "Press ENTER";
	std::cin.ignore();
	std::cin.get();
	return 0;
}
// DO NOT REMOVE THESE COMMENTS -- these comments are actually
// commands to the assessment tool.
//@removeRule(commentAll)



// Implement all of the following functions
// DO NOT put any std::cout statements unless directly specified
// DO NOT change their signatures

void SeedRand(int x)
{
	std::cin >> x;
	x = rand() % 100 + 1;// Seed the random number generator with x
}

void InitializeArray(int a[], int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		a[i] = (rand() % 100) + 1;		// Develop an algorithm that inserts random numbers
		std::cout << a[i] << std::endl;
	}									// between 1 and 100 into a[]
										// hint: use rand()
}

void PrintArray(int a[], int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		std::cout << std::setw(4) << a[i];
	}

	// print the array using cout
	// leave 1 space in-between each integer
	// Example: if the array holds { 1, 2, 3 }
	// This function should print: 1 2 3 
	// It is ok to have a dangling space at the end
}

bool Contains(int a[], int arraySize, int testVal)
{
	bool contains = false;

	for (int j = 0; j < arraySize; j++)
		if (a[j] != testVal)
			return contains;
		else
			return j;
		
	// Develop a linear search algorithm that tests
	// whether the array contains testVal
	
}

void BubbleSort(int a[], int arraySize)
{
	for (int next = 1; next < arraySize; next++)
	{
		int insert = a[next];

		int moveItem = next;
	
		while ((moveItem > 0) && (a[moveItem - 1] > insert))
		{

			a[moveItem] = a[moveItem - 1];
			moveItem--;
		}//end while
	
		a[moveItem] = insert;
	}//end for

	for (int i = 0; i < arraySize; i++)
		std::cout << a[i] << std::endl;
	// Develop an algorithm that performs the bubble sort
}

int SumArray(int a[], int arraySize)
{
	int sum = 0;

	for (int i = 0; i < arraySize; i++)
		sum += a[i];
	// Develop an algorithm that sums the entire array
	// and RETURNS the result
	return sum;
}

int Largest(int a[], int arraySize)
{
	int largest = a[0];
	for (int i = 0; i < arraySize; i++)
	{
		if (a[i] > largest)
			largest = a[i];
	}
	// Develop an algorithm to figure out the largest value
	return largest;
}

int Smallest(int a[], int arraySize)
{
	int smallest = a[0];
	for (int i = 0; i < arraySize; i++)
	{
		if (a[i] < smallest)
			smallest = a[i];
	}
	// Develop an algorithm to figure out the smallest value
	return smallest;
}

double Average(int a[], int arraySize)
{
	double average = 0;
	for (int i = 0; i < arraySize; i++)
		average += a[i];
		average = average / arraySize;
	// Develop an algorithm to figure out the average INCLUDING decimals
	// You might find your previous SumArray function useful
	return average;
}

void ReverseArray(int a[], int arraySize)
{
	
	for (int i = 0; i < arraySize; i++)
	{
		int j = i - 1;
		while (i<j)
		{
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	}
	// Develop an algorithm to flip the array backwards
	// You might need some temporary storage
	// I wonder if you could just copy the array into a new one
	// and then copy over the old values 1 by 1 from the back
}

void InitializeTemperatures(double ma[][2], int xSize)
{
	for (int i = 0; i < xSize; i++)
	{
		ma[i][2] = ma[(rand() % 100) + 1][(rand() % 100) + 1]; //fahrenheit
		ma[i][1] = (ma[i][2] - 32) * (5 / 9); //celsius 
	}
	// Develop an algorithm that inserts random numbers
	// between 1 and 100 into a[i][0]
	// hint: use rand()
	// These random numbers represent a temperature in Fahrenheit
	// Then, store the Celsius equivalents into a[i][1]
}

void PrintArray(double ma[][2], int xSize)
{

	for (int i = 0; i < xSize; i++)
	{
		for (int j = 0; j < xSize; j++)
			std::cout << ma[i][j] << ' ';
		
		std::cout << std::endl;
	}
	// print the multi-dimensional array using cout
	// Each x-y pair should be printed like so: [x,y]
	// All pairs should be printed on one line with no spaces
	// Example: [x0,y0][x1,y1][x2,y2] ...
}