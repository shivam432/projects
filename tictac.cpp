#include <iostream>
#include "tictac.h"
#include<stdlib.h>
using namespace std;


tictac::tictac()
{
    input();
}
void tictac::input()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            a[i][j]=' ';
        }
    }
}
void tictac::playgame()
{
    int x,y,chance=0;

    bool isdone=false;
    while(isdone==false)
    {
         display();
    x=xcord();
    y=ycord();
    if(placemaker(x,y,currentplayer)==false)
    {
        cout << "This place is occupied,Try some another place you asshole." <<endl;
        system("pause");
    }
    else
    {
   chance++;
   if(result(currentplayer)==true)
   {
       cout << "This game is over player " <<currentplayer<< " has won the match" <<endl;
       isdone=true;
       break;
   }
   else if(chance==9)
   {
       cout << "This match is a tie bitches,DO A DAB NOW " <<endl;
       isdone=true;
       break;
   }
    if(currentplayer==player1)
    {
        cout << "player 2,It's your turn buddy!!!" <<endl;
        currentplayer=player2;
    }
    else
    {
        cout << "player 1,It's your turn man!!!" <<endl;
        currentplayer=player1;
    }

    }
    system("CLS");
}

}
bool tictac::result(char currentplayer)
{
            for(int i=0;i<3;i++)
            {
                if(a[i][0]==a[i][1] && a[i][1]==a[i][2] && a[i][2]==currentplayer)
                    return true;
                else if(a[0][i]==a[1][i] && a[1][i]==a[2][i] && a[2][i]==currentplayer)
                    return true;
            }
             if(a[0][0]==a[1][1] && a[2][2]==a[1][1] && a[2][2]==currentplayer)
                    return true;
                else if(a[0][2]==a[1][1] && a[1][1]==a[2][0] && a[2][0]==currentplayer)
                    return true;

        return false;
}
int tictac::xcord()
{
    int x;
    bool bad=false;
    while(bad==false)
    {
    cout << "Enter your x co-ordinate: " <<endl;
    cin>>x;
    if(x<1 || x>3)
    {
        cout << "Invalid content!!!\n Plz re-enter" <<endl;
    }
    else
        bad=true;
    }
    return x-1;
}
int tictac::ycord()
{
    bool bad=true;
    int y;
    while(bad==true)
    {
    cout << "Enter your y co-ordinate: " <<endl;
    cin>>y;
    if(y<1 || y>3)
        cout << "Invalid content!!! Plz re-enter"<<endl;
    else
        bad=false;
    }
    return y-1;
}
bool tictac::placemaker(int x,int y,char currentplayer)
{
    if(a[x][y]!=' ')
        return false;
    a[x][y]=currentplayer;
    return true;
}
 void tictac::display()
{
    cout << "  1 " << " 2 " << " 3 " <<endl;
    cout << "----------------" << endl;
    for(int i=0;i<3;i++)
    {
        cout << i+1;
        for(int j=0;j<3;j++)
        {
            cout << "|" << a[i][j] << "|";
        }
        cout <<endl << "----------------" << endl;
    }
}

