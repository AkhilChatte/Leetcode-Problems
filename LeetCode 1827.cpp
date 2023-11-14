class Solution {
public:
    int minOperations(vector<int>& v) 
    {
       int n=v.size(); 
       int number=0;
       for(int i=1;i<n;i++)
       {
           if(v[i] <= v[i-1]){
           int p=v[i-1]-v[i];
           number=number+p+1;
           v[i]=v[i]+p+1;
           }

       }
       return number;
    }
};