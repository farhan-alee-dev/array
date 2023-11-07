//farhan ali
//task 1
#include <iostream>
using namespace std;
int main(){
 int size,sum=0,largest=0,smallest=0;
 float avg;
	cout<<"enter the size of array : ";cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cout<<endl<<"enter the element of index "<<i<<" : ";cin>>arr[i];
		sum+=arr[i];
		}
	largest=arr[0];
	smallest = arr[0];
for(int i=0;i<size;i++){
	if(arr[i]>largest){
			largest=arr[i];
		}
	if(arr[i]<smallest){
			smallest=arr[i];
		}
}
cout<<endl<<"the sum of total element is : "<<sum;
avg=(float) sum/size
;
cout<<endl<<"the average of total element is : "<<avg;
cout<<endl<<"the largest number  is : "<<largest;
cout<<endl<<"the smallest  number  is : "<<smallest;


return 0;
}



