#ifndef TICTAC_H
#define TICTAC_H


class tictac
{
    public:
        tictac();
       void playgame();
  void input();
    protected:

    private:
        void display();
        char player1='X';
        char player2='O';
        char currentplayer=player1;
       char a[3][3];


        int xcord();
        int ycord();
        bool placemaker(int x,int y,char currentplayer);
        bool result(char currentplayer);
};

#endif // TICTAC_H
