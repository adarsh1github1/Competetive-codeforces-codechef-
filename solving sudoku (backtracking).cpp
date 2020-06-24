#include<bits/stdc++.h>
using namespace std;
#define n 9
#define unassigned 0
// this function check if any cell left is unsassigned or not.... if unassigned left then row and col values are assigned
bool finsunassigned(int sudoku[n][n],int& row, int& col){
    for(row =0;row<n;row++){
        for(col=0;col<n;col++)
            if(sudoku[row][col] == unassigned)
                return true;
    }
    return false;
}
// checks in row
bool isinrow(int sudoku[n][n],int row,int num){
    for(int j=0;j<n;j++){
        if(sudoku[row][j] == num)
            return true;
    }
    return false;
}
// checks in column
bool isincol(int sudoku[n][n],int col,int num){
    for(int i=0;i<n;i++){
        if(sudoku[i][col] == num)
            return true;
    }
    return false;
}
// checks in 3 x 3 box
bool isinbox(int sudoku[n][n], int rowstart, int colstart,int num){
    for(int row =0;row<3;row++){
        for(int col =0;col<3;col++){
            if(sudoku[rowstart+row][colstart+col] == num)
                return true;
        }
    }
    return false;
}

bool issafe(int sudoku[n][n], int row,int col,int num){
    // checks if the num is present in any that row or col or in the corresponding 3 x 3 box
    return !isinrow(sudoku,row,num) && !isincol(sudoku,col,num) && !isinbox(sudoku,row - row % 3,col - col % 3,num) && sudoku[row][col] == unassigned; 
}


bool solvesudoku(int sudoku[n][n]){
    int row,col;
    if(!finsunassigned(sudoku,row,col)){
        return true;  // no unassigne cell is left.. we are done
    }
    // we have row and column values
    for(int num=1;num<=9;num++){
        if(issafe(sudoku,row,col,num))
        {
            sudoku[row][col] = num;
        
        if(solvesudoku(sudoku))
            return true;
        // if control reaches here means the num value isnot safe at that position
        sudoku[row][col] = unassigned;
        }
    }
    return false;
}
void printsudoku(int sudoku[n][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<sudoku[i][j]<<" ";
        cout<<endl;
    }
}

int main(){
	int t;
	cin>>t;
	while(t){
        int sudoku[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++){
                cin>>sudoku[i][j];
            }
        }

        if(solvesudoku(sudoku))
            printsudoku(sudoku);
        else
            cout<<"No solution exists";
        t--;
		}
    
    return 0;
}
