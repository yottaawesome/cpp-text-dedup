#pragma once
#include <string>

namespace txtddp
{ 
	/*
	Represents the arguments passed into program as an object.
	*/
	class ProgArgs
	{
		public:
			ProgArgs(std::string_view src,
				std::string_view dst,
				std::string_view delim,
				std::string_view srcSwitch,
				std::string_view dstSwitch,
				std::string_view delSwitch);
			virtual ~ProgArgs();

			virtual std::string_view SrcPath() const;
			virtual std::string_view DstPath() const;
			virtual std::string_view Delim() const;

			virtual std::string_view SrcSwitch() const;
			virtual std::string_view DstSwitch() const;
			virtual std::string_view DelSwitch() const;

		protected:
			const std::string srcSwitch;
			const std::string dstSwitch;
			const std::string delimSwitch;
			const std::string srcPath;
			const std::string dstPath;
			const std::string delim;
	};

	/*
	Parses the command line arguments into a ProgArgs object
	*/
	ProgArgs ParseArgs(int argc, char* arg[]);

	void ReadData(std::string_view filePath);
	void DedupData(std::string& data);
	void SaveData(std::string_view data, std::string_view filePath);
}
