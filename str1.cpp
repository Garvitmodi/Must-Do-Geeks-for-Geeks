    #include <bits/stdc++.h> 
     
    using namespace std;
    #define val 200005
     
    #define mk make_pair
     
     
  
     
    int main()
    {
     
     
    		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    	 	int i,j,n,m,cont=0,p,q,d,mn,mx,l,r,sum=0,z1; 
      	
      		
      		
      		cin>>n;
     	
      		
      		for(j=0;j<n;j++){
      			string s,t="",z="";
      			cin>>s;
      			
      			for(i=0;i<s.length();i++){
					if(s[i]!='.'){
						z+=s[i];
					}else{
						reverse(z.begin(),z.end());
						t+=z;
						t+='.';
						z="";					
					}
					
					
					
					
				}
				
						reverse(z.begin(),z.end());
						t+=z;
				
				reverse(t.begin(),t.end());
				cout<<t<<endl;
      			
      			
      			
      			
      }
      		
      		
    

      		
      		
      	
      				
    						
    	
    		
  }
     
     
