/*
13. Create a program to find all the prime numbers between 1 and 100. There is a classic method
for doing this, called the “Sieve of Eratosthenes.” If you don’t know that method, get on the web
and look it up. Write your program using this method.

To find all the prime numbers less than or equal to a given integer n by Eratosthenes' method:

1. Create a list of consecutive integers from 2 through n: (2, 3, 4, ..., n).
2. Initially, let p equal 2, the smallest prime number.
3. Enumerate the multiples of p by counting in increments of p from 2p to n, and mark them in the list (these will be 2p, 3p, 4p, ...; the p itself should not be marked).
4. Find the smallest number in the list greater than p that is not marked. If there was no such number, stop. Otherwise, let p now equal this new number (which is the next prime), and repeat from step 3.
5. When the algorithm terminates, the numbers remaining not marked in the list are all the primes below n.
*/

#include "../../../std_lib_facilities.h"
int main(){
    int max = 100;
    vector<int> prime = {};    

    cout << "Enter maximum value upto which you want to finding prime numbers : ";
    cin >> max;

    vector<char> all_number(max+1, 'p');
    all_number[0] = all_number [1] = 'c';
    for(int i = 2; i <= max; i++){
        if(all_number[i] == 'p'){
            prime.push_back(i);
            for(int j = 2; (j*i) <= max; j++){
                all_number[j*i] = 'c';
            }
        }
    }

    for(int i = 0; i < prime.size(); i++){
        cout << "Prime ["<<i<<"]" << " = " << prime[i] << endl;
    }

    return 0;
}