#include<iostream>
using namespace std;
# define n 20

class queue{
    int* arr;
    int front;
    int back;

    public:
    queue(){
        arr = new int [n];
        front =-1;
        back = -1;
    }

    void push(int x){
        if (back == n-1){
            cout<<"Queue overflow"<<endl;
            return;
        }
        back++;
        arr[back] = x;
        if(front == -1){
            front++;
        }
    }

    void pop(){
        if(front == -1 || front > back){
            cout<<"No elements in queue"<<endl;
            return;
        }
        front++;
    }

    int peak(){
        if(front == -1 || front > back){
            cout<<"No elements in queue"<<endl;
            return -1;
        }
        return arr[front];
    }

    bool empty(){
        if(front == -1 || front > back){
            return true;
        }
        return false;
    }
};

int main(){
    queue que;
    cout<<que.empty();
    que.push(10);
    que.push(20);
    que.push(30);
    cout<<que.peak();
    cout<<endl<<que.empty();
    cout<<que.peak();
    que.pop();
    cout<<que.peak();
    return 0;
}