#include <iostream>
#include "GameFunctions.hpp"
#include "Word.hpp"




int main(int argc, char const *argv[])
{

Word* word = new Word("welp");

	Randomizer::print_word(word);
}