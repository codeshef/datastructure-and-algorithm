
// implement stack using queues

#include<bits/stdc++.h>
using namespace std;

queue<int>q1,q2,tmp;

void push(int data){
  
     q1.push(data);
}

int pop()
{
    int data;
    if(q1.empty())
        return INT_MIN;

    while(q1.size()>1)
    {
        q2.push(q1.front());
        q1.pop();
    }
    data=q1.front();
    q1.pop();
    tmp=q1;
    q1=q2;
    q2=tmp;

    return data;
}
int main(){

    push(50);
    push(40);
    push(30);
    push(20);

    cout<<pop() <<endl;
    cout<<pop() <<endl;
    cout<<pop() <<endl;
    cout<<pop() <<endl;
    //cout<<pop() << endl;
    return 0;


}

