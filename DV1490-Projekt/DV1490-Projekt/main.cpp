
#include"Program.h"


int main()
{
	bool running = true;
	int input = -1;
	Program prg;
	while (running)
	{
		std::cout << "Please press 1 to start building graphs, press 0 to exit:\n";
		std::cin >> input;
		std::cin.ignore();
		if (input = 1)
		{
			input = prg.run();
		}
		if (input == 0)
			running = false;
	}
	return 0;
}