#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
#include<stdexcept>

using namespace std;

bool isPalindrome(string data, int s)
{
    if(s > 1){
        exit(-1);
    }
    for (int i = 0; i < s / 2; i++)
    {
        if (data[i] != data[s - i - 1])
            throw invalid_argument("Not a palindrome");
    }

    return true;
}

void parse_file(char *filename,vector<string>&input){
    string i;

    ifstream input_file(filename);
    if(!input_file.is_open()){
        cerr << "Could not open the file - '"<< filename << "'" << endl;
        exit(-1);
    }
    while(getline(input_file,i)){
        input.push_back(i);
    }
    input_file.close();
}

int main(int argc, char **argv)
{
    string data;
    if (argc < 2)
    {
        cout << "enter filename";
        return -1;
    }

    vector<string>input;
    parse_file(argv[1],input);
    
    for(auto i : input){
        if(isPalindrome(i,i.size())){
            cout<<i<<"\t -->  TRUE\n";
        }
        else{
            cout<<i<<"\t -->  FALSE\n";
        }
    }
    
    return 0;
}