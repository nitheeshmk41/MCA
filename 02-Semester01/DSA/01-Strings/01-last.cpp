#include <iostream>
using namespace std;

int main(){
    string line;
    cout << "Enter some words : ";
    getline(cin, line);

    //cout << line.size();
    int last_word_starts_at = 0;
    for(int i = 0; i < line.size();i++){
        if(line[i] == ' '){
            last_word_starts_at = i;
        }
    }
    //cout << "NUm of spaces : " << last_word_starts_at << endl;

    int last_word_len = 0;
    if(last_word_starts_at > 0){
        for(int i = last_word_starts_at;i < line.size() -1;i++){
            last_word_len++;
        }
    }

    cout << "Last word length is : " << last_word_len << endl;

    return 0;
}


/*
Problem : Given a string s consisting of words and spaces, return the length of the last word in the string. A word is a maximal substring consisting of non-space characters only.
Input : Sentence
Ouput : Count of last word in the sentence

Algorithm :
1)Input a string from the user.
2)Find the index of the last space in the string.
3)Count the number of characters after that space — that’s the length of the last word.
4)Output the last word’s length.

*/