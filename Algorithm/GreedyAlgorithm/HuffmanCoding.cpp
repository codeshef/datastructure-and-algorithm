
#include<bits/stdc++.h>
using namespace std;

//Huffman tree node

struct tree{
	 
	 char data;
	 unsigned freq;
	 tree *left,*right;
	 
	 tree(char data,unsigned freq){
	 	
		 left = right = NULL;
		 this->data = data;
		 this->freq =freq; 
	 }
};


struct compare{
	
	bool operator()(tree*l,tree*r){
		
		return (l->freq > r->freq);
	}
};

void printCodes(struct tree*root,string str){
	
	if(!root)
	
	 return;
	 
	 if(root->data!='$')
	 cout<<root->data<<" : "<<str<<endl;
	 
	 printCodes(root->left,str+"0");
	 printCodes(root->right,str+"1");
	
	
}
 
void HuffmanCoding(char data[],int freq[],int size){
	
	struct tree *left,*right,*top;
	
	// create a min heap & insert all characters of data[]
	
	priority_queue<tree* ,vector<tree*>,compare> minHeap;
	
	for(int i=0;i<size;i++){
		
		minHeap.push(new tree(data[i],freq[i]));
	}
	
	//pop two minimum nodes
	
	while(minHeap.size()!=1){
		
		left = minHeap.top();
		
		 minHeap.pop();
		
		right = minHeap.top();
		
		minHeap.pop();
		
		top = new tree('$',left->freq+right->freq);
		top->left =left;
		top->right = right;
		
		minHeap.push(top);
		
	}
	
	printCodes(minHeap.top(),"");
}

int main(){
	
	char arr[] = {'a','b','c','d','e','f'};	
	int freq[] ={5,9,12,13,16,45};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	HuffmanCoding(arr,freq,size);
	
	return 0;
}
