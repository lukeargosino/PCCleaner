// PCCleaner.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <string>

void processArgs(std::string args) {
	//Process args in array
}

int main()
{
	std::cout << "[1] Cleans Recycle Bin" << std::endl;
	std::cout << "[2] Cleans Temp Folder" << std::endl;
	std::cout << "[3] Cleans Recent Files Folder" << std::endl; ///Microsoft/Windows/Recent
	std::cout << "[4] Cleans Prefetch Folder" << std::endl;
	std::cout << "[5] Cleans Chrome Cache" << std::endl;
	std::cout << "[6] Cleans Discord Cache" << std::endl;
	std::string args;
	std::cin >> args;
	processArgs(args);
	return 0;
}