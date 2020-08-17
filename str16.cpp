    /*
    	Question Link-
    	https://practice.geeksforgeeks.org/problems/string-ignorance/0
     
    */
    
    
    #include <bits/stdc++.h> 
     
    using namespace std;
       
   int main()
 {
     
     
    		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    	 	int i,j,n,m,cont=0,p,q,d,mn,mx,l,r,sum=0,z1,k,a,b,diff,x,z;
      	
      		
      		cin >> k;
     	
     			cin.ignore();
      		for(d=0;d<k;d++){
      				
      				
      			string s,t="";	
      			getline(cin,s);
      			n=s.length();
      			int arr[256]={0};
      			for(i=0;i<n;i++){
      				if(s[i]==' '){
      					if(arr[s[i]]==0){
      					t+=' ';
      					arr[s[i]]=1;
      					}else
      					arr[s[i]]=0;
      				
      				}else if(s[i]=='.'){
      					if(arr[s[i]]==0){
      					t+='.';
      					arr[s[i]]=1;
      					}else
      					arr[s[i]]=0;
      				
      				}else if(s[i]>=65 && s[i]<=90){
      						if(arr[s[i]]==0 && arr[s[i]+32]==0){
      							t+=s[i];
      							arr[s[i]]=1;
      							arr[s[i]+32]=1;
      						}else{
      							arr[s[i]]=0;
      							arr[s[i]+32]=0;
      							}
      				
      				}else{
      					if(arr[s[i]]==0 && arr[s[i]-32]==0){
      							t+=s[i];
      							arr[s[i]]=1;
      							arr[s[i]-32]=1;
      						}else{
      							arr[s[i]]=0;
      							arr[s[i]-32]=0;
      							}
      				}
      				
      			}
      			
      			cout<<t<<endl;
      			
      				
      			
      		
      	}
      		
      		
    

      		
      		
      	
      				
    						
    	
}
     
     
