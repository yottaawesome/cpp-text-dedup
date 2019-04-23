# cpp-text-dedup

## Introduction

This is the C++ version of my [C# TextDedup utility](https://github.com/yottaawesome/TextDedup). It is intended to be cross-platform and take advantage of newer C++ features like `std::filesystem`. The primary motivation behind this second C++ utility is the portable release build of the C# .NET Core 2.1 version of TextDedup is a 60+MB monstrosity spread across a large number of files. Software bloat is bad; I like to think I'm doing my part to fight it. :-)

## Status
__In development.__

## Switches
Invoke from the command prompt.

* `/src:` 
    * _Required._ 
    * The file that contains the data to be deduplicated.
* `/dst:`
    * _Optional; defaults to_ _**\<filename\> [deduped].\<extension\>**._ 
	* The destination file to receive the deduplicated text.
* `/del:`
    * _Optional; defaults to ';'._ 
	* The delimiter to use.
    

_Example:_ `tddp /src:test.txt /dst:deduped-test.txt /del:||` 
