#include "../../../std_lib_facilities.h"
using namespace std;
int main(){
    string first_name;
    cout << "Enter first name : ";
    cin >> first_name;

    cout << "\nDear " << first_name << ","
	 << "\nHow are you? I am fine. I miss you.";

    string friend_name;
    cout << "\nEnter friend name : ";
    cin >> friend_name;

    cout << "\nHave you seen your " << friend_name << " lately\n";

    char sex = 0;
    cout << "\nm == male, f == female : ";
    cin >> sex;

    if ( sex == 'm')
	cout << "\nIf you see " << friend_name << " please ask him ..... ";
    else 
	cout << "\nIf you see" << friend_name << "please ask her ...";

    int age;
    cout << "\nPlease Enter age : ";
    cin >> age;

    cout << "\nI hear you just had a birthday and you are " << age << " years old. ";
    if (age <= 0 || age >= 110)
	    simple_error("you're kidding!");
    else if (age < 12)
	    cout << "\nNext year you will be " << age + 1;
    else if (age == 17)
	    cout << "\nyou vote next year";
    else if (age >= 70)
	    cout << "\n Retirement";

    cout << "\nYour sincerely \n _______ \n Divyanshu Tyagi";
    return 0;
}
