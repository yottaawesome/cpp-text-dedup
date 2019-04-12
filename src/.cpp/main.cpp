#include "../.h/main.h"
#include "../.h/class.h"
#include <iostream>
#include <cstddef>
#include <filesystem>

using std::filesystem::path;
using std::filesystem::directory_entry;

int main(int argc, char* arg[])
{
	txtddp::ProgArgs progArgs = txtddp::ParseArgs(argc, arg);

	std::cout << "Src: " << progArgs.SrcPath().data() << std::endl;
	std::cout << "Dst: " << progArgs.DstPath().data() << std::endl;
	std::cout << "Del: " << progArgs.Delim().data() << std::endl;
	
	try
	{
		std::error_code error;
		path src(progArgs.SrcPath());
		directory_entry dirEntry(src, error);
		if(dirEntry.exists())
			std::cout << "Located" << std::endl;
		else
			std::cout << "Not located " << error.message() << std::endl;
	}
	catch (std::filesystem::filesystem_error err)
	{
		std::cout << err.what() << std::endl;
	}
	
	return 0;
}