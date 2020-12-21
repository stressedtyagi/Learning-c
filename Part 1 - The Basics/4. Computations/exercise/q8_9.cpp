#include "../../../std_lib_facilities.h"
int main(){
	double curr_grain = 1, prev_grain = 1, total_grain = 1;
	bool flag_1 = true, flag_2 = true, flag_3 = true;
	for(int square_no = 2; square_no <= 64 && (flag_1 || flag_2 || flag_3); square_no++){
		curr_grain = prev_grain * 2;
		prev_grain = curr_grain;
		total_grain += curr_grain;
		
		cout << "************** SQUARE : "<<square_no<<" ************\n";
		cout << "curr : " << curr_grain << endl;
		cout << "prev : " << prev_grain << endl;
		cout << "total : " << total_grain << endl;


		if(total_grain >= 1000 && flag_1){
			cout << "Number of squares required for atleast 1000 grains is : " << square_no+1 << endl;
	//		flag_1 = false;
		}
		if(total_grain >= 1000000 && flag_2){
			cout << "Number of squares required for atleast 1,000,000 grains is : " << square_no+1 << endl;
	//		flag_2 = false;
		}
		if(total_grain >= 1000000000 && flag_3){
			cout << "Number of squares required for atleast 1,000,000,000 grains is : " << square_no+1 << endl;
	//		flag_3 = false;
		}
	}
	return 0;

}
