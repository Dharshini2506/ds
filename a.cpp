#include<iostrean>
using namespace std;
int main(){
  int yr;
  cin>>yr;
  if((yr%4==0 && yr%100!=0)||yr%400==0)
  {
    cout<<"Leap year";
  }
  else{
    cout<<"Not a leap year";
  }
  return o;
}
