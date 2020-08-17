    #include <bits/stdc++.h> 
     
    using namespace std;
    
     
     
  
     
    int main()
    {
     
     
    		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    	 	int i,j,n,m,cont=0,p,q,d,mn,mx,l,r,sum=0,z1,t,k;
      		
      		
      		cin>>t;
     	
      		
      		for(j=0;j<t;j++){
      			string s;
      			cin>>s;
      			n=s.length();
      			
      			int dp[n][n]={0};
      			mx=1;
      			int id=0;
      			
      			for(i=0;i<n;i++)
      			{
      				for(k=0;k<n;k++)
      				dp[i][k]=0;
      			
      			}
      			
      			for(i=0;i<n;i++)
      			dp[i][i]=1;
      			
      			//Palindrome of length 2	
      			for(i=0;i<n-1;i++){
      				if(s[i]==s[i+1]){
      					dp[i][i+1]=1;
   						
   						if(mx<2){
   							mx=2;
   							id=i;
   						}
      				}
      			}
      			
      			for(k=3;k<=n;k++){
      				for(i=0;i<=n-k;i++){
      					m=i+k-1;
      					if(dp[i+1][m-1] && s[i]==s[m]){
      						dp[i][m]=1;
      						
      						if(mx<(m-i+1)){
      							mx=m-i+1;
      							id=i;
      						}
      					} 
      				}
      			
      			}
      			
      			for(i=id;i<id+mx;i++)
      			cout<<s[i];
      			
      			cout<<endl;
      			
      			
						
      		}
      		
      		
    

      		
      		
      	
      				
    						
    	
    		
  }
     
     
