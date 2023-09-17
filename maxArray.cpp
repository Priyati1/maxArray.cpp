#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n,max=INT_MIN;
	int arr[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];

		}
	}
	cout<<max<<endl;
	return 0;
}