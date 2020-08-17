    /*
    	Question Link-
    https://practice.geeksforgeeks.org/problems/smallest-window-in-a-string-containing-all-the-characters-of-another-string/0
     
    */
    
    
    #include <bits/stdc++.h> 
     
    using namespace std;
       
   int main()
 {
     
     
    		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    	 	int i,j,n,m,cont=0,p,q,d,mn,mx,l,r,sum=0,z1,k,a,b,diff,x,z;
      	
      		
      		cin >> k;
     	
      		for(d=0;d<k;d++){
      				
      				
      			string s,t="";	
      			cin>>s;
      			n=s.length();
      			cin>>t;
      			m=t.length();
      			
      		
      			int arr[256]={0},brr[256]={0};
      			
      			for(i=0;i<m;i++){
      				brr[t[i]]++;	
      			}
      			
      			int start=0,id=-1;
      			mn=INT_MAX;
      			
      			cont=0;
      			for(i=0;i<n;i++){
      				arr[s[i]]++;
      				
      				if(brr[s[i]]!=0 && arr[s[i]]<=brr[s[i]]){
      					cont++;					
      				
      				}
      				
      				if(cont==m){
      					
      					while(arr[s[start]]>brr[s[start]])
      					{
      						arr[s[start]]--;
      						start++;
      					}	
      					
      					z=i-start+1;
      					
      					if(z<mn){
      					id=start;
      					mn=z;
      					
      					}
      				
      				}			
      					   					
      		}
      
      		if(id==-1)
      		cout<<-1<<endl;
      		else{
      			for(i=id;i<id+mn;i++)
      			{
					cout<<s[i];      			
      			}
      			
      			cout<<endl;
      		
      		}
      		
      		
      			
      				
      			
      		
      	}
      		
      		
    

      		
      		
      	
      				
    						
    	
}
     
     
