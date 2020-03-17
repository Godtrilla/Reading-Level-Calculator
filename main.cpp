//Del'Juan Jackson
//PF2
//Project 3


#include <iostream>
#include "dictionary.h"

using namespace std;

int main() {

    //instantiation of dictionary class object
    dictionary go;

    //Converting text file paths to strings for easier use.
    //When evaluation program, this will ofcourse need to be modified
    //considering the path will not be the same for your machine.
    string sample5 = "C:\\Users\\Elise Herenton\\Desktop\\Project 3 Midpoint\\Project 3 Midpoint\\sample5";
    string sample4 = "C:\\Users\\Elise Herenton\\Desktop\\Project 3 Midpoint\\Project 3 Midpoint\\sample4";
    string sample3 = "C:\\Users\\Elise Herenton\\Desktop\\Project 3 Midpoint\\Project 3 Midpoint\\sample3";
    string sample2 = "C:\\Users\\Elise Herenton\\Desktop\\Project 3 Midpoint\\Project 3 Midpoint\\sample2";
    string sample1 = "C:\\Users\\Elise Herenton\\Desktop\\Project 3 Midpoint\\Project 3 Midpoint\\sample1";
    string words =   "C:\\Users\\Elise Herenton\\Desktop\\Project 3 Midpoint\\Project 3 Midpoint\\words";


    //Start of menu
    cout << "choose which choice you would like to analyze" << endl
         << "1: Sample Text 1" << endl
         << "2: Sample Text 2" << endl
         << "3: Sample Text 3" << endl
         << "4: Sample Text 4" << endl
         << "5: Sample Text 5" << endl
         << "6: Words Text File" << endl;

    //User input
    int choice;
    cin >> choice;
    while(choice)
    {
        //Evaluation of Sample 1
        if(choice == 1)
        {
            cout << "Evaluating Sample 1" << endl;
            dictionary *go = new dictionary;
            go->read_file(sample1);
            go->print();
            delete go;
            cin >> choice;


        }

        //Evaluation of Sample 2
        else if(choice == 2)
        {

            cout << "Evaluating Sample 2" << endl;
            dictionary *go = new dictionary;
            go->read_file(sample2);
            go->print();
            delete go;
            cin >> choice;


        }

        //Evaluation of Sample 3
        else if(choice == 3)
        {
            cout << "Evaluating Sample 3" << endl;
            dictionary *go = new dictionary;
            go->read_file(sample3);
            go->print();
            delete go;
            cin >> choice;

        }

        //Evaluation of Sample 4
        else if(choice == 4)
        {
            cout << "Evaluating Sample 4" << endl;

            dictionary *go = new dictionary;
            go->read_file(sample4);
            go->print();
            delete go;
            cin >> choice;


        }

        //Evaluation of Sample 5
        else if(choice == 5)
        {
            cout << "Evaluating Sample 5" << endl;

            dictionary *go = new dictionary;
            go->read_file(sample5);
            go->print();
            delete go;
            cin >> choice;


        }

        //Evaluation of Words Text file
        else if(choice == 6)
        {
            cout << "Evaluating Words Sample" << endl;

            dictionary *go = new dictionary;
            cout << "The reading difficutly for this text is: " << go->stuff() << endl;
            cin >> choice;




        }

        //Exit condition
        else
            break;
    }



    return 0;
}