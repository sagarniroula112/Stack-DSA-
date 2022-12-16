#include<iostream>
#include<stdlib.h>
#include<conio.h>
#define MAXSIZE 5

using namespace std;

class stack{
    int bos, s[MAXSIZE];

    public:
        stack(){
            bos = 0;
        }

        void push(){
            if(bos == MAXSIZE){
                cout<<"Stack Overflow!"<<endl;
            }
            else{
                for (int i=bos;i>0;i--){
                    s[i] = s[i-1];
                }
                cout<<"Enter the item you want to push: ";
                cin>>s[0];
                bos++;
            }
        }

        void pop(){
            if(bos == 0){
                cout<<"Stack is empty."<<endl;
            }
            else{
                cout<<"Data is:"<<s[0]<<endl;
                bos--;
                for(int i=0;i<bos;i++){
                    s[i] = s[i+1];
                }
            }
        }

        void display(){
            if(bos == 0){
                cout<<"Stack is empty!"<<endl;
            }
            else{
                cout<<"Stack data are:"<<endl;
                for(int i=0;i<bos;i++){
                    cout<<s[i]<<" ";
                }
            }
        }
};

int main(){
    stack s1;
    int choice;
    bool flag = true;
    // x:
    while(flag){
    cout<<endl<<"MENU"<<endl;
    cout<<"1. Push Item"<<endl;
    cout<<"2. Pop Item"<<endl;
    cout<<"3. Display"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<endl<<"Enter your choice:"<<endl;
    cin>>choice;

    switch(choice){
        case 1:
            s1.push();
            break;
            // goto x;
        case 2:
            s1.pop();
            getch();
            break;
            // goto x;
        case 3:
            s1.display();
            getch();
            break;
            // goto x;
        case 4:
            flag = false;
            exit(1);
    }
    }
    return 0;
}
