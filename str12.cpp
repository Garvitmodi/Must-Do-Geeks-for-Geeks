    #include <bits/stdc++.h> 
     
    using namespace std;
       
   int main()
 {
     
     
    		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    	 	int i,j,n,m,cont=0,p,q,d,mn,mx,l,r,sum=0,z1,k,a,b,diff,x,z;
      	
      		
      		cin >> k;
     	
     		
      		for(d=0;d<k;d++){
      				
      			string s,t;
      		
      			
      	
      			cin>>s>>t;
      		
      			n=s.length();
      			m=t.length();
      			int flag=0;
      			for(i=0;i<n;i++){
      				
      				for(j=0;j<m && i+j<n;j++){
      					if(s[i+j]!=t[j])
      					break;	
      				}
      				
      				if(j==m)
      				{
      					flag=1;
      					cout<<i<<endl;
      					break;
      					
      				}	
      			}
      		
      			if(flag==0)
      			cout<<-1<<endl;
      			
      		
      	}
      		
      		
    

      		
      		
      	
      				
    						
    	
}
     
     
