#include "../../std_lib_facilities.h"
int main(){
	double x = 0 , y = 0;
	//part 1,2,3,4,5
	/*
	while(cin>>x && cin >>y){
		cout << x << " " << y << endl;
		if(x > y){
			cout << "the smaller value is : " << y << endl;
			cout << "the larger value is : " << x << endl;
		}else if(y > x){
			cout << "the smaller value is : " << x << endl;
			cout << "the larger value is : " << y << endl;
		}else {
			cout << "both are equal" << endl;
		}

		if(x - y < 0.01 || y - x < 0.01)
			cout << "The number are almost equal"<<endl;
	}

	*/
	//part 6, 7, 8, 9, 10
	string unit;
	vector<double> allValues;
	double largest = 0.0,smallest = 0.0, total = 0.0;
	int n = 0;
	while(cin>>x && cin >> unit){
		if(unit == "cm"){
			total += x;
			n++;
			if(x > largest || n == 1)
				largest = x;
			if(x < smallest || n ==1)
				smallest = x;
			cout << "--> Largest so far : " << largest << " cm" << endl;
			cout << "--> Smallest so far : " << smallest << " cm" << endl;
			allValues.push_back(x/100);
		}else if(unit == "m"){
			x *= 100;
			total += x;
			n++;
			if(x > largest || n == 1)
				largest = x;
			if(x < smallest || n ==1)
				smallest = x;
			cout << "--> Largest so far : " << largest  << " cm"<< endl;
			cout << "--> Smallest so far : " << smallest << " cm" << endl;
			allValues.push_back(x/100);
		}else if(unit == "in"){
			x *= 2.54;
			total += x;
			n++;
			if(x > largest || n == 1)
				largest = x;
			if(x < smallest || n ==1)
				smallest = x;
			cout << "--> Largest so far : " << largest  << " cm"<< endl;
			cout << "--> Smallest so far : " << smallest << " cm" << endl;
			allValues.push_back(x/100);
		}else if(unit == "ft"){
			x *= (12*2.54);
			total += x;		
			n++;
			if(x > largest || n == 1)
				largest = x;
			if(x < smallest || n ==1)
				smallest = x;
			cout << "--> Largest so far : " << largest  << " cm"<< endl;
			cout << "--> Smallest so far : " << smallest << " cm" << endl;
			allValues.push_back(x/100);
		} else {
			cout << "UNIT NOT FOUND, TRY AGAIN" << endl;
		}
		cout << "--> Total number of items till now : " << n << endl;
		cout << "--> Total length till now : " << total/100.0 << "meters." << endl;		
	}
	sort(allValues);
	for(double x : allValues){
		cout << x << " m" << " <-- ";
	}
	cout << endl;


//	while ( x != 'a'){
//		cin >> x >> y;
//		cout << x << " " << y << endl;
//	}
	return 0;
}
