#include <iostream>
using namespace std;
int main(){
    cout<<"CURRENCY CONVERTER"<<endl;
  cout<<"Enter amount in INR"<<endl;
  float amt;
  cin>>amt;
  cout<<"Choose currency to be changed in "<<endl;
  cout<<"1)USD\n2)Euros\n3)AUD"<<endl;
  int opt;
  cin>>opt;
  float cnvrt;
  switch(opt){
    case 1: cnvrt = 0.012*amt;
    cout<<cnvrt <<"USD";
    break;

    case 2: cnvrt = 0.00994877*amt;
    cout<<cnvrt<<"Euro";
    break;

    case 3: cnvrt = 0.018*amt;
    cout<<cnvrt<<"AUD";
    break;

    default: (cout<<"enter valid option");
  }
	return 0;
}
