#pragma once
#include "Word.hpp"
#include <iostream>
#include <ostream>
#include <string>
#include <vector>


class Randomizer
{
public:
	static Word* randomize_word(const char* file_path);
	static void print_word(Word* word);
};