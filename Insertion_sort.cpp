#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
		}
	/// arr[] = {5,2,4,6,1,3}
	for(int i=1; i<n; i++){
		int current = arr[i];//1. current = arr[1] => current = 2
		// 2. current = arr[2]
		// current = 4
		//3. current = arr[3]
		// current = 6
		// 4. current = arr[4]
		// current = 1
		int j = i-1;//1. j = i-1 => j=0
		// 2. j = i -1 => j = 1
		// 3. j = 3 -1 => j=2
		// 4. j = 4-1 => j= 3
		//2. j-- > j=0
		// arr[0] !> current and loop will not work.
		while(arr[j]>current && j>=0){//1. arr[0]= 5 && j>=0
			// 5>2 && 0>=0
			//2. arr[1] = 5 && j>=0
			// 5>4 && 1>=0
			//4. (arr[3] = 6 )> (current=1) j=3 --> true
			// (arr[2] = 5) > (current =1) j =2 --> true
			arr[j+1] = arr[j];
			// 1. arr[1] = arr[0]
			// arr[1] = 5
			//2. arr[2] = arr[1]
			// arr[2] = 5
			// 4. arr[4] = 6
			// arr[2+1] = 5
			j--;
			// 4. j = 3-1 => j = 2
			// j = 2-1 => j = 1
			}
		arr[j+1] = current;
		// arr[0] = 2
		// arr[1] = 4
		//arr[2] = 5
		// arr[3] = 6
		// after i = 4th operation the array will be updated :
		// arr[0] = 1
		// arr[1] = 2
		// arr[2] = 4
		// arr[3] = 5
		// arr[4] = 6
		}
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
		}
	return 0;
}
