    #include <bits/stdc++.h> 
     
    using namespace std;
    
     
     
  
     
    int main()
    {
     
     
    		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    	 	int i,j,n,m,cont=0,p,q,d,mn,mx,l,r,sum=0,z1,k;
      		
      		
      		cin>>k;
     	
      		
      		for(j=0;j<k;j++){
      			string s,t="",s1;
      			cin>>s>>s1;
      			n=s.length();
      			
      			t=s.substr(2);
      			t+=s[0];
      			t+=s[1];
      			
      			
      			if(n>2){
      				
      			
      			if(t==s1){
      				cout<<1<<endl;
      			}else{
					t=s[n-2];
					t+=s[n-1];
					t+=s.substr(0,n-2);
				
					
					if(t==s1)
					cout<<1<<endl;
					else
					cout<<0<<endl;	


				}
				
				}else{
					if(s==s1)
					cout<<1<<endl;
					else
					cout<<0<<endl;
				
				}
      			
      			
      			
      		
      		}
      		
      		
    

      		
      		
      	
      				
    						
    	
    		
  }
     
     
