
#include "dictionary.h"

//Constructor
dictionary::dictionary()
{
    read_rank();
}



//Read words from Rank text file into a Vector
void dictionary::read_rank()
{
    string error = "fail";
    ifstream fin;
    fin.open("C:\\Users\\Elise Herenton\\Desktop\\Project 3 Midpoint\\Project 3 Midpoint\\rank");
    if(fin.fail())
        cout << error;

    float point;
    string word;

    while(!fin.eof())
    {
        fin>>point>>word;
        rank_array.push_back( make_pair(point, word));

    }

    fin.close();




}



//Read words from file and compare to vector that contains
//Rankings, if found, the difficutly variable is incremented
//If not, found within the rank vector, 1001 is added to difficutly total
void dictionary::read_file(string file)
{
    string error = "fail";
    ifstream fin;
    fin.open(file);
    if(fin.fail())
        cout << error;

    string word;
    float found = 0;


    while(!fin.eof())
    {
        fin>>word;
        word_total++;


        for(auto index : rank_array)
        {
            if (stripper(word) == index.second)
            {
                found++;
                difficulty_count += index.first;

            }

        }
    }

    float unfound_words = (word_total - found)*1001;



    difficulty = (unfound_words + difficulty_count) / word_total;
}



//Print Method
void dictionary::print()
{
    cout << "The reading difficutly for this text is: " << this->get_difficulty() << endl;
}



//Method to remove punctuation from word
string dictionary::stripper(string word)
{
    string chars = "#!?,.%-;--()'";


    word.erase(remove_if(word.begin(), word.end(),[&chars](const char& letter)
    {return chars.find(letter) != string::npos;}),word.end());

    transform(word.begin(), word.end(), word.begin(), ::tolower);

return word;
}

//Word Text Evaluator
float dictionary::stuff()
{
    string error = "fail";
    ifstream fin;
    fin.open("C:\\Users\\Elise Herenton\\Desktop\\Project 3 Midpoint\\Project 3 Midpoint\\words");
    if(fin.fail())
        cout << error;

    float point;
    string word;
    float total = 0;
    float found = 0;

    while(!fin.eof())
    {
        fin>>point>>word;
        total++;

       found+= point;
    }

    total = found/total;

return total;

}

//Retrives value for difficutly variable.
float dictionary::get_difficulty()
{
    return difficulty;
}
