#include <iostream>
#include <math.h>
using namespace std;
float buy(float x,float y,int z);//z - количество покупок.

float buy(float x,float y,int z){
cout<<"Purchase price: "<<(z*x)+(z*y)<<endl;

}

int main(){
cout <<"*********"<<endl;
cout <<"*       "<<endl;
cout <<"*********"<<endl;
cout <<"        *"<<endl;
cout <<"*********"<<endl;

//double a,h;
//cout<<"Please,enter a = ";
//cin>>a;
//cout<<"Please,enter h = ";
//cin>>h;
//double p=a*4;double s=a*h;
//cout<<"Perimeter="<<p<<endl;
//cout<<"Square="<<s<<endl;

//double x=3.6;
//double answ=exp(x-2)+fabs(sin(x))-pow(x,4)*cos(1/x);
//cout<<answ;

//int a;
//double b;
//cout<<"Make a choise:"<<endl;cout<<"Tea spoon - 1"<<endl;cout<<"Tablespoon - 2"<<endl;cout<<"Mug - 3"<<endl;
//cin>>a;
//cout<<"Please enter quantity: ";
//cin>>b;
//if(a==1){
    //cout<<"in a tablespoon: "<<b*3<<endl;cout<<"in a mug: "<<b*48;
//}
//if(a==2){
  // cout<<"in a tea spoon: "<<b/3<<endl;cout<<"in a mug: "<<b*16;
//}
//if(a==3){
    //cout<<"in a tea spoon: "<<b/48<<endl;cout<<"in a tablespoon: "<<b/16;
//}

//double n;
//cout<<"Insert the number:  "<<endl;
//cin>>n;
//cout<<"Square of your number: "<<pow(n,2)<<endl;
//cout<<"Cube of your number: "<<pow(n,3);

float z1,z2;
cout<<"Enter the price of one kilogram of sweets: "<<endl;
cin>>z1;
cout<<"Enter the price of one kilogram of cookies: "<<endl;
cin>>z2;
buy(0.3,0.4,1);
buy(2,1.8,3);





return 0;
}

