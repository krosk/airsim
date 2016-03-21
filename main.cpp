#include <iostream>
#include "Engine.h"

int main()
{
    std::cout << "start\n";
	Engine engine;

	for (int i = 0; i < 16; i++)
	{
		std::cout << "cycle " << i << "\n";
		engine.update(i);
	}
	
	std::cout << "finished\n";

    return 0;
}