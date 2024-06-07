#include <iostream>
using namespace std;

int main(){
	int n = 6;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]>arr[i+1]){
			for(int ii=i;ii<n;ii++){
				if(arr[ii]>arr[ii+1]){
					int tmp = arr[ii+1];
					arr[ii+1] = arr[ii];
					arr[ii] = tmp;
				}
			}
		}
	}
	
	
	
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
}

/*
1000
5000
2000
20000
100000
50000
*/