/*
10. Write a program that plays the game “Rock, Paper, Scissors.” If you are not familiar with the
game do some research (e.g., on the web using Google). Research is a common task for
programmers. Use a switch-statement to solve this exercise. Also, the machine should give
random answers (i.e., select the next rock, paper, or scissors randomly). Real randomness is too
hard to provide just now, so just build a vector with a sequence of values to be used as “the next
value.” If you build the vector into the program, it will always play the same game, so maybe
you should let the user enter some values. Try variations to make it less easy for the user to
guess which move the machine will make next
*/

#include "../../../std_lib_facilities.h"
int main(){
    vector<char> computer = 
    {
        'r','p','s',
        'r','s','p',
        's', 'r', 'p',
        's','p','r',
        'p','s','r',
        'p','r','s'
    };

    char player;
    int i = 0;
    
    while(cout << "Enter rock(r), paper(p) or scissor(s) : " && cin >> player){
        if(i == (computer.size())){
            i = 0;
        }

        switch (player)
        {
        case 'r':
            if(computer[i] == 'r'){
                cout << "Computer Chooses rock" << endl;
                cout << "------ DRAW ------" << endl;
            }
            if(computer[i] == 'p'){
                cout << "Computer Chooses Paper" << endl;
                cout << "------ Computer Wins ------" << endl;
            }   
            if(computer[i] == 's'){
                cout << "Computer Chooses Scissor" << endl;
                cout << "****** You Win ******" << endl;
            }
            i++;
            break;
        case 'p':
            if(computer[i] == 'r'){
                cout << "Computer Chooses rock" << endl;
                cout << "****** You Win ******" << endl;
            }   
            if(computer[i] == 'p'){
                cout << "Computer Chooses Paper" << endl;
                cout << "------ DRAW ------" << endl;
            }    
            if(computer[i] == 's'){
                cout << "Computer Chooses Scissor" << endl;
                cout << "------ Computer Wins ------" << endl;
            }
            i++;
            break;
        case 's':
            if(computer[i] == 'r'){
                cout << "Computer Chooses rock" << endl;
                cout << "------ Computer Wins ------" << endl;
            }    
            if(computer[i] == 'p'){
                cout << "Computer Chooses Paper" << endl;
                cout << "****** You Win ******" << endl;
            }   
            if(computer[i] == 's'){
                cout << "Computer Chooses Scissor" << endl;
                cout << "------ DRAW ------" << endl;
            }   
            i++;
            break;       
        default:
            cout << "!!!! Please Choose rock, paper or scissor !!!!" << endl;
            break;
        }
    }
    return 0;
}