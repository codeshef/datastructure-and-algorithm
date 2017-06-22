//Bitmasking and Dynamic Programming
/*There 100 different types of caps each having a unique id from 1 to 100. 
Also, there ‘n’ persons each having a collection of variable number of caps. 
One day all of these persons decide to go in a party wearing a cap but to look unique they decided that none them will wear the same type of cap. 
So, count the total number of arrangements or ways such that none of them is wearing same type of cap.
Since, number of ways could be large, so output modulo 1000000007
*/

#include<bits/stdc++.h>
#define MOD 1000000007;
using namespace std;
// capList[i]'th  vector contains the list of persons havins a cap with id i
// id is between 1 to 100 
vector<int> capList[101];

// dp[i][j] ,i denotes the mask i.e.,it tells that how many and which persons are
//wearing cap.j denotes the first j caps used
int dp[1025][101];
// This is used for base case,ith has all the N bits set
int allmask;

//Mask : set of persons 
//i : cap id (1-100 in this case)

long long int countWayUtil(int mask,int i){
	
	// if all persons are wearing cap
	 if(mask==allmask)
	     return 1; // only one possible way
	
	// if no of caps less than number of persons
    	if(i > 100)
	      return 0; 
    // if we have already solved this subproblem
      if(dp[mask][i]!=-1)
        return dp[mask][i];
    // Ways ,when we don't include his cap in our arrangement
    long long int ways =countWayUtil(mask,i+1);
    // finding total number of persons having cap with id i
    int size = capList[i].size();
    // Assign one by one ith cap to all possible persons
    for(int j=0;j<size;j++){
    	// if person is already wearing a cap and mask is set to 1;
    	if(mask & (1 << capList[i][j]))
    	   continue;
    	   // otherwise assign him/her a cap and recur for remaining
    	   else
    	   ways+=countWayUtil(mask | (1 << capList[i][j]),i+1);
    	   ways%=MOD;
	}
	  return dp[mask][i]=ways;
	  
}

void countWays(int n){
	
	string temp,str;
	int x;
	getline(cin,str);
	for(int i=0;i<n;i++){
		
		getline(cin,str);
		
		stringstream ss(str);// set the content of buffer with the str
		// while there is no end of line
		while(ss >> temp){
			
			stringstream s;
			s << temp; // add a string to the stringstream object
			s  >> x;   // read something from the stringstream object
			// add the ith person in the list if id x
			capList[x].push_back(i);
			
		}
		
	}
	
	// All mask is used to check of all persons included or not
	allmask =(1 << n) -1;
	// initialize all enteries in dp as -1
	memset(dp,-1,sizeof dp);
	// call  function count ways
	  cout<<countWayUtil(0,1)<<endl;
}
int main(){
	int n;
	cin>>n;
	countWays(n);
	return 0;
	
}
