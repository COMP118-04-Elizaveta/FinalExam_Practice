/** \file FinalExam_Practice.cpp
 * \brief Practice for the final exam.
 * \author me
 * \date 26/who cares
 * \copyright University of Nicosia
 */

#include <iostream>
#include <cassert>
using namespace std;

//function prototypes
double sumOfRange(const double arr[], const int startIndex, const int endIndex, const int maxSize);
double productOfRange(const double arr[], const int startIndex, const int endIndex, const int maxSize);
bool allPositive(const double arr[], const int maxSize);

/**
* Function <code>main</code> presents a menu for the user to choose an operation on an array of doubles.
* @return Returns 0 if the program runs successfully.
*/
int main() {

	int choice;
	const int SIZE = 5;
	double array[SIZE] = { 1.3, 2.2, -3.5, 0.0, 10.2 };
	const int start = 0, end = SIZE;

	do {
		cout << "\n1) Sum of range\n";
		cout << "2) Product of range\n";
		cout << "3) Check if all positive\n";
		cout << "4) Exit\n";
		cout << "enter choice desu: ";
		cin >> choice;

		switch (choice) {
		case 1:
			sumOfRange(array, start, end, SIZE);
			cout << "Sum of range [" << start << ", " << end << "] is: " << sumOfRange(array, start, end, SIZE) << endl;
			break;
		case 2:
			productOfRange(array, start, end, SIZE);
			cout << "Product of range [" << start << ", " << end << "] is: " << productOfRange(array, start, end, SIZE) << endl;
			break;
		case 3:
			allPositive(array, SIZE);
			if (allPositive(array, SIZE)) {

				cout << "shu zi dou shi zheng shu\n";
			} else {
				cout << "shagua, ta men bu shi\n";
			}
			break;
		case 4:
			break; //no code needed
		default:
			cerr << "Invalid Choice, try again xiongdi\n";
			break;
		}
	} while (choice != 4);

	cout << "zai jian\n";

	return 0;
}

/**
 * Function <code>sumOfRange</code> calculates the sum of elements in a specified range of an array.
 * @param arr The array of doubles.
 * @param startIndex The starting index of the range.
 * @param endIndex The ending index of the range.
 * @param maxSize The maximum size of the array.
 * @return Returns the sum of the elements in the specified range.
 */
double sumOfRange(const double arr[], const int startIndex, const int endIndex, const int maxSize) {

	assert(maxSize > 0);
	assert(startIndex < endIndex);
	double sum = 0.0;

	for (int i = startIndex; i < endIndex; i++) {

		sum += arr[i];
	}

	return sum;
}

/**
 * Function <code>productOfRange</code> calculates the product of elements in a specified range of an array.
 * @param arr The array of doubles.
 * @param startIndex The starting index of the range.
 * @param endIndex The ending index of the range.
 * @param maxSize The maximum size of the array.
 * @return Returns the product of the elements in the specified range.
 */
double productOfRange(const double arr[], const int startIndex, const int endIndex, const int maxSize) {

	assert(maxSize > 0);
	assert(startIndex < endIndex);
	double product = 1.0;

	for (int i = startIndex; i < endIndex; i++) {

		product *= arr[i];
	}

	return product;
}

/**
 * Function <code>allPositive</code> checks if all elements in an array are positive.
 * @param arr The array of doubles.
 * @param maxSize The maximum size of the array.
 * @return Returns true if all elements are positive, false otherwise.
 */
bool allPositive(const double arr[], const int maxSize) {

	assert(maxSize > 0);

	for (int i = 0; i < maxSize; i++) {

		if (arr[i] < 0) {

			return false;
		}
	}

	return true;
}