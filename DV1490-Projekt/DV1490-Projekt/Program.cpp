#include "Program.h"
#include<fstream>



Program::Program()
{
}


Program::~Program()
{
}

int Program::run()
{
	while (true)
	{

	}
	return -1;
}

int Program::choice()
{
	int rtn= -1;
	std::cin >> rtn;
	return rtn;
}

void Program::readFromFile(std::string fileName, std::string filePath = "./")
{
	std::string dir;
	std::string source = 0, destination = 0;
	int weight = 0, highest = 0;
	std::ifstream file;
	file.open(userInput);
	file >> dir;
	//Check # of vertecies.
	while (!file.eof())
	{
		file >> source;

		file >> source;
		if (source > highest)
			highest = source;
		file >> destination;
		if (destination > highest)
			highest = destination;
	}
	file.close();
	if (dir == "UNDIRECTED")
	{
		graph = new Graph(UNDIRECTED, highest);
	}
	else
	{
		graph = new Graph(DIRECTED, highest);
	}
	//Build network
	file.open(userInput);
	weight = source = destination = 0;
	file >> dir;
	while (!file.eof())
	{

		file >> weight;

		file >> source;

		file >> destination;

		graph->addArc(source, destination, weight);
		weight = source = destination = 0;
	}
	file.close();


}
