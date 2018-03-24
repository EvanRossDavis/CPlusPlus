//*****************
// [Evan Davis]
// [Assignment 2]
//*****************
#include <iostream>

const double PI = 3.14159;

int main()
{
	// rectangle variables have been created for you:
	int rectangleBase = 0;
	int rectangleHeight = 0;
	int rectangleArea = 0;
	int rectanglePerimeter = 0;
	//////////////////////////////////////
	std::cout << "Area of a rectangle:\n"; // Prints title
	std::cout << "====================\n";

	std::cout << "Enter the base: "; // Prompts input from user
	std::cin >> rectangleBase; // Input from user

	std::cout << "Enter the height: "; // Prompts input from user
	std::cin >> rectangleHeight; // Input from user

	rectangleArea = rectangleBase * rectangleHeight; // 2) Calculates the rectangle area --> rectangleArea
	rectanglePerimeter = (rectangleBase * 2) + (rectangleHeight * 2); // 3) Calculates the rectangle perimeter --> rectanglePerimeter
	

	//////////////////////////////////////////////
	// Do not change these lines that print the results
	//////////////////////////////////////////////
	std::cout << "Rectangle Area = " << rectangleArea << "\n";
	std::cout << "Rectangle Perimeter = " << rectanglePerimeter << std::endl;
	std::cout << "====================\n\n";
	//////////////////////////////////////////////


	int circleRadius = 0;
	double circleArea = 0;
	double circleCircumference = 0;
	std::cout << "Area and circumference of a circle:\n";
	std::cout << "====================\n";

	std::cout << "Enter the circle radius: ";
	std::cin >> circleRadius; // 1) code that accepts 1 integer from the user --> circleRadius

	circleArea = PI * (circleRadius * circleRadius); // 2) Calculates the circle area --> circleArea
	circleCircumference = 2 * PI * circleRadius; // 3) Calculates the circle circumference --> circleCircumference
	
	
	


	//////////////////////////////////////////////
	// Do not change these lines that print the results
	//////////////////////////////////////////////
	std::cout << "Circle Area = " << circleArea << "\n";
	std::cout << "Circle Circumference = " << circleCircumference << std::endl;
	std::cout << "====================\n\n";
	//////////////////////////////////////////////

	double areaSum = 0; 
	double areaAverage = 0; 
	double areaProduct = 0; 
	double areaSmallest = 0;
	double areaLargest = 0;

	areaSum = rectangleArea + circleArea; // 1) Calculates the sum of the rectangle and circle areas --> areaSum
	areaAverage = (rectangleArea + circleArea) / 2; // 2) Calculates the average of the areas --> areaAverage
	areaProduct = rectangleArea * circleArea; // 3) Calculates the product of the areas --> areaProduct
	
	if (rectangleArea < circleArea)
	{
		areaSmallest = rectangleArea; // 4) Calculates the smallest area --> areaSmallest
	}

	if (rectangleArea > circleArea)
	{
		areaLargest = rectangleArea; // 5) Calculates the largest area --> areaLargest	
	}

	if (rectangleArea > circleArea)
	{
		areaSmallest = circleArea; // 4) Calculates the smallest area --> areaSmallest
	}

	if (circleArea > rectangleArea)
	{
		areaLargest = circleArea; // 5) Calculates the largest area --> areaLargest	
	}

 
	//////////////////////////////////////////////


	std::cout << "Area Arithmetic:\n"; // Prints "Area Arithmetic:"
	std::cout << "====================\n"; // Prints lines
	std::cout << "Sum = " << areaSum << "\n"; // Prints "Sum =" followed by areaSum
	std::cout << "Average = " << areaAverage << "\n"; // Prints "Average =" followed by areaAverage 
	std::cout << "Product = " << areaProduct << "\n"; // Prints "Product =" follwed by areaProduct
	std::cout << "Smallest = " << areaSmallest << "\n"; //Prints "Smallest =" followed by areaSmallest
	std::cout << "Largest = " << areaLargest << "\n"; // Prints "Largest =" followed by areaLargest
	std::cout << "====================\n\n"; // Prints lines
	std::cout << "Goodbye B)" << std::endl; // ends the line something about buffering

	system("pause"); //Found this online to keep my 
	return 0;        //console from closing immediately
	//////////////////////////////////////////////
}