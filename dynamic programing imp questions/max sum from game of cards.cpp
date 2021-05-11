   int maxScore(vector<int>& cardPoints, int k) {
     
        int left[k+1];
        int right[k+1];
        
        left[0]=right[0]=0;
        for(int i=1;i<=k;i++)
        {
            left[i]=left[i-1]+cardPoints[i-1];
        }
        for(int i=1;i<=k;i++)
            right[i]=right[i-1]+cardPoints[cardPoints.size()-i];
        
        int sum=0;
        for(int i=0;i<=k;i++)
        {
            sum=max(sum,left[i]+right[k-i]);
        }
        
        return sum;
    }
};

// max sum that can be obtained from game of cards :lletcode problem

// also an optimal substructure exisitrs

