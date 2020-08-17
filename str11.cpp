    #include <bits/stdc++.h> 
     
    using namespace std;
       
   int main()
 {
     
     
    		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    	 	int i,j,n,m,cont=0,p,q,d,mn,mx,l,r,sum=0,z1,k,a,b,diff,x,z;
      	
      		
      		cin >> k;
     	
     		
      		for(d=0;d<k;d++){
      				
      			string s,t,s1;
      		
      			
      	
      			cin>>s;
      		
      			n=s.length();
      			z=0;
      			sum=0;
      			int flag=0;
      			x=1;
      			
      			if(s[0]=='-')
      			{
      			    z=1;
      			    flag=-1;
      			}
      			for(i=n-1;i>=z;i--){
      					if(s[i]>='0' && s[i]<='9'){
      						sum+=(x*(s[i]-'0'));
      					}else{
      						flag=1;
      						break;
      					}
      					x*=10;
      			}
      		
      			if(flag==0)
      			cout<<sum<<endl;
      			else if(flag==-1)
      				cout<<-sum<<endl;
      			else
      			cout<<-1<<endl;
      			
      	}
      		
      		
    

      		
      		
      	
      				
    						
    	
}
     
     
