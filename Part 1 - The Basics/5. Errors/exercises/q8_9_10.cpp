#include "../../../std_lib_facilities.h"
int main()
try{
    int n;
    cin >> n;
    vector<double> v;
    for(double i; cin >> i;){
        v.push_back(i);
    }
    vector<double> diff(v.size() - 1);
    for (size_t i = 0; i < v.size() - 1; i++){
        diff[i] = v[i+1] - v[i];
    }
    cout << "Original vector : ";
    for (auto i : v){
        cout << i << " ";
    }
    cout << "\nDifference : ";
    for (auto i : diff){
        cout << i << " ";
    }
    cout << endl;
    int sum = 0;
    for (size_t i = 0; i < n; i++){
        if(v[i] >= 0){
            if(sum > INT8_MAX - v[i]){
                cerr << "!!!! INTEGER OVERFLOW !!!!" << endl;
            }
            else {
                if (sum < INT8_MIN - v[i]){
                    cerr << "!!!! INTEGER OVERFLOW !!!!" << endl;
                }
            }
        }
        sum += v[i];
    }
    cout << "Sum : " << sum; 

    return 0;
}catch (exception &e){
    cout << "Error : " << e.what() << endl;
}