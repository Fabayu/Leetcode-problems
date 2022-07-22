class Solution {
public:
    int minSwapsCouples(vector<int>& row) {
    int n=row.size()/2, hands=0;
        vector<int> seat(2*n,-1), vis(n,0);
        for(int i=0;i<2*n;++i)
        {
            seat[row[i]]=i;
        }
        for(int i=0;i<n;++i)
        {
            if(vis[i]==0)
            {
                int wife=row[2*i], husb=row[2*i+1];
                int lover=(wife%2==0)?wife+1:wife-1, cnt=0;
                vis[i]=1;
                while(husb!=lover)
                {
                    int j=seat[lover];
                    wife=(j%2==0)?row[j+1]:row[j-1];
                    lover=(wife%2==0)?wife+1:wife-1;
                    vis[j/2]=1;
                    cnt++;
                }
                hands+=cnt;
            }
        }
        return hands;     
        
        
    }
};