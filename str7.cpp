    #include <bits/stdc++.h> 
     
    using namespace std;
       
    int main()
    {
     
     
    		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    	 	int i,j,n,m,cont=0,p,q,d,mn,mx,l,r,sum=0,z1,k,a,b;
      	
      		
      		cin>>k;
     	
      		
      		for(j=0;j<k;j++){
      			
      			string s,t,s1;
      			cin>>s>>t;
      			
      			int arr[26]={0},brr[26]={0};
      			
      			n=s.length();
      			
      			for(i=0;i<n;i++){
      				arr[s[i]-'a']++;
      			
      			
      	}
      	
      	
      			for(i=0;i<t.length();i++)
      			brr[t[i]-'a']++;
      			
      			int flag=0;
      			
      			for(i=0;i<26;i++){
      				if(arr[i]!=brr[i])
      				{
      					flag=1;
      					break;
      				}
      			}
      			
      			if(flag==1)
      				cout<<"NO"<<endl;
      			else
      			cout<<"YES"<<endl;	
      				
      	}
      		
      		
    

      		
      		
      	
      				
    						
    	
}
     
     
