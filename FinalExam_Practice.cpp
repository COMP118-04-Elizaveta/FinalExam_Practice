/** \file FinalExam_Practice.cpp
 * \brief Practice for the final exam.
 * \author Elizaveta Vasilieva
 * \date 26/who cares
 * \copyright University of Nicosia
 */

#include <iostream>
using namespace std;

//function prototypes
double sumOfRange(const double arr[], int startIndex, int endIndex, const int maxSize);
double productOfRange(const double arr[], int startIndex, int endIndex, const int maxSize);
bool allPositive(const double arr[], const int maxSize);

/**
* Function <code>main</code> presents a menu for the user to choose an operation on an array of doubles.
* @return Returns 0 if the program runs successfully.
*/
int main() {

	int choice;
	const int SIZE = 5;
	double array[SIZE] = { 1.3, 2.2, -3.5, 0.0, 10.2 };

	cout << "1) Sum of range\n";
	cout << "2) Product of range\n";
	cout << "3) Check if all positive\n";
	cout << "4) Exit\n";
	cout << "Enter your choice: ";
	cin >> choice;

	return 0;
}