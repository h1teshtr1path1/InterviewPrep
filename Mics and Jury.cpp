 int micsandjury(int N, int M,int teams[])
    {
        int l = 1, r = max(array teams);
        int ans;
        while(l<=r)
        {
            int mid = (l+r)/2;
            int groups =0;
            
            for(int i=0;i<M;i++)
            {
                if(teams[i]%mid!=0)
                groups+=teams[i]/mid+1;   //6 and mid=4 => 6/4 +1 
                else
                groups+=teams[i]/mid;
            }
            if(groups>N)
            {
                l=mid+1;
            }
            else
            {
                
               	ans = mid;
                r=mid-1;
            }
        }
        return ans;
    }
