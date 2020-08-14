#include <iostream>
using namespace std;

void recurSelectionSort(int a[], int n) {
	int i,j;
	for(int i=0;i<n;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[i]<a[min]){
				min=j;
			int temp=a[i];
			a[i]=a[min];
			a[min]=temp;
			}
		}
	}
}

int main()
{
    int a[] = {3, 1, 5, 2, 7, 0};
    int n = sizeof(a)/sizeof(a[0]);
    recurSelectionSort(a, n);
    for (int i = 0; i<n ; i++) cout << a[i] << " ";
    cout << endl;
    return 0;
}
