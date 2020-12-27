// Q17. Write a program that finds min, max and mode of the sequence of strings. 
#include "../../../std_lib_facilities.h"

string stringMode_Algorithm_1(vector<string> str_vector){
    int max_count = 0;
    string mode = str_vector[0];
    for (int i = 0; i < str_vector.size(); i++){
        int count = 0;
        for (int j = 0; j < str_vector.size(); j++){
            if(str_vector[i] == str_vector[j])
                count++;
        }
        if(count > max_count){
            mode = str_vector[i];
            max_count = count;
        }
    }
    return mode;
}

string stringMode_Algorithm_2(vector<string> str_vector){
    string mode = str_vector[0];
    string curr_number = str_vector[0];
    int max_count = 0;
    int counter = 0;
    sort(str_vector);
    
    // cout << endl;    
    // cout << "Sorted Array  : ";
    // for (string i : str_vector){
    //     cout << i << " ";
    // }
    // cout << endl;
    
    for (int i = 0; i < str_vector.size(); i++){
        if(str_vector[i] == curr_number){
            counter++;
        }else{
            counter = 1;
            curr_number = str_vector[i];
        }
        if (counter > max_count){
            max_count = counter;
            mode = str_vector[i];
        }
  
    }
    return mode;
}

int main(){
    vector<string> str_vector;
    for (string str; cin >> str;){
        str_vector.push_back(str);
    }
    string minimum = str_vector[0];
    string maximum = str_vector[0];
    for (string str : str_vector){
        if(str.size() < minimum.size())
            minimum = str;
        if(str.size() > maximum.size())
            maximum = str;
    }
    cout << "Maximum Length string is : " << maximum << endl;
    cout << "Minimum Length string is : " << minimum << endl;
    cout << "Mode of the given string is : " << stringMode_Algorithm_2(str_vector) << endl;

    return 0;
}
