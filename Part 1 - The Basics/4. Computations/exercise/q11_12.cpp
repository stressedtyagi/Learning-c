/*
11. Create a program to find all the prime numbers between 1 and 100. One way to do this is to
write a function that will check if a number is prime (i.e., see if the number can be divided by a
prime number smaller than itself) using a vector of primes in order (so that if the vector is
called primes, primes[0]==2, primes[1]==3, primes[2]==5, etc.). Then write a loop that goes
from 1 to 100, checks each number to see if it is a prime, and stores each prime found in a
vector. Write another loop that lists the primes you found. You might check your result by
comparing your vector of prime numbers with primes. Consider 2 the first prime.

12. Modify the program described in the previous exercise to take an input value max and then find
all prime numbers from 1 to max.
*/
#include "../../../std_lib_facilities.h"
int main(){
    int max = 100;
    vector<int> prime = {2};    
    cout << "Enter maximum value upto which you want to finding prime numbers : ";
    cin >> max;
    for(int i = 2; i <= max; i++){
        int flag = true;
        for(int j = 0; j < prime.size(); j++){
            if(i%prime[j] == 0)
                flag = false;
        }
        if(flag)
            prime.push_back(i);
    }
    for(int i = 0; i < prime.size(); i++){
        cout << "Prime ["<<i<<"]" << " = " << prime[i] << endl;
    }
    return 0;
}