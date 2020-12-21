/*
15. Write a program that takes an input value n and then finds the first n primes.
*/

#include "../../../std_lib_facilities.h"
int main(){
    int n = 0;
    vector<int> prime = {2};    

    cout << "Enter how many first prime do you want : ";
    cin >> n;

    int n_prime = n - 1;
    int i = 3;
    while(n_prime){
        int flag = true;
        for(int j = 0; j < prime.size() && flag; j++){
            if(i%prime[j] == 0)
                flag = false;
        }
        if(flag){
            prime.push_back(i);
            n_prime--;
        }
        i++;
    }
    cout << "!!!!! First "<< n << " are !!!!!" << endl;
    for(int i = 0; i < prime.size(); i++){
        cout << "Prime ["<<i<<"]" << " = " << prime[i] << endl;
    }

    return 0;
}