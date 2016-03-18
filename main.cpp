#include <iostream>
#include "Engine.h"

int main()
{
    std::cout << "hello\n";
	Engine engine;

	for (int i = 0; i < 10; i++)
	{
		std::cout << "cycle " << i << "\n";
		engine.update(i);
	}

    return 0;
}