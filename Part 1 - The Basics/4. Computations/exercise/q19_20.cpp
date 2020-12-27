/*
19. Write a program where you first enter a set of name-and-value pairs, such as Joe 17 and Barbara 22. For each pair, add the name to a vector called names and the number to a vector called scores (in corresponding positions, so that if names[7]=="Joe" then scores[7]==17). Terminate input with NoName 0. Check that each name is unique and terminate with an error message if a name is entered twice. Write out all the (name,score) pairs, one per line.

20. Modify the program from exercise 19 so that when you enter a name, the program will output the corresponding score or name not found.
*/

#include "../../../std_lib_facilities.h"

bool checkPair(string inputName, vector<string> names){
    bool confirmation = true;
    for(string name : names){
        if(inputName == name)
            confirmation = false;
    }
    return (confirmation);
}

int main(){
    vector<string> names;
    vector<int> scores;
    int inputScore = 0;
    string inputName = "";
    while(inputName != "NoName" || inputScore != 0){
        cin >> inputName >> inputScore;
        if(inputName != "NoName" && inputScore != 0){
            if(checkPair(inputName,names)){
                names.push_back(inputName);
                scores.push_back(inputScore);
            }else{
                cout << "ERROR : !!!!!!! DUPLICATE Pair Detected !!!!!!!" << endl;
            }
        }
    }

    cout << "All the distinct pairs : |";
    for(int i = 0; i < names.size(); i++){
        cout << "(" << names[i] << ")"
            << "(" << scores[i] << ")" << " | ";
    }
    cout << endl;

    string searchName = "";
    cout << "*********************************" << endl;
    cout << "Enter name whose score you want to search : ";
    cin >> searchName;
    bool flag = true;
    for (int i = 0; i < names.size() && flag; i++){
        if(searchName == names[i]){
            cout << "Score for " << names[i] << " is : " << scores[i] << endl;
            flag = false;
        }
    }
    if (flag == true){
        cout << "!!!! Name not found !!!! " << endl;
    }
    

    int searchScore = 0;
    cout << "*********************************" << endl;
    cout << "Enter score whose corresponding names you want to search : ";
    cin >> searchScore;
    bool flag_1 = true;
    for (int i = 0; i < scores.size(); i++){
        if(searchScore == scores[i]){
            cout << "Name for Score (" << scores[i] << ") is : " << names[i] << endl;
            flag_1 = false;
        }
    }
    if (flag_1 == true){
        cout << "!!!! Score not found !!!! " << endl;
    }


    return 0;
}