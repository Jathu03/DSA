#include<iostream>
#define SIZE 5
int top=-1;
using namespace std;

void push(int S[SIZE], int x){
    top+=1;
    if (top >= SIZE){
        cout<<"Stack overflow";
        top-=1;
    }
    else {
        
        S[top] = x;
    }
}

int pop(int S[SIZE]){
    
    if (top<0){
        cout<<" Stack underflow";
    }
    else{
        top-=1;
        return S[top+1];
    }
}
int main(){
    int A[5];
    push(A,3);
    push(A,1);
    push (A,0);
    push(A,-1);
    push(A,11);
    push(A,11);
    pop(A);
    pop(A);
    pop(A);
    pop(A);
    pop(A);
    pop(A);
    
    return 0;
}