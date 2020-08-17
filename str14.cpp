    /*
    	Question Link-
    	https://practice.geeksforgeeks.org/problems/most-frequent-word-in-an-array-of-strings/0
     
    */
    
    
    #include <bits/stdc++.h> 
     
    using namespace std;
       
   int main()
 {
     
     
    		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    	 	int i,j,n,m,cont=0,p,q,d,mn,mx,l,r,sum=0,z1,k,a,b,diff,x,z;
      	
      		
      		cin >> k;
     	
     		
      		for(d=0;d<k;d++){
      				
      				
      				
      			cin>>z;
      		
      			map<string,int> mp,firstind;
      			mx=0;
      			int lastind=0;
      			string s;
      			for(i=0;i<z;i++){
      			
      				string t;
      				cin>>t;
      				
      				if(firstind.count(t)==0){
      				    firstind[t]=i;
      				}
      				mp[t]++;
      				
      				if(mp[t]>mx){
      				    lastind=firstind[t];
      					mx=mp[t];
      					s=t;	
      				}else if(mp[t]==mx){
      				    if(firstind[t]>lastind){
      				        s=t;
      				        lastind=firstind[t];
      				    }
      				}
      				
      				
      				
      				
      			}
      			
      			cout<<s<<endl;
      			
      				
      			
      		
      	}
      		
      		
    

      		
      		
      	
      				
    						
    	
}
     
     
