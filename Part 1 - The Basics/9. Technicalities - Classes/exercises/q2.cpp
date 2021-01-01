/*
2. Design and implement a Name_pairs class holding (name,age) pairs where name is a string
and age is a double. Represent that as a vector<string> (called name) and a
vector<double> (called age) member. Provide an input operation read_names() that reads a
series of names. Provide a read_ages() operation that prompts the user for an age for each
name. Provide a print() operation that prints out the (name[i],age[i]) pairs (one per line) in the
order determined by the name vector. Provide a sort() operation that sorts the name vector in
alphabetical order and reorganizes the age vector to match. Implement all “operations” as
member functions. Test the class (of course: test early and often).
*/

#include "../../../std_lib_facilities.h"

class Name_pairs{
    public:
        void read_names();
        void read_ages();
        void print();
        void sort();
    // private:
        vector<double> age;
        vector<string> name;
};

void Name_pairs::read_names(){
    cout << "Enter names : ";
    string str = "";
    while(str != "end"){
        cin >> str;
        if(str != "end")
            name.push_back(str);
    }
    read_ages();
}

void Name_pairs::read_ages(){
    cout << "Enter corresponding age for given names : " << endl;
    double x;
    for(auto n : name){
        cout << n << " -- ";
        cin >> x;
        age.push_back(x);
    }
}

ostream& operator << (ostream& out, Name_pairs& N){
    for(size_t i = 0; i < N.name.size(); i++){
        cout << "(" << N.name[i] << "," << N.age[i] << ")";
        if(i != N.name.size() - 1)
            out << " , ";
    }
    return out;
}

void Name_pairs::sort(){
    for(int i = 0; i < name.size() - 1; ++i){
        for (size_t j = 0; j < name.size() - i - 1; j++){
            if(name[j] > name[j+1]){
                swap(name[j], name[j+1]);
                swap(age[j], age[j+1]);
            }
        }
    }
    cout << "\nNew Sorted (name,age) : ";
    cout << *this;
    cout << endl;
}

int main(){
    Name_pairs n;
    n.read_names();
    cout << n;
    n.sort();
    return 0;
}