// StreamOperations.cpp
// [Evan Davis]
// [07/23/17]
// Assignment 7
// [This code performs a series of operations related to files]
//*************************************************************

#include <iostream>
#include <ostream>
#include <istream>
#include <ostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>


bool GetInputFileStream(std::ifstream * fin, std::string filename);
void GetOutputFileStream(std::ofstream * fout, std::string filename);
void SetGetPointer(std::istream & fin, int location);
void SetPutPointer(std::ostream & fout, int location);
void AnalyzeFile(std::istream & fin,
	int & numUsed,
	int & numNew,
	double & newTotalPrice,
	double & newTotalMileage,
	double & usedTotalPrice,
	double & usedTotalMileage);
void PrintLine(std::ostream & sout, std::string s);
void PrintNew(std::istream & fin, std::ostream & fout);
void PrintUsed(std::istream & fin, std::ostream & fout);
void PrintStatistics(std::ostream & fout,
	int numUsed,
	int numNew,
	double newTotalPrice,
	double newTotalMileage,
	double usedTotalPrice,
	double usedTotalMileage);

std::string FormatCarInfo(std::string year,
	std::string make,
	std::string model,
	double price,
	double mileage);

// DO NOT REMOVE THESE COMMENTS -- these comments are actually
// commands to the assessment tool.
//@include(main)
//@addRule(commentAll)
int main()
{
	// You will need to put the provided cars.txt into
	// the working directory of this program
	{
		std::string year;
		std::string make;
		std::string model;
		double price;
		double mileage;
		std::string category;
		std::ifstream fin; // 'f'ile in - fin
		std::string filename = "cars.txt";
		bool isOpen = GetInputFileStream(&fin, filename);
		std::cout << filename << " open: ";
		std::cout << std::boolalpha << isOpen << std::endl;
		while (fin >> year &&
			fin >> make &&
			fin >> model &&
			fin >> price &&
			fin >> mileage &&
			fin >> category)
		{
			std::string s = FormatCarInfo(year, make, model, price, mileage);
			PrintLine(std::cout, s);
		}


	}

	// Now work on tests to make sure the rest of your functions work properly

	std::cout << "Press ENTER to continue";
	std::cin.get();
	return 0;
}
// DO NOT REMOVE THESE COMMENTS -- these comments are actually
// commands to the assessment tool.
//@removeRule(commentAll)

// The function prototypes are provided above
// Copy them here, remove the semicolons at the end
// Add braces, and fill in the functionality

bool GetInputFileStream(std::ifstream * fin, std::string filename)
{
	std::cout << "Opening file " << filename << std::endl;
	fin->open(filename); // if the open failed, return false
	return fin->is_open(); // if the open did not fail, return true

}

void GetOutputFileStream(std::ofstream * fout, std::string filename)
{
	fout->open(filename); // Write given text in mentioned file using fout object
}

void SetGetPointer(std::istream & fin, int location)
{
	fin.seekg(location); // prints the contents of a file starting at the char location indicated by an int
}

void SetPutPointer(std::ostream & fout, int location)
{
	fout.seekp(location); // overwrites information starting at indicated location within a string
}

void AnalyzeFile(std::istream & fin,
	int & numUsed,
	int & numNew,
	double & newTotalPrice,
	double & newTotalMileage,
	double & usedTotalPrice,
	double & usedTotalMileage)
{
	// declare variables
	std::string year;
	std::string make;
	std::string model;
	double price;
	double mileage;
	std::string category;

	// read the entire and compile the aggregate stats

	while (!fin.eof())
	{
		// Read in the next car's information.
		fin >> year >> make >> model >> price >> mileage >> category;
		if (category == "used")
		{
			numUsed++;
			usedTotalPrice += price;
			usedTotalMileage += mileage;
		}
		else
		{
			numNew++;
			newTotalPrice += price;
			newTotalMileage += mileage;
		}
	}
	SetGetPointer(fin, 0);
}

void PrintLine(std::ostream & sout, std::string s)
{
	// creates an object named sout to send string information to s and can be written to file or printed to console
	sout << s << std::endl;
}

void PrintNew(std::istream & fin, std::ostream & fout)
{
	// prints all new cars
	std::string year;
	std::string make;
	std::string model;
	double price;
	double mileage;
	std::string category;
	

	while (!fin.eof())
	{
		fin >> year >> make >> model >> price >> mileage >> category;
		if (category == "new")
		{
			PrintLine(fout, FormatCarInfo(year, make, model, price, mileage));
		}
	}

	SetGetPointer(fin, 0);
}

void PrintUsed(std::istream & fin, std::ostream & fout)
{
	// prints all used cars
	std::string year;
	std::string make;
	std::string model;
	double price;
	double mileage;
	std::string category;

	while (!fin.eof())
	{
		fin >> year >> make >> model >> price >> mileage >> category;
		if (category == "used")
		{
			PrintLine(fout, FormatCarInfo(year, make, model, price, mileage));
		}
	}
	SetGetPointer(fin, 0);
}

void PrintStatistics(std::ostream & fout,
	int numUsed,
	int numNew,
	double newTotalPrice,
	double newTotalMileage,
	double usedTotalPrice,
	double usedTotalMileage)
{
	// Information from given file will be printed out in tabular format using fout object.
	fout << "Category| " << "Number| " << "Total Price| " << "Total Mileage|" << std::endl;
	fout << std::setw(9) << "New|" << std::setw(7) << numNew << "|" << std::setw(12) << newTotalPrice << "|" << std::setw(14) << newTotalMileage << "|" << std::endl;
	fout << std::setw(9) << "Used|" << std::setw(7) << numUsed << "|" << std::setw(12) << usedTotalPrice << "|" << std::setw(14) << usedTotalMileage << "|" << std::endl;
}

std::string FormatCarInfo(std::string year,
	std::string make,
	std::string model,
	double price,
	double mileage)
	
{
	std::stringstream ss; // Here we are creating a stream to send desired text to to be converted
	
	ss << price << " " << mileage ; // this was a near impossible task to decipher, amazed that I figured it out
	std::string newMileage, newPrice = ss.str(); // white spaces must be read into a filestream
	
	

	return year + " " + make + " " + model + " " + newPrice + " " + newMileage; // newPrice and newMileage are the converted versions of price and mileage
}
