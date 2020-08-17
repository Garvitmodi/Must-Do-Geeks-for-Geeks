    #include <bits/stdc++.h> 
     
    using namespace std;
    
     
     
  
     
    int main()
    {
     
     
    		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    	 	int i,j,n,m,cont=0,p,q,d,mn,mx,l,r,sum=0,z1; 
      	
      		
      		
      		cin>>n;
     	
      		
      		for(j=0;j<n;j++){
      			string s,t="",z="";
      			cin>>s;
      			
      			int arr[26]={0};
      			
      			for(i=0;i<s.length();i++){
					arr[s[i]-65]++;
					
				}
				
				for(i=0;i<26;i++){
					while(arr[i]--){
						t+='A'+i;
					}
				
				}
				
				
				
				do{
					cout<<t<<" ";
				
				}while(next_permutation(t.begin(),t.end()));
				
				cout<<endl;
						
      }
      		
      		
    

      		
      		
      	
      				
    						
    	
    		
  }
     
     
