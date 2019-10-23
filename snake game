#include <iostream>
#include<windows.h>
#include<ctime>
#include<conio.h>
using namespace std;
bool gameover=true;
const int length=30;
const int width=40;
int fruitx,fruity,score;
int headx,heady;
int tailx[100],taily[100];
int tail=0;
char c;


class snake{
public:
    void draw();
    void logic();
    void setup();
    void input();
private:
    char direction;


};
void snake::draw()
{
        system("cls");
    for(int i=1;i<=length;i++)
    {
        for(int j=1;j<=width;j++)
        {
            if(j==1 || i==1 || j==width || i== length)
                cout << "#";
            else if(i==fruity && j==fruitx)
            {
                cout << "*";
            }
            else if(i==heady && j== headx)
                {
                    cout << "O";
                }

                else
                {
                    bool print=false;
                    for(int k=0;k<tail;k++)
                    {
                        if(taily[k]==i && tailx[k]==j)
                        {
                            cout << "o";
                        print=true;
                        }

                    }
                     if(print==false)
                    cout << " ";
                }

        }
        cout << endl;
    }
    cout << "SCORE: " <<score <<endl;
}
void snake::input()
{
    if(_kbhit())
    {
        switch(c=_getch())
        {
            if((direction!='t' && c!='s') && (direction!='d' && c!='w') && (direction!='l' && c!='d') && (direction!='r' && c!='a'))
            {
             case 'w':direction='t';
            break;
             case 'a':direction='l';
            break;
             case 's':direction='d';
            break;
             case 'd':direction='r';
            break;
             case 'q':gameover=false;
            break;
            }
            else
                continue;
        }
    }
}
void snake::setup()
{
srand(time(0));
    headx=width/2;
    heady=length/2;
    fruitx=(rand()%width)+1;
fruity=(rand()%length)+1;
score=0;
}
void snake::logic()
{
    int prevx=tailx[0];
    int prevy=taily[0];
    int prev2x,prev2y;
    tailx[0]=headx;
    taily[0]=heady;
    for(int i=1;i<tail;i++)
    {
        prev2x=tailx[i];
        prev2y=taily[i];
        tailx[i]=prevx;
        taily[i]=prevy;
        prevx=prev2x;
        prevy=prev2y;
    }
    switch(direction)
    {
        case 't':heady--;
        break;
        case 'l':headx--;
        break;
        case 'd':heady++;
        break;
        case 'r':headx++;
        break;
        default:
            break;
    }
 if(headx==fruitx && heady==fruity)
 {
       score=score+10;
       srand(time(0));
     fruitx=(rand()%19)+1;
     fruity=(rand()%19)+1;
     tail++;
 }
 if(headx>=width || headx<=0 || heady>=length || heady<=0)
 {
     gameover=false;
 }
 for(int i=1;i<tail;i++)
 {
     if(headx==tailx[i] && heady==taily[i])
     {
         system("cls");
         cout << "OOOOO you touched your own tail...so game over buddy!!!! " <<endl;
         cout <<score;
          gameover=false;
     }
 }
}

int main()
{

system("color 7A");
   snake so;
    so.setup();
while(gameover!=false)
{
       so.draw();
       so.input();
     so.logic();
}
system("pause");
system("cls");
cout << "\n\n\n\n\n  \t\t\t\tGAME OVER!!!\n\n  \t\t\t\tyou scored " <<score <<endl;
    return 0;
}
