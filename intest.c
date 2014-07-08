/*
 * Enormous Input Test
 * Problem code: INTEST
 * http://www.codechef.com/problems/INTEST
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n,k,i,c=0;
	scanf("%d %d",&n,&k);

	int* nums = (int*) malloc(sizeof(int)*n);

	for(i=0;i<n;i++) {
		scanf("%d", (nums+i));
	}

	for(i=0;i<n;i++) {
		if(*(nums+i)%k == 0) c++;
	}

	printf("%d",c);
	return 0;
}
