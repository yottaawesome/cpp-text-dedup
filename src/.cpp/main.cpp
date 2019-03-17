#include "../.h/main.h"
#include "../.h/class.h"
#include <iostream>
#include <cstddef>

int main(int argc, char* arg[])
{
	txtddp::ProgArgs progArgs = txtddp::ParseArgs(argc, arg);

	std::cout << "Src: " << progArgs.SrcPath().data() << std::endl;
	std::cout << "Dst: " << progArgs.DstPath().data() << std::endl;
	std::cout << "Del: " << progArgs.Delim().data() << std::endl;

	return 0;
}