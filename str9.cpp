    #include <bits/stdc++.h> 
     
    using namespace std;
       
   int main()
 {
     
     
    		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    	 	int i,j,n,m,cont=0,p,q,d,mn,mx,l,r,sum=0,z1,k,a,b,diff;
      	
      		
      		cin >> k;
     	
     		
      		for(d=0;d<k;d++){
      				
      			string s,t,s1;
      		
      			
      	
      			cin>>s;
      		
      			n=s.length();
      		
      			int arr[n][n];
      		
      			for(i=0;i<n;i++)
      			arr[i][i]=1;
      		
      			for(diff=2;diff<=n;diff++){
      			
		  			for(i=0;i<n-diff+1;i++){
		  				j=i+diff-1;
		  				if(s[i]==s[j] && diff==2){
		  						arr[i][j]=2;
		  				}else if(s[i]==s[j]){
		  					arr[i][j]=arr[i+1][j-1]+2;
		  				}else{
		  					arr[i][j]=max(arr[i+1][j],arr[i][j-1]);
		  				}
		  			}
      			}
      			
      			cout<<n-arr[0][n-1]<<endl;
      			
      	}
      		
      		
    

      		
      		
      	
      				
    						
    	
}
     
     
