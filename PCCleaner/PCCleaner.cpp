// PCCleaner.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "iostream"
#include "windows.h"
#include <string>

void init() {
	system("color 83");
	std::cout << " ÛÛÛÛÛÛÛÛÛÛÛ    ÛÛÛÛÛÛÛÛÛ    ÛÛÛÛÛÛÛÛÛ  ÛÛÛÛ                                                  " << std::endl
		<< "°°ÛÛÛ°°°°°ÛÛÛ  ÛÛÛ°°°°°ÛÛÛ  ÛÛÛ°°°°°ÛÛÛ°°ÛÛÛ                                                  " << std::endl
		<< " °ÛÛÛ    °ÛÛÛ ÛÛÛ     °°°  ÛÛÛ     °°°  °ÛÛÛ   ÛÛÛÛÛÛ   ÛÛÛÛÛÛ   ÛÛÛÛÛÛÛÛ    ÛÛÛÛÛÛ  ÛÛÛÛÛÛÛÛ " << std::endl
		<< " °ÛÛÛÛÛÛÛÛÛÛ °ÛÛÛ         °ÛÛÛ          °ÛÛÛ  ÛÛÛ°°ÛÛÛ °°°°°ÛÛÛ °°ÛÛÛ°°ÛÛÛ  ÛÛÛ°°ÛÛÛ°°ÛÛÛ°°ÛÛÛ" << std::endl
		<< " °ÛÛÛ°°°°°°  °ÛÛÛ         °ÛÛÛ          °ÛÛÛ °ÛÛÛÛÛÛÛ   ÛÛÛÛÛÛÛ  °ÛÛÛ °ÛÛÛ °ÛÛÛÛÛÛÛ  °ÛÛÛ °°° " << std::endl
		<< " °ÛÛÛ        °°ÛÛÛ     ÛÛÛ°°ÛÛÛ     ÛÛÛ °ÛÛÛ °ÛÛÛ°°°   ÛÛÛ°°ÛÛÛ  °ÛÛÛ °ÛÛÛ °ÛÛÛ°°°   °ÛÛÛ     " << std::endl
		<< " ÛÛÛÛÛ        °°ÛÛÛÛÛÛÛÛÛ  °°ÛÛÛÛÛÛÛÛÛ  ÛÛÛÛÛ°°ÛÛÛÛÛÛ °°ÛÛÛÛÛÛÛÛ ÛÛÛÛ ÛÛÛÛÛ°°ÛÛÛÛÛÛ  ÛÛÛÛÛ    " << std::endl
		<< "°°°°°          °°°°°°°°°    °°°°°°°°°  °°°°°  °°°°°°   °°°°°°°° °°°° °°°°°  °°°°°°  °°°°°     " << std::endl
		<< "A Windows Space Saver by Luke Argosino" << std::endl;
	Sleep(5000);
	for (int i = 0; i < 25; i++) {
		std::cout << std::endl;
	}
	std::cout << "[1] Cleans Recycle Bin" << std::endl
		<< "[2] Cleans Temp Folder" << std::endl
		<< "[3] Cleans Recent Files Folder" << std::endl ///Microsoft/Windows/Recent
		<< "[4] Cleans Prefetch Folder" << std::endl
		<< "[5] Cleans Chrome Cache" << std::endl
		<< "[6] Cleans Discord Cache" << std::endl
		<< "Enter a combination of numbers or a range to complete a cleaning" << std::endl
		<< "Examples: \"5\" \\ \"1,3,4\" \\ \"1-5\"" << std::endl;
	for (int j = 0; j < 21; j++) {
		std::cout << std::endl;
	}
}

std::string getArgs() {
	std::string args;
	std::cin >> args;
	return args;
}

void processArgs(std::string args) {
	//Process args in array
}

int main() {
	init();
	std::string args = getArgs();
	processArgs(args);
	return 0;
}