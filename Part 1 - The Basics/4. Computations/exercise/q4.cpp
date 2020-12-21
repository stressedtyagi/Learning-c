#include "../../../std_lib_facilities.h"
int main(){
	int n;
	cout << "****NUMBER TO GUESS****"<<endl;
	cin >> n;
	cout << "***********************"<<endl;

	bool check = false;
	int start = 0, end = 100;
	int mid = (end-start)/2;
	for(int i = 0; i < 7 && check == false; i++){
		int ans;
		cout << "**** Is the number you are thinking of is : ****"
			<<"\n1. LESS than " << mid
			<<"\n2. EQUAL to " << mid
			<<"\n3. GREATER than " << mid
			<< endl;
		cout << "Your choice --> ";
		cin >> ans;
		if(ans == 3){
			start = mid;		
			mid += ((end-start)/2);
		}else if (ans == 1){
			end = mid;
			mid = start + ((end-start)/2);	
		}else if (ans == 2){
			check = true;
			cout << "Your number is found in " << i+1 << " itteration. " << endl;
		}
	}
	return 0;
}
