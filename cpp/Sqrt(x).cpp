 int mySqrt(int x) {
        long low=0, high=x,mid,ans=-1;
        while(low<=high){
            mid=low+(high-low)/2;
            long sq=mid*mid;
            if(sq==x) return mid;
            else if(sq>x){
                high=mid-1;
            }
            else{
                ans=max(ans,mid);
                low=mid+1;
            }
        }
        
        return ans;
    }
