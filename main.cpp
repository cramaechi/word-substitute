//Proram replaces all four-letter words in an input with the word "love".
#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void input(string& sentence);
//Reads in a line of text from the keyboard and stores it in sentence.

void substitute(string& sentence);
//Precondition: sentence is non-empty.
//Postcondition: Replaces all four-letter words in sentence with the
//word//"love".

void output(string& sentence);
//Prints out the modified sentence.

int main()
{
    string s;
    char ans;

    do
    {
        input(s);
        substitute(s);
        output(s);

        cout<<"Would like to continue (y/n)? ";
        cin>>ans;
        cin.ignore(1,'\n');
        cout<<endl;
    }while(ans == 'y' || ans == 'Y');

    return 0;
}

void input(string& sentence)
{
    cout<<"Enter line of text: ";
    getline(cin, sentence);
    cout<<endl;
}

void substitute(string& sentence)
{
    char cstring[sentence.length()];
    strcpy(cstring, sentence.c_str());
    char *w = strtok(cstring, " 0123456789!@#$%^&*()_-+={}:;\"'<,>.?/\n");

    while (w != NULL)
    {
        if (strlen(w) == 4 && islower(w[0]))
            sentence.replace(sentence.find(w), 4, "love");
        else if(strlen(w) == 4 && isupper(w[0]))
            sentence.replace(sentence.find(w), 4, "Love");

        w = strtok(NULL, " 0123456789`~!@#$%^&*()-_+={[}]|:;\"'<,>.?/\n");
    }
}

void output(string& name)
{
    cout<<"Your new text: "<<name<<endl<<endl;
}
