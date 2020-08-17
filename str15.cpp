    /*
    	Question Link-
    	https://practice.geeksforgeeks.org/problems/camelcase-pattern-matching/0
     
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
      		
      			multimap<string,string> mp;
      			mx=0;
      			int flag=0;
      			vector<string> v;
      			for(i=0;i<z;i++){
      			
      				string t,s="";
      				cin>>t;
      				m=t.length();
      				for(j=0;j<m;j++){
      					if(t[j]>='A' && t[j]<='Z'){
      						s+=t[j];
      					}	
      				}
      				
      				mp.insert(make_pair(s,t));
      				
      				
      			}
      			
      			string match;
      			cin>>match;
      			m=match.length();
      			for(auto it=mp.begin();it!=mp.end();it++){
					     string q1=it->first;
					     
					     for(i=0;i<m;i++){
					     	if(q1[i]!=match[i])
					     	break;
					     }
					     
					     if(i==m){
					     	cout<<it->second<<" ";
					     	flag=1;
					     }
					      			
      			}
      			
      			if(flag==0)
      			cout<<"No match found";
      			
      			cout<<endl;
      			
      			
      				
      			
      		
      	}
      		
      		
    

      		
      		
      	
      				
    						
    	
}
     
     
