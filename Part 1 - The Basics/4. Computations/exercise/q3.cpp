/*
Read a sequence of double values into a vector. Think of each value as the distance between
two cities along a given route. Compute and print the total distance (the sum of all distances).
Find and print the smallest and greatest distance between two neighboring cities. Find and print
the mean distance between two neighboring cities.
*/
#include "../../../std_lib_facilities.h"
int main(){
	vector<double> v;
	double total_distance = 0;
	for(double x; cin >> x;){
		v.push_back(x);
		total_distance += x;
	}
	sort(v);
	cout << "Total Distance : " << total_distance << endl;
	cout << "Greatest distance : " << v[v.size() - 1] << endl;
	cout << "Smallest distance : " << v[0] << endl;
	cout << "Mean of all the distance : " << total_distance/2.0 << endl;

	return 0;

}
