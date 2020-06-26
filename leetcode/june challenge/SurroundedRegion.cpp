class Solution {
public:
    void DFS(int i,int j,vector<vector<char>> &board, int m,int n)
    {
        if(i<0 or j<0 or i>=m or j>=n or board[i][j] != 'O') return;
        board[i][j] = '#';
        
        DFS(i-1,j,board,m,n);
        DFS(i+1,j,board,m,n);
        
        DFS(i,j-1,board,m,n);
        DFS(i,j+1,board,m,n);
    }
    
    void solve(vector<vector<char>>& board) {

        int m=board.size();
        
        if(m==0)
            return;
        int n=board[0].size();
        for(int i=0;i<m;i++)
        {
            if(board[i][0]=='O')
                DFS(i,0,board,m,n);
            if(board[i][n-1]=='O')
                DFS(i,n-1,board,m,n);
            
        }
        for(int j=0;j<n;j++)
        {
            if(board[0][j]=='O')
                DFS(0,j,board,m,n);
            if(board[m-1][j]=='O')
                DFS(m-1,j,board,m,n);
        }
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]=='O')
                    board[i][j]='X';
                if(board[i][j]=='#')
                    board[i][j]='O';
                
            }
        }
    }
};