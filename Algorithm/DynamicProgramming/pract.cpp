// Longest substring without repeating characters

#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int res(string str){
	
	
	int n = str.length();
	vector<int> visited(256,-1);
	int maxLen=0,start=-1;
	
	for(int i=0;i<n;i++){
		
		 if(visited[str[i]]>start)
		   start = visited[str[i]];
		 visited[str[i]]=i;
		 maxLen = max(maxLen,i-start);
		  
	}
	
	return maxLen;
	
	
}

int main(){
	
	string str;
	cin>>str;
	
	int len = res(str);
	
	 cout<<len<<endl;
	
	
}
