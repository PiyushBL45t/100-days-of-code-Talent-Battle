/*

Problem 1: Code a program to find whether the given character is a:
Vowel or a consonant or print invalid input.

*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char c;
    cout<<"\nEnter a character: ";
    cin>>c;
    if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        cout<<"\nVowel"<<endl;
    }

    else if(!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))){
        cout<<"\nInvalid input";
    }

    else{
        cout<<"Consonant";
    }

    return 0;
}
