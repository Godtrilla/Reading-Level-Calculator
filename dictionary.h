//Del'Juan Jackson
//PF2
//Project 3

#ifndef UNTITLED19_DICTIONARY_H
#define UNTITLED19_DICTIONARY_H


#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

class dictionary {
public:

    //Constructor
    dictionary();

    //Read words from Rank text file into a Vector
    void read_rank();

    //Read words from file and compare to vector that contains
    //Rankings, if found, the difficutly variable is incremented
    //If not, found within the rank vector, 1001 is added to difficutly total
    void read_file(string file);

    //Print Method
    void print();

    //Method to remove punctuation from word
    string stripper(string word);

    //Retrives value for difficutly variable.
    float get_difficulty();

//Word Text Evaluator
    float stuff();



private:
    //Difficutly variables
    float difficulty = 0;
    float difficulty_count = 0;

    //Vector to hold words and their corresponding rank
    //From the rank.txt file
    vector<pair <float,string>> rank_array;

    //total words
    float word_total = 0;

};


#endif //UNTITLED19_DICTIONARY_H
