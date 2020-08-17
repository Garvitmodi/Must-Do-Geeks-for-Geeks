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
      		
      			int arr[26]={0};
      		
      			mx=0;
      		
      			for(i=0;i<26;i++)
      			arr[i]=-1;
      			j=0;
      			for(i=0;i<n;i++){
      				j=max(j,arr[s[i]-'a']+1);
      				
      				mx=max(mx,i-j+1);
      				arr[s[i]-'a']=i;
      			}
      		
      			
      			cout<<mx<<endl;
      			
      	}
      		
      		
    

      		
      		
      	
      				
    						
    	
}
     
     
