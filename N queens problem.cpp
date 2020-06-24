#include<bits/stdc++.h>
using namespace std;

bool issafe(char q[][10], int row,int col,int n){
    // check if  row has queen
    for(int i=0;i<n;i++){
      if(q[row][i] == 'Q'){
        return false;
    }
     }
    // to check if col has queen.
    for(int i=0;i<n;i++){
        if(q[i][col] == 'Q'){
            return false;
        }
    }
    //check for left diagonal
    int i = row;
    int j = col;
    while(i>=0 && j>=0){
        if(q[i][j] == 'Q'){
            return false;
        }
        i--;
        j--;
    }
    // right diagonal
    i = row;
    j = col;
    while(i>=0 && j<n){
        if(q[i][j] == 'Q'){
            return false;
        }
        i--;
        j++;
        // the position is safe

    }
    return true;
}
bool Nquens(char q[][10],int n, int row){
    if(row == n){
        // correct placement
        for(int x=0;x<n;x++)
        {
            for(int y=0;y<n;y++)
            {
                cout<<q[x][y]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return false;
    }
    // recursive case
    // try to place the queen in the current row and call on the remaining part which will ensure if the next part is visible or not
    for(int pos=0;pos<n;pos++)
    {
        // check if i,j is safe or not
        if(issafe(q,row,pos,n)){
            q[row][pos] = 'Q';
        

        bool nextsteps = Nquens(q,n,row+1);
        if(nextsteps == true)
            return true;
        // if flow comes here it means our assumption that the place i,j was safe is wrong
        q[row][pos] = '.'; // backtrack
          }
    }
    return false; // backtracking
}
int main(){
        int n;
        cin>>n;
        char  q[10][10];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++){
                q[i][j] = '.';
            }
        }
        Nquens(q,n,0);
    
    return 0;
}
