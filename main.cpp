#include<iostream>
#include<windows.h>
using namespace std;

int main(){

 int hour,minute,second;
 cout<<"Hour: ";
 cin>>hour;
 system("cls");
 cout<<"Minute: ";
 cin>>minute;
 system("cls");
 cout<<"Second: ";
 cin>>second;
 system("cls");

 while(true){

    Sleep(1000);
    second=second+1;
    if (second==60){
        second=0;
        minute=minute+1;
        if(minute==60){
        hour=hour+1;
            if (hour==24){
                second=0;
                minute=0;
                hour=0;

                        }
                    }
                }
            system("cls");
            cout<<hour<<":"<<minute<<":"<<second<<endl;

            }


}
