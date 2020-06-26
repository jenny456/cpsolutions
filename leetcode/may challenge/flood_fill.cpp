class Solution {
public:  
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // vector<vector<int>> ans=image;
        int orig=image[sr][sc];
        dowork(image,sr,sc,newColor,orig);
        return image;
        
    }
     void dowork(vector<vector<int>>& image,int sr,int sc, int col,int orig)
    {
        if(sr<0|| sc<0 || sr>=image.size()|| sc>=image[0].size() || image[sr][sc]==col  )
        {
            return;
        }

        
            if(image[sr][sc]==orig)
            {
                image[sr][sc]=col;
                dowork(image,sr-1,sc,col,orig);
                
                dowork(image,sr+1,sc,col,orig);
                dowork(image,sr,sc-1,col,orig);
                dowork(image,sr,sc+1,col,orig);
            }
        }
};