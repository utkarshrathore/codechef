/*
 * Racing Horses
 * Problem code: HORSES
 * http://www.codechef.com/problems/HORSES
 */

#include<stdio.h>
#include<stdlib.h>

void quick_sort(int a[], int low, int high) {
	int i,j,pivot,temp;
	if(low<high) {
		pivot = low;
		i = low;
		j = high;

		while(i<j) {
			while((a[i]<=a[pivot]) && (i<high)) i++;

			while(a[j]>a[pivot]) j--;

			if(i<j) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}

		temp = a[pivot];
		a[pivot] = a[j];
		a[j] = temp;

		quick_sort(a,low, j-1);
		quick_sort(a,j+1,high);
	}
}

int largest_consecutive_diff(int a[], int size) {
	int i,temp,diff = a[1]-a[0];
	for(i=1;i<size-1;i++) {
		temp = a[i+1]-a[i];
		if(temp<diff) {
			diff = temp;
		}
	}

	return diff;
}

int main() {
	int T,N,i,j,c;
	int *a;

	scanf("%d",&T);
	for(i=1;i<=T;i++) {
		scanf("%d",&N);
		int* a = (int*) malloc(sizeof(int)*N);

		for(j=0;j<N;j++) {
			scanf("%d",a+j);
		}

		quick_sort(a,0,N-1);
		printf("%d\n",largest_consecutive_diff(a,N));
	}
}
