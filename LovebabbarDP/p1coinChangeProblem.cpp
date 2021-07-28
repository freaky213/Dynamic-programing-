   

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    long long int count( int arr[], int m, int n )
    {
       
        //code here.// { Driver Code Starts

       
        long long int ans[n+1][m+1];
        for(int i=0;i<=n;i++)
        {
            ans[i][0]=0;
        }
        for(int i=0;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(arr[j-1]==i)
                ans[i][j]=1+ans[i][j-1];
            else if(arr[j-1]<i)
            {
                ans[i][j]=ans[i-arr[j-1]][j]+ans[i][j-1];
            }
            else
            ans[i][j]=ans[i][j-1];
            }
        }
        return ans[n][m];
   
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int arr[m];
		for(int i=0;i<m;i++)
		    cin>>arr[i];
	    Solution ob;
		cout<<ob.count(arr,m,n)<<endl;
	}
    
    
    return 0;
}  // } Driver Code Ends