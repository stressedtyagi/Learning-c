#include "../../std_lib_facilities.h"
int main(){
	vector<string> v;
	for(string str; cin >> str;)
		v.push_back(str);
	vector<string> disliked = {"bcco", "ec", "ae"};
	for(int i = 0; i < v.size(); i++){
		int flag = 0, flag_2 = 0;
		for(int j = 0; j < disliked.size() && flag == 0; j++){
			if(disliked[j] == v[i]){
				cout << "BLEEP" << " ";
				flag = 1;
				flag_2 = 1;
			}
			if(j == disliked.size())
				flag = 1;
		}
		if(flag_2 == 0)
				cout << v[i] << " ";
	}
	cout << endl;
	return 0;
}
