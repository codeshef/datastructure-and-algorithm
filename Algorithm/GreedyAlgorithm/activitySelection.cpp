// Activity Selection Problem

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

struct Activity{
	
	int start,finish;
	
};


bool comp(Activity s1,Activity s2){
	
	return(s1.finish < s2.finish);
}

void ActivitySelection(Activity arr[],int n){
	
	sort(arr,arr+n,comp);
	
	cout<<"List of activites selected : "<<endl;
	
	 int i = 0;
    
	cout << "(" << arr[i].start << ", " << arr[i].finish << "), ";
 
    for (int j = 1; j < n; j++)
    {
      
      if (arr[j].start >= arr[i].finish)
      {
          cout << "(" << arr[j].start << ", "
              << arr[j].finish << "), ";
          i = j;
      }
   
    }
    
	
}
	
	


int main(){
	
	 Activity arr[] = {{5, 9}, {1, 2}, {3, 4}, {0, 6}, {5, 7}, {8, 9}};
      
	  int n = sizeof(arr)/sizeof(arr[0]);
      
      ActivitySelection(arr,n);
      
      return 0;
	
}
