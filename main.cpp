#include <bits/stdc++.h>
#include<conio.h>

using namespace std;
char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
char player[15]="X";
char player1[15]="O";
char playerweapon1[2]="X";
char playerweapon2[2]="O";
void toggleplayer()
{
    cout<<"Hello Player Unknown"<<endl;
    cout<<"Enter your Name Player 1"<<endl;
    cin>>player;
    cout<<"Enter your Name Player 2"<<endl;
    cin>>player1;
   // cout<<"Enter your choice "<<player<<endl<<"1--> 'X'"<<endl<<"2--> 'O'"<<endl;
    //cin>>playerweapon1;
    //cout<<"Enter your choice Player 2"<<endl<<"1--> 'X'"<<endl<<"2--> 'O'"<<endl;
    //cin>>playerweapon2;

}
void draw()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<matrix[i][j];
            if(j<2)
            {cout<<"|";}
        }
        cout<<endl;
        cout<<"-*-*-"<<endl;
    }
}
void input()
{
    cout<<"Your Move "<<player<<endl;
    int x;
    while(true)
    {
        cin>>x;
    if(x==1)
   {
       if(matrix[0][0]==*playerweapon1 || matrix[0][0]==*playerweapon2)
       {
           cout<<"INVALID REQUEST PLEASE TRY AGAIN"<<endl;
           continue;
       }
       else
    matrix[0][0]=*playerweapon1;
   }
    else if(x==2)
    {
        if(matrix[0][1]==*playerweapon1 || matrix[0][1]==*playerweapon2)
       {
           cout<<"INVALID REQUEST PLEASE TRY AGAIN"<<endl;
           continue;
       }
    matrix[0][1]=*playerweapon1;
    }
    else if(x==3)
    {
        if(matrix[0][2]==*playerweapon1 || matrix[0][2]==*playerweapon2)
       {
           cout<<"INVALID REQUEST PLEASE TRY AGAIN"<<endl;
           continue;
       }
        matrix[0][2]=*playerweapon1;}
    else if(x==4)
    {
        if(matrix[1][0]==*playerweapon1 || matrix[1][0]==*playerweapon2)
       {
           cout<<"INVALID REQUEST PLEASE TRY AGAIN"<<endl;
           continue;
       }
        matrix[1][0]=*playerweapon1;}
    else if(x==5)
    {
        if(matrix[1][1]==*playerweapon1 || matrix[1][1]==*playerweapon2)
       {
           cout<<"INVALID REQUEST PLEASE TRY AGAIN"<<endl;
           continue;
       }
        matrix[1][1]=*playerweapon1;}
    else if(x==6)
    {
        if(matrix[1][2]==*playerweapon1 || matrix[1][2]==*playerweapon2)
       {
           cout<<"INVALID REQUEST PLEASE TRY AGAIN"<<endl;
           continue;
       }
        matrix[1][2]=*playerweapon1;}
    else if(x==7)
    {
        if(matrix[2][0]==*playerweapon1 || matrix[2][0]==*playerweapon2)
       {
           cout<<"INVALID REQUEST PLEASE TRY AGAIN"<<endl;
           continue;
       }
        matrix[2][0]=*playerweapon1;}
    else if(x==8)
    {
        if(matrix[2][1]==*playerweapon1 || matrix[2][1]==*playerweapon2)
       {
           cout<<"INVALID REQUEST PLEASE TRY AGAIN"<<endl;
           continue;
       }
        matrix[2][1]=*playerweapon1;}
    else if(x==9)
    {
        if(matrix[2][2]==*playerweapon1 || matrix[2][2]==*playerweapon2)
       {
           cout<<"INVALID REQUEST PLEASE TRY AGAIN"<<endl;
           continue;
       }
        matrix[2][2]=*playerweapon1;}
    else
    {
        cout<<"INVALID REQUEST PLEASE TRY AGAIN"<<endl;
        continue;
    }
    break;
    }

}
void input1()
{
    cout<<"Your Move "<<player1<<endl;
    int x;
    while(true)
    {
        cin>>x;
    if(x==1)
   {
       if(matrix[0][0]==*playerweapon1 || matrix[0][0]==*playerweapon2)
       {
           cout<<"INVALID REQUEST PLEASE TRY AGAIN"<<endl;
           continue;
       }
       else
    matrix[0][0]=*playerweapon2;
   }
    else if(x==2)
    {
        if(matrix[0][1]==*playerweapon1 || matrix[0][1]==*playerweapon2)
       {
           cout<<"INVALID REQUEST PLEASE TRY AGAIN"<<endl;
           continue;
       }
    matrix[0][1]=*playerweapon2;
    }
    else if(x==3)
    {
        if(matrix[0][2]==*playerweapon1 || matrix[0][2]==*playerweapon2)
       {
           cout<<"INVALID REQUEST PLEASE TRY AGAIN"<<endl;
           continue;
       }
        matrix[0][2]=*playerweapon2;}
    else if(x==4)
    {
        if(matrix[1][0]==*playerweapon1 || matrix[1][0]==*playerweapon2)
       {
           cout<<"INVALID REQUEST PLEASE TRY AGAIN"<<endl;
           continue;
       }
        matrix[1][0]=*playerweapon2;}
    else if(x==5)
    {
        if(matrix[1][1]==*playerweapon1 || matrix[1][1]==*playerweapon2)
       {
           cout<<"INVALID REQUEST PLEASE TRY AGAIN"<<endl;
           continue;
       }
        matrix[1][1]=*playerweapon2;}
    else if(x==6)
    {
        if(matrix[1][2]==*playerweapon1 || matrix[1][2]==*playerweapon2)
       {
           cout<<"INVALID REQUEST PLEASE TRY AGAIN"<<endl;
           continue;
       }
        matrix[1][2]=*playerweapon2;}
    else if(x==7)
    {
        if(matrix[2][0]==*playerweapon1 || matrix[2][0]==*playerweapon2)
       {
           cout<<"INVALID REQUEST PLEASE TRY AGAIN"<<endl;
           continue;
       }
        matrix[2][0]=*playerweapon2;}
    else if(x==8)
    {
        if(matrix[2][1]==*playerweapon1 || matrix[2][1]==*playerweapon2)
       {
           cout<<"INVALID REQUEST PLEASE TRY AGAIN"<<endl;
           continue;
       }
        matrix[2][1]=*playerweapon2;}
    else if(x==9)
    {
        if(matrix[2][2]==*playerweapon1 || matrix[2][2]==*playerweapon2)
       {
           cout<<"INVALID REQUEST PLEASE TRY AGAIN"<<endl;
           continue;
       }
        matrix[2][2]=*playerweapon2;}
    else
    {
        cout<<"INVALID REQUEST PLEASE TRY AGAIN"<<endl;
        continue;
    }
    break;
    }
}
int check()
{
    if(matrix[0][0]==matrix[1][1] && matrix[1][1]==matrix[2][2])

    {
        if(matrix[0][0]==*playerweapon1)
            return 1;
        else
            return 2;
    }
    else if(matrix[0][2]==matrix[1][1] && matrix[1][1]==matrix[2][0])
    {
        if(matrix[1][1]==*playerweapon1)
            return 1;
        else
            return 2;
    }
    else if((matrix[0][0]==matrix[0][1] && matrix[0][1]==matrix[0][2]))
    {
        if(matrix[0][0]==*playerweapon1)
            return 1;
        else
            return 2;
    }
    else if((matrix[1][0]==matrix[1][1] && matrix[1][1]==matrix[1][2]))
    {
        if(matrix[1][0]==*playerweapon1)
            return 1;
        else
            return 2;
    }
    else if((matrix[2][0]==matrix[2][1] && matrix[2][1]==matrix[2][2]))
    {
        if(matrix[2][0]==*playerweapon1)
            return 1;
        else
            return 2;
    }
    else if((matrix[0][0]==matrix[1][0] && matrix[1][0]==matrix[2][0]))
    {
        if(matrix[0][0]==*playerweapon1)
            return 1;
        else
            return 2;
    }
    else if((matrix[0][1]==matrix[1][1] && matrix[1][1]==matrix[2][1]))
    {
        if(matrix[0][1]==*playerweapon1)
            return 1;
        else
            return 2;
    }
    else if((matrix[0][2]==matrix[1][2] && matrix[1][2]==matrix[2][2]))
    {
        if(matrix[0][2]==*playerweapon1)
            return 1;
        else
            return 2;
    }
    return 0;
}
bool optionn()
{
    //system("cls");
    cout<<"Select Option"<<endl;
    cout<<"1-> Restart the Game"<<endl<<"2-> Quit"<<endl;
    int cnt;
    cin>>cnt;
    if(cnt==1)
        return true;
    else
        return false;
}
void defaultsettings()
{
   matrix[0][0]='1';
   matrix[0][1]='2';
   matrix[0][2]='3';
   matrix[1][0]='4';
   matrix[1][1]='5';
   matrix[1][2]='6';
   matrix[2][0]='7';
   matrix[2][1]='8';
   matrix[2][2]='9';

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout<<"Tic Tac Toe V1.0 Made by Abhinav Ginti"<<endl;
    cout<<"Enjoy the Game"<<endl;
    toggleplayer();
    int c=0;
    //int n=10;
    int n=0;
    while(true)
    {

        system("cls");
        cout<<"Tic Tac Toe V1.0 Made by Abhinav Ginti"<<endl;

        draw();
        c=check();
        if(c==1)
        {
            cout<<player<<" Wins"<<endl;
        }
        else if(c==2)
        {
            cout<<player1<<" Wins"<<endl;
        }
        if(c!=0 || n==9)
        {
            n=0;
            if(true==optionn())
            {
                defaultsettings();
                continue;
            }
            else
            {
                cout<<"Thanks for Playing"<<endl;
                break;
            }
        }
        input();
        n++;
        system("cls");
cout<<"Tic Tac Toe V1.0 Made by Abhinav Ginti"<<endl;
        draw();
        c=check();
        if(c==1)
        {
            system("cls");
            cout<<player<<" Wins"<<endl;
        }
        else if(c==2)
        {
            system("cls");
            cout<<player1<<" Wins"<<endl;
        }
        if(c!=0 || n==9)
        { n=0;
            if(true==optionn())
            {
                defaultsettings();
                continue;
            }
            else
            {
                cout<<"Thanks for Playing"<<endl;
                break;
            }
        }
        input1();
        n++;
        //system("cls");


        //n--;
    }
    system("pause");
    return 0;
}
