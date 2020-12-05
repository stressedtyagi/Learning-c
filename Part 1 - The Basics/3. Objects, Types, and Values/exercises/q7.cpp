#include "../../../std_lib_facilities.h"
int main(void){
	string i,j,k;
	cin >> i >> j >> k;
	
	if((i>j && j>k) || (i==j && j==k)){	
		cout << k << "," << j << "," << i;
	}else if(i==j && j!=k){
		if(i<k)	
			cout << i << "," << j << "," << k;
		if(i>k)	
			cout << k << "," << i << "," << j;
	}else if(i==k && k!=j){
		if(i<j)	
			cout << i << "," << k << "," << j;
		if(i>j)	
			cout << j << "," << i << "," << k;
	}else if(j==k && k!=i){
		if(j<i)	
			cout << j << "," << k << "," << i;
		if(j>i)	
			cout << i << "," << j << "," << k;
	}else if(i<j && j<k){
		cout << i << "," << j << "," << k;
	}else if(i>j && j<k){
		if (i>k)
			cout << j << "," << k << "," << i;
		if (i<k)
			cout << j << "," << i << "," << k;
	}else if(i<j && j>k){
		if(i>k)
			cout << k << "," << i << "," << j;
		if(i<k)
			cout << i << "," << k << "," << j;
	}
	return 0;
}
