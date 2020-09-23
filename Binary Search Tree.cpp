#include <stdio.h>

int binarySearch(int array[], int size, int searchValue){
	int low = 0;
	int high = size - 1;
	
	int mid;
	while(low <= high){
		mid = (low + high) / 2;
		if(searchValue == array[mid]){
			return mid;
		} else if(searchValue > array[mid]){
			low = mid + 1;
		} else{
			high = mid - 1;
		}
	}
	return -1;
}

int main(){
	
	int a[50];
	int userValue;
	int n;
	
	printf("Jumlah angka yang ingin diinput: ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		printf("Data ke-%d: ", i);
		scanf("%d", &a[i]);
	}
	
	printf("Angka yang ingin dicari: \n");
	scanf("%d", &userValue);
	
	int result = binarySearch(a, n, userValue);
	if(result >= 0){
		printf("Nomor %d ditemukan di indeks %d\n", a[result], result-1);
	} else{
		printf("Nomor %d tidak ditemukan\n", userValue);
	}
	
	return 0;
}
