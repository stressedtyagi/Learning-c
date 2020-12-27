#include "../../../std_lib_facilities.h"
int main()
try{
    vector<int> solution(4);
    char ans = 'y';    
    do{
        int seed = 100;
        int bulls = 0, cows = 0;
        cout << "To start game enter any number : ";
        cin >> seed;
        
        for(int i = 0 ; i < 4; i++){
            srand(seed);
            int x = randint(1,9);
            solution[i] = x;
        }

        while(bulls != 4){
            int n;
            cout << "*********************************" << endl;
            cout << "bulls : " << bulls << " , cows : " << cows << endl; 
            cout << "enter guess number : ";
            cin >> n;
            bulls = cows = 0;
            if(n > 9999 || n < 1000){
                throw n;
            }
            vector<int> check {
                (((n/10)/10)/10)%10,
                ((n/10)/10)%10,
                (n/10)%10,
                (n%10)
            };
            for (size_t i = 0; i < solution.size(); i++){
                for (size_t j = 0; j < check.size(); j++){
                    if(solution[i] == check[j])
                        if(i == j)
                            bulls++;
                        else
                            cows++;
                }
            }
        }
        cout << "*********************************" << endl;
        cout << "bulls : " << bulls << " , cows : " << cows << endl; 
        cout << "!!! Congratulations : YOU WON !!!" << endl;

        cout << "*********************************" << endl;
        cout << "Want to continue : YES(y), NO(n) : ";
        cin >> ans;
        cout << "*********************************" << endl;
    }while (ans == 'y');
    return 0;
}catch (int n){
    cerr <<  "Error : \"" << n << "\" Out of bound." << endl;
}