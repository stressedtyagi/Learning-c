// Q18. Write a program to solve quadratic equations. A quadratic equation is of the form

#include "../../../std_lib_facilities.h"
int main(){
    double a,b,c;
    cin >> a >> b >> c;
    cout << "Equation : " << a << "x^2 + " << b << "x + "<< c << endl;
    double discriminent = (b*b) - 4*(a*c);
    if(discriminent >= 0.0){
        double x1 = (-b + sqrt(discriminent))/(2*a);
        double x2 = (-b - sqrt(discriminent))/(2*a);
        cout << "Solution : X1 = " << x1 << ", X2 = " << x2 << endl;
    }else {
        discriminent = -discriminent;
        double x_1 = -b/(2*a);
        double x_2 = sqrt(discriminent)/(2*a);
        cout << "Solution : X1 = " << x_1 << " + " << x_2 << "i"
            << ", X2 = " << x_1 << " - " << x_2 << "i" << endl;        
    }
    return 0;
}