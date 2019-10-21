#include <iostream>
#include "tictac.h"
#include<stdlib.h>
using namespace std;

int main()
{
    char x;
    bool play;
    cout << "\t\t\t\t---------------------------------------------" <<endl;
    cout<< "\t\t\t\t\tWelcome to my tic-tac-toe game"<<endl;
    cout << "\t\t\t\t---------------------------------------------" <<endl;
    tictac to;
    to.playgame();
      while(play==true)
      {
    cout << "You want to play more?\nThen press Y,if not then press N" <<endl;
    cin >> x;
    if(x=='Y' || x=='y')
        {
            play=true;
            to.input();
            to.playgame();
        }
    else
        play=false;
        system("cls");
         cout << "!!! NICE GAME you guys had !!!" <<endl;
      }
    system("pause");
    return 0;
}
