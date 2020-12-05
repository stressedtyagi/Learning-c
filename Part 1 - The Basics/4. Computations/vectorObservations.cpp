#include "../../std_lib_facilities.h"

/**
 * A simple program to demonstrate 
 * vector memory allocation during compile & runtime , vector's memory
 * grows and doubles of its previous size.
 * When does vector grow?
 * Vector.size and vector.capacity both becomes equal
 * than vector will grow twice of its previous size
 **/

int main(){
    int n,elem,actual,allocated;
    cout << "Give initial size : ";
    cin >> n;
    vector<int> test(n);
    actual = test.size() * sizeof(int);
    allocated = test.capacity() * sizeof(int);

    cout <<"\t******Intial usage(Compile Time)******\n";
    cout << "Needed memory : " << actual << endl;
    cout << "Actual memory : " << allocated << endl;
    cout << "Extra memory : " << allocated - actual << endl;

    cout << "\n\t******Runtime******\n";

    cout << " Enter element : \n";

    while(cin >> n) {
        test.push_back(n);
        actual = test.size() * sizeof(int);
        allocated = test.capacity() * sizeof(int);

        cout << "Needed memory : " << actual << endl;
        cout << "Actual memory : " << allocated << endl;
        cout << "Extra memory : " << allocated - actual << endl;

        cout << "--------------Vector layout-----------------\n";

        for(int i = 0 ;i < test.size(); i++){
            cout << test[i] << " "; 
        }

        cout << "\n--------------*************-----------------\n";
    }
}