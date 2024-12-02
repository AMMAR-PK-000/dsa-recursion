#include <iostream>
using namespace std;

//int sum(int n){
//
//	if (n == 0) {
//		return 0;
//	}
//	int prevsum=sum(n - 1);
//	return n + prevsum;
//}

//int power(int n, int p) {
//	if (p == 0) {
//		return 1;
//	}
//	int prevpower = power(n,p-1);
//	return n*prevpower;
//}

//int fibonnoci( int n) {
//	
//	if (n==0||n==1){
//		return n;
//	}
//	return fibonnoci(n-1)+fibonnoci(n-2);
//}
//int main() {
//	int n;
//	cin >>n;
//	cout<<endl<<fibonnoci(n);
//	return 0;
//}
 bool sortedarray(int arr[], int n) {
     if (n == 1) {
         return true;
    }
     bool restarray = sortedarray(arr + 1, n - 1);
     return (arr[0] < arr[1] && restarray);
 }
int main() {
   int  arr[] = { 1,3,2,4,5 };
   cout << sortedarray(arr, 5);
}