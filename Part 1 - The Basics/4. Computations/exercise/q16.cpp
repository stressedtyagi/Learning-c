/*
16. In the drill, you wrote a program that, given a series of numbers, found the max and min of that
series. The number that appears the most times in a sequence is called the mode. Create a
program that finds the mode of a set of positive integers.
*/

// 2 3 5 6 7 8 8 9 2 13 5 7 8

#include "../../../std_lib_facilities.h"
int main(){
    vector<int> number;
    for (int x; cin >> x;){
        number.push_back(x);
    }
    vector<int> count(number.size());
    for (int i = 0; i < number.size(); i++){
        for (int j = 0; j < number.size(); j++){
            
        }
        
    }
    auto x = "abc";
    sort(count);
    for(int x : count){
        cout << x << " ";
    }
    return 0;
}