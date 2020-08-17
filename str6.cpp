    #include <bits/stdc++.h> 
     
    using namespace std;
       
    int main()
    {
     
     
    		ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    	 	int i,j,n,m,cont=0,p,q,d,mn,mx,l,r,sum=0,z1,k,a,b;
      	
      		
      		cin>>k;
     	
      		
      		for(j=0;j<k;j++){
      			
      			string s,t="",s1;
      			cin>>s;
      			n=s.length();
      			
      			sum=0;
      			
      			for(i=0;i<n;i++){
      				if(i==n-1){
						switch(s[i]){
							case 'I':a=1;break;
							case 'V':a=5;break;
							case 'X':a=10;break;
							case 'L':a=50;break;
							case 'C':a=100;break;
							case 'D':a=500;break;
							case 'M':a=1000;break;
							}
							
							sum+=a;
					}else{
					
						switch(s[i]){
							case 'I':a=1;break;
							case 'V':a=5;break;
							case 'X':a=10;break;
							case 'L':a=50;break;
							case 'C':a=100;break;
							case 'D':a=500;break;
							case 'M':a=1000;break;
							}
						
								switch(s[i+1]){
										case 'I':b=1;break;
										case 'V':b=5;break;
										case 'X':b=10;break;
										case 'L':b=50;break;
										case 'C':b=100;break;
										case 'D':b=500;break;
										case 'M':b=1000;break;
							}
							
							if(a<b){
								sum+=(b-a);
								i++;				
							}else{
								sum+=a;
							}		
						
						
					}									
      			}
      			
      			cout<<sum<<endl;	
      	
      	}
      		
      		
    

      		
      		
      	
      				
    						
    	
}
     
     
