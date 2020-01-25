#include<iostream>
using namespace std;

bool isSafe(int board[][10],int i,int j,int n)
{
    // You can check for column
    for(int row=0;row<i;row++)
    {
        if(board[row][j]==1)
        {
            return false;
        }
    }
    // You can check for Left Diagonal 
    int x=i;
    int y=j;
    while(x>=0 && y>=0)
    {
        if(board[x][y]==1)
        {
            return false;
        }
        x--;
        y--;
    }
    // You can check for Right Diagonal
    x=i;
    y=j;
    while(x>=0 && y<n)
    {
        if(board[x][y]==1)
        {
            return false;
        }
        x--;
        y++;
    }
    // The position is now safe, column & diagonal
    return true;
}
bool solveNQueen(int board[][10],int i,int n)
{
    // Base case
    if(i==n)
    {
        // You have successfully place queens in a rows (0.............n-1);
        // Print the board;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]==1)
                {
                    cout<<"Q ";
                }
                else
                {
                    cout<<"_ ";
                }
            }
            cout<<endl;
        }
        cout<<endl;
        return false;
    }
    // Recursive case
    // Try to place the queen in the current row and call on the remaining part which will solved be recursion
    for(int j=0;j<n;j++)
    {
        // I have to check if i,j th position is safe to place the queen or not.
        if(isSafe(board,i,j,n))
        {
           // Place the queen -Assuming i,j is the right position
           board[i][j]=1;
           bool nextQueenRakhPaye=solveNQueen(board,i+1,n);
           if(nextQueenRakhPaye)
           {
               return true;
           }
           // Means i,j is not the right position-Assumption is wrong
           board[i][j]=0;  //backtrack
        }
    }
    // You have tried for all position in the current row but couldn't place a queen
    return false;
}
int main()
{
    int n;
    cin>>n;
    int board[10][10]={0};
    solveNQueen(board,0,n);
    return 0;
}
