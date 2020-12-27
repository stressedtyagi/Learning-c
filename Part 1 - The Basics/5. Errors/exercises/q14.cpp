#include "../../../std_lib_facilities.h"
int main(){
    vector<int> weekday_value(7);
    vector<string> weekday{"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    int val,rejected{0};
    string day;
    while (cin>> day >> val){
        if(day == "Monday" || day == "monday" || day == "Mon" || day == "mon"){
            weekday_value[0] += val;
        }else if(day == "Tuesday" || day == "tuesday" || day == "tue" || day == "Tue"){
            weekday_value[1] += val;
        }else if(day == "Wednesday" || day == "wednesday" || day == "Wed" || day == "wed"){
            weekday_value[2] += val;
        }else if(day == "Thursday" || day == "thursday" || day == "Thu" || day == "thu"){
            weekday_value[3] += val;
        }else if(day == "Friday" || day == "friday" || day == "Fri" || day == "fri"){
            weekday_value[4] += val;
        }else if(day == "Saturday" || day == "saturday" || day == "Sat" || day == "sat"){
            weekday_value[5] += val;
        }else if(day == "Sunday" || day == "sunday" || day == "Sun" || day == "sun"){
            weekday_value[6] += val;
        }else{
            rejected++;
        }
    }

    for(int i = 0; i < weekday.size(); i++){
        cout << weekday[i] << " -- " << weekday_value[i] << endl;
    }
    cout << "Rejected Values : " << rejected << endl;
    return 0;
}