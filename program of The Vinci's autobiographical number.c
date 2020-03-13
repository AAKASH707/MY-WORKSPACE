#include<iostream>
using namespace std;
int main()
{
int arr[10];
int temp,n,rem;
for(int j=0;j<10;j++)
arr[j]=0;
cout<<"Enter the number"<<endl;
cin>>n;
temp=n;
while(temp>0)
{
rem=temp%10;
for(int k=0;k<10;k++)
{
if(rem==k)
arr[k]++;
}
temp=temp/10;
}
cout<<"ZERO"<<" "<<arr[0]<<" "<<"ONE"<<" "<<arr[1]<<" "<<"TWO"<<" "<<arr[2]<<" "<<"THREE"<<" "<<arr[3]<<" "<<"FOUR"<<" "<<arr[4]<<" "<<"FIVE"<<" "<<arr[5]<<" "<<"SIX"<<" "<<arr[6]<<" "<<"SEVEN"<<" "<<arr[7]<<" "<<"EIGHT"<<" "<<arr[8]<<" "<<"NINE"<<" "<<arr[9]<<endl;
return 0;
}
