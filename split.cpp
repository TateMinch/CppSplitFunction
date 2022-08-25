#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

vector<string> split(string temp, char delimitor){
    string temp2;
    vector<string> arr;
    for(int i = 0; i < temp.length(); i++){
        if(temp[i] == delimitor || i == temp.length() - 1){
            if(i == temp.length() - 1)
                temp2.push_back(temp[i]);
            arr.push_back(temp2);
            temp2 = "";
        }else
            temp2.push_back(temp[i]);
    }
    return arr;
}


int main(int argc, char *argv[]){
    if(argc != 3){
        cout << "USAGE: ./split \"<stringToBeSplit>\" <delimitor>" << endl;
        return 1;
    }
    vector<string> test = split(argv[1], *argv[2]);
    for(int i = 0; i < test.size(); i++)
        cout << test[i] << endl;
    //This comment is a test for git commit from vscode
    //This is another comment to compare.
    return 0;
}