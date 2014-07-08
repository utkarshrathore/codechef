/*
 * Count Substrings
 * Problem code: CSUB
 * http://www.codechef.com/JULY14/problems/CSUB
 */

#include<stdio.h>
#include<stdlib.h>

int count_1s(char s[], int len) {
				int i=0,c=0;
				while(i<len) {
								if(s[i++]=='1') c++;
				}

				return c;
}

int main() {
				int T,N,i,j,temp,count;
				scanf("%d",&T);
				int* sol = (int*) malloc(sizeof(int)*T);
	
				for(i=0;i<T;i++) {
								count = 0;
								scanf("%d",&N);
								char *s = (char*) malloc(sizeof(char)*(N+1));
								scanf("%s",s);
								temp = count_1s(s,N);
								for(j=0;j<N;j++) {
												if(s[j]=='1') {
																count = count+temp;
																temp--;
												}
								}

								sol[i]=count;
				}

				for(i=0;i<T;i++) {
								printf("%d\n",sol[i]);
				}

				return 0;
}




