/*
16. In the drill, you wrote a program that, given a series of numbers, found the max and min of that
series. The number that appears the most times in a sequence is called the mode. Create a
program that finds the mode of a set of positive integers.
*/

#include "../../../std_lib_facilities.h"

void mode_Algorithm_1(vector<int> number){
    int max_count = 0;
    int mode = number[0];
    for (int i = 0; i < number.size(); i++){
        int count = 0;
        for (int j = 0; j < number.size(); j++){
            if(number[i] == number[j])
                count++;
        }
        if(count > max_count){
            mode = number[i];
            max_count = count;
        }
    }
    cout << "Mode : " << mode << endl;
}

void mode_Algorithm_2(vector<int> number){
    int mode = number[0];
    int curr_number = number[0];
    int max_count = 0;
    int counter = 0;
    sort(number);
    
    cout << "Sorted Array  : ";
    for (int i : number){
        cout << i << " ";
    }
    cout << endl;
    

    for (int i = 0; i < number.size(); i++){
        if(number[i] == curr_number){
            counter++;
        }else{
            counter = 1;
            curr_number = number[i];
        }
        if (counter > max_count){
            max_count = counter;
            mode = number[i];
        }
  
    }
    cout << "Mode : " << mode << endl;
}

int main(){
    vector<int> number;
    cout << "Enter elements of vector seperated with spaces and then press newline character : ";
    for (int x; cin >> x;){
        number.push_back(x);
    }
    // mode_Algorithm_1(number);
    mode_Algorithm_2(number);
    return 0;
}