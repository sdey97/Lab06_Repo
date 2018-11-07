/**
*	@author 
*	@date 
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "LinkedListTest.h"

int main(int argc, char** argv)
{
	//Example of declaring a LinkedListOfInts
	LinkedListOfInts testableList;

	//You won't do all the tests in main; that's what your Test class will be for
	//Example:
	//TestSuite myTester;
	//myTester.runTests();
	try
	{
		if (argc < 1)
		{
			std::cout << "Invalid amount of parameters\n";
		}
		else
		{

			LinkedListTest tester;
			tester.runTests();
		}
		return 0;
	}
	catch (...)
	{
	}

	std::cout << "Running...\nAnd we're done.\nGoodbye.\n";
	
	return (0);

}

