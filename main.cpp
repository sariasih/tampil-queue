#include<iostream>
using namespace std;
#define MAX 8

struct Antrian {
    int data[MAX];
    int head;
    int tail;
};

Antrian antre;
void create();
bool isEmpty();
bool isFull();
void enqueue(int);
int dequeue();
void tampil();

int main(){

    cout<< "input nilai antrian :"<<endl;
    enqueue(10);
    cout<< "\n";
    enqueue(9);
    cout<< "\n";
    enqueue(8);
    cout<< "\n";
    enqueue(7);
    cout<< "\n";
    enqueue(6);
    cout<< "\n";
    tampil();


    return 0;
}

void create(){
    antre.head = antre.tail =-1;
}

bool isEmpty(){
    if(antre.tail == -1){
        return true;
    }
    else
    {
        return false;
    }
}

bool isFull(){
    if(antre.tail == MAX - 1){
        return true;
    }
    else
    {
        return false;
    }
}

void enqueue(int data){
    if(isEmpty()){
        antre.head = antre.tail = 0;
        antre.data[antre.tail] = data;
    }
    else if(isFull()){
        cout<< "Full!"<<endl;
    }

    else
    {
        antre.tail++;
        antre.data[antre.tail] = data;
         cout<<data<<" dimasukkan ke antrian";
    }

}

int dequeue(){
    int i;
    int e = antre.data[antre.head];
    if (!isEmpty()){
    for(i = antre.head;i < antre.tail - 1;i++){
        antre.data[i] = antre.data[i+1];
    }
    antre.tail--;
    }
    else{
        cout<< "data kosong!"<<endl;
    }
    return e;
}

void tampil(){
    if(isEmpty()==0){
        for(int i = antre.head;i <= antre.tail;i++){
            cout<<antre.data[i];
        }
    }
    else{
        cout<<"data kosong";
    }
}
