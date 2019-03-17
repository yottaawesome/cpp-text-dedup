#include "../.h/class.h"
#include <iostream>

namespace txtddp
{
	ProgArgs::ProgArgs(
		std::string_view src, 
		std::string_view dst, 
		std::string_view delim, 
		std::string_view srcSwitch,
		std::string_view dstSwitch,
		std::string_view delSwitch)
			: srcPath(src)
			, dstPath(dst)
			, delim(delim)
			, srcSwitch(srcSwitch)
			, dstSwitch(dstSwitch)
			, delimSwitch(delSwitch)
	{ }

	ProgArgs::~ProgArgs() { }

	std::string_view ProgArgs::SrcPath() const
	{
		return srcPath;
	}

	std::string_view ProgArgs::DstPath() const
	{
		return dstPath;
	}

	std::string_view ProgArgs::Delim() const
	{
		return delim;
	}

	std::string_view ProgArgs::SrcSwitch() const
	{
		return srcSwitch;
	}

	std::string_view ProgArgs::DstSwitch() const
	{
		return dstSwitch;
	}

	std::string_view ProgArgs::DelSwitch() const
	{
		return delimSwitch;
	}

	ProgArgs ParseArgs(int argc, char* arg[])
	{
		std::string srcPath = "";
		std::string dstPath = "";
		std::string delim = ";";
		const std::string srcSwitch = "/src:";
		const std::string dstSwitch = "/dst:";
		const std::string delSwitch = "/del:";

		for (int i = 0; i < argc; i++)
		{
			std::string s = arg[i];
			if (size_t index = s.find(srcSwitch); index != std::string::npos)
				srcPath = s.substr(index + srcSwitch.length());
			else if (size_t index = s.find(dstSwitch); index != std::string::npos)
				dstPath = s.substr(index + dstSwitch.length());
			else if (size_t index = s.find(delSwitch); index != std::string::npos)
				delim = s.substr(index + delSwitch.length());
		}

		return ProgArgs(srcPath, dstPath, delim, srcSwitch, dstSwitch, delSwitch);
	}

	void ReadData(std::string_view filePath)
	{

	}
	
	void DedupData(std::string& data)
	{

	}
	
	void SaveData(std::string_view data, std::string_view filePath)
	{

	}
}
