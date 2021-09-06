#pragma once
#include "Word.hpp"
#include <iostream>
#include <ostream>
#include <string>
#include <vector>
#include <string>

class Randomizer
{
public:
	static Word* randomize_word(const char* file_path);
};

class Printer
{
public:
	static void print_word(Word* word);
};