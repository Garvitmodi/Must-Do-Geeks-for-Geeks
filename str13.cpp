    #include <bits/stdc++.h> 
     
    using namespace std;
       
   int main()
 {
     
     
    		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    	 	int i,j,n,m,cont=0,p,q,d,mn,mx,l,r,sum=0,z1,k,a,b,diff,x,z;
      	
      		
      		cin >> k;
     	
     		
      		for(d=0;d<k;d++){
      				
      				
      				
      			string s,t;
      		
      			
      			cin>>z;
      			cin>>s;
      		
      			n=s.length();
      		
      			for(i=1;i<z;i++){
      				cin>>t;
      				m=t.length();
      				n=min(n,m);
      				for(j=0;j<n;j++){
      					if(s[j]!=t[j]){
      						n=j;
      						break;
      					}
      				
      				}
      			}
      			
      			if(n==0)
      			cout<<-1<<endl;
      			else
      			{
      				for(i=0;i<n;i++)
      				cout<<s[i];
      				
      				cout<<endl;
      			}
      			
      				
      				
      			
      		
      	}
      		
      		
    

      		
      		
      	
      				
    						
    	
}
     
     
