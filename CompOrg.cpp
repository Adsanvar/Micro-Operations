/*
THIS CODE WAS CREATED BY: ADRIAN SANDOVAL-VARGAS (B.S. C.S)
INTENDED PURPOSE: IMPLEMENT ALSU'S MICRO-OPERATIONS USING JAVA/C++ CODE AS A HOBBY.
THAT BEING SAID, NOT ANALYZED FOR PERFORMANCE. TIME COMPLEXITY IS O(N).
*/

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

//Global for entries
std::vector<int> arr;

void  LogicalShiftLeft(std::vector<int> input)
{
	std::vector<int> tmp;
	tmp.resize(input.size());
	int end = input.size() - 1;
	std::cout << "\n\t";

	for (int i = end; i >= 0; i--)
	{
		//not part of algo.
		if (i != end ) {
			std::cout << " /";
		}
	
		//algo
		if (i == end) {
			tmp[end] = 0;
		}
		else if (i!=end)
		{
			tmp[i] = input[i + 1];
		}
		
	}
	std::cout << "\n\t";
	for (int i = 0; i < tmp.size(); i++) {
		std::cout << tmp[i] <<" ";
	}
	std::cout << "\t =| Left Shift";
}

void LogicalShiftRight(std::vector<int> input) 
{
	std::vector<int> tmp;
	tmp.resize(input.size());
	int begin = 0;
	std::cout << "\n\t";

	for (int i = begin; i < input.size(); i++)
	{
		//not part of algo.
		if (i != begin) {
			std::cout << " \\";
		}

		//algo
		if (i == begin) {
			tmp[begin] = 0;
		}
		else if (i != begin)
		{
			tmp[i] = input[i - 1];
		}

	}

	std::cout << "\n\t";
	for (int i = 0; i < tmp.size(); i++) {
		std::cout << tmp[i] <<" ";
	}
	std::cout << "\t =| Right Shift";
}

void CircularShiftLeft(std::vector<int> input) {
	std::vector<int> tmp;
	tmp.resize(input.size());
	int end = input.size() - 1;
	std::cout << "\n\t";

	for (int i = end; i >= 0; i--)
	{
		//not part of algo.
		if (i != end) {
			std::cout << " /";
		}

		//algo
		if (i == end) {
			tmp[end] = input[0];
		}
		else if (i != end)
		{
			tmp[i] = input[i + 1];
		}

	}
	std::cout << "\n\t";
	for (int i = 0; i < tmp.size(); i++) {
		std::cout << tmp[i] << " ";
	}
	std::cout << "\t =| Circular Left Shift";
}

void CircularShiftRight(std::vector<int> input) {
	std::vector<int> tmp;
	tmp.resize(input.size());
	int begin = 0;
	std::cout << "\n\t";

	for (int i = begin; i < input.size(); i++)
	{
		//not part of algo.
		if (i != begin) {
			std::cout << " \\";
		}

		//algo
		if (i == begin) {
			tmp[begin] = input[input.size()-1];
		}
		else if (i != begin)
		{
			tmp[i] = input[i - 1];
		}

	}

	std::cout << "\n\t";
	for (int i = 0; i < tmp.size(); i++) {
		std::cout << tmp[i] << " ";
	}
	std::cout << "\t =| Circular Right Shift";
}

void  ArithmeticShiftLeft(std::vector<int> input) {
	std::vector<int> tmp;
	tmp.resize(input.size());
	int end = input.size() - 1;
	std::cout << "\n\t";

	for (int i = end; i >= 0; i--)
	{
		//not part of algo.
		if (i != end) {
			std::cout << " /";
		}

		//algo
		if (i == end) {
			tmp[end] = 0;
		}
		else if (i != end)
		{
			tmp[i] = input[i + 1];
		}

	}
	std::cout << "\n\t";
	for (int i = 0; i < tmp.size(); i++) {
		std::cout << tmp[i] << " ";
	}
	std::cout << "\t =| Arithmetic Left Shift";




}

int main()
{
	unsigned input;
    std::cout << "Enter Binary or None Bin to Exit:\n";

	while ((std::cin >> input) && (input == 1 || input == 0)) {
		arr.push_back(input);
	}
	for (int i = 0; i < arr.size() + 20; i++) {
		std::cout << "_";
	}
	std::cout << "\n\t";
	/*

	for (int i = 0; i < arr.size(); i++) {
		std::cout << arr[i] <<" ";
	}
		std::cout << "\t = Initial Array";
	LogicalShiftLeft(arr);
	*/
	/*
	for (int i = 0; i < arr.size(); i++) {
		std::cout << arr[i] << " ";
	}
		std::cout << "\t = Initial Array";
	LogicalShiftRight(arr);
	*/
	/*
	for (int i = 0; i < arr.size(); i++) {
		std::cout << arr[i] << " ";
	}
		std::cout << "\t = Initial Array";
	CircularShiftLeft(arr);
	*/
	/*
	for (int i = 0; i < arr.size(); i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << "\t =| Initial Array";
	CircularShiftRight(arr);

	*/

	for (int i = 0; i < arr.size(); i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << "\t =| Initial Array";
	ArithmeticShiftLeft(arr);
}
