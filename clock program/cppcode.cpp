#include<iostream>
#include<unistd.h>
using namespace std;

int main(){
    int h, m, s, err = 0;

    do{
        cout<<"Enter hour: "; cin>>h;
        cout<<"Enter minutes: "; cin>>m;
        cout<<"Enter seconds: "; cin>>s;
        if (h<24 && m<60 && s<60) err++;
        system("clear");
    } while (err == 0);
while (True){
    system("clear");
    cout<<h<<" : "<<m<<" : "<<s<<endl; 
    s++;
    if(s == 60){
        m++;
        s=0;
    }
    if(m == 60){
        h++;
        m = 0;
    }
    if(h == 24)
    h = 0;
    sleep(1);
}
}
