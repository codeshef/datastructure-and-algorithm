// check whether string consist of same alphabets
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
	
	int t,flag=0;
	long int len;
	cin>>t;
	
	while(t--){
		
		string s;
		cin>>s;
		len = s.size();
		
		for(int i=1;i<len;i++){
			
			if(s[i]!=s[0]){
				
				flag=0;
				
				break;
			}else 
			{ flag=1;
			}
		}
		
		if(flag==1){
			cout<<"YES"<<endl;
		}else{
			
			cout<<"NO"<<endl;
		}
		
		}
	
	
}
