// Given three strings ‘str’, ‘oldW’ and ‘newW’. The task is find all occurrences of the word ‘oldW’ and replace then with word ‘newW’.

#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
	
	int t,len,pos;
	cin>>t;
	
	while(t--){

	string str,oldW,newW;
	
	cin.ignore();
	getline(cin,str);
	cin>>oldW>>newW;
	
	len =oldW.size();
	pos = str.find(oldW);
	
	while(pos!=-1){
		
		str.replace(pos,len,newW);
		pos=str.find(oldW);
	}
	
	cout<<str<<endl;
	str.clear();
	oldW.clear();
	newW.clear();	
	}
	 
  
	}
