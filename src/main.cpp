#include <iostream>
#include "GameFunctions.hpp"
#include "Word.hpp"

Word* new_word = nullptr;


int main(int argc, char const *argv[])
{
	new_word = Randomizer::randomize_word("words/words.list");
}