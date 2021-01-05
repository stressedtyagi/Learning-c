#include "../../../std_lib_facilities.h"
const int not_a_reading = -77777;
const int not_a_month = -1;

class Day{
    public:
        vector<double> day{vector<double>(23,not_a_reading)};
};

class Month{
    public:
        int month{not_a_month};
        vector<Day> month{32};
};

class Year{
    public :
        int year;
        vector<Month> year{12};
};

class Reading{
    public :
        int day;
        int hour;
        double temperature;
};

istream& operator>>(istream&is, Reading &r){
    char ch1,ch2,d,h;
    double temp;
    is >> ch1 >> d >> h >> temp >> ch2;
    if(ch1 != '(' || ch2 != ')'){
        error("WRONG INPUT");
    }

    r.day = d;
    r.hour = h;
    r.temperature = temp;
    return is;
}

int main(){

    return 0;
}