#pragma once
#include<string>
#include<iostream>
class Program
{
private:
public:
	Program();
	virtual ~Program();
	int run();
	int choice();
	void readFromFile(std::string, std::string);
	std::string getConsoleText(int);


};

