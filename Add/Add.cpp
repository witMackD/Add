// Add.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;

void print(std::vector<double> const &input)
{
	for (int i = 0; i < input.size(); i++) {
		std::cout << input.at(i) << ' ';
	}
	std::cout << endl;
}

vector<double> operator+(const vector<double>& lhs, const vector<double>& rhs) {	// return type is a vector of integers
	vector<double> result;	// Declaring the resulting vector, result
	int resultSize = lhs.size() + rhs.size();

	for (double item : lhs) {
		result.push_back(item);
	}
	for (double item : rhs) {
		result.push_back(item);
	}
	return result;	// returning the vector "result"
}

vector<double>& operator+=(vector<double>& lhs, const vector<double>& rhs) {	
	for (int item : rhs) {
		lhs.push_back(item);
	}
	return lhs;
}

int main()
{
	print(std::vector<double> {6.7, -12.3, 5} +std::vector<double> {0.5, -2.7, 19});
	std::vector<double> vector{ 6.7, -12.3, 5 };
	print((vector += std::vector<double> {0.5, -2.7}) += std::vector<double> {19});
	print(vector);
	return 0;
}


