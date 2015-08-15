/*~~~~~~~~~~~~~~~~~~*
 *                  *
 * $Dollar Akshay$  *
 *                  *
 *~~~~~~~~~~~~~~~~~~*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include <assert.h>
#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

#define sp system("pause")
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define REP(i,n) FOR(i,0,(int)n-1)
#define MS0(x) memset(x,0,sizeof(x))
#define MS1(x) memset(x,1,sizeof(x))
#define SORT(a,n) sort(begin(a),begin(a)+n)
#define REV(a,n) reverse(begin(a),begin(a)+n)
#define ll long long
#define MOD 1000000007

int main(){

	srand(time(NULL));
	FILE *fp = fopen("testcase.txt", "w");

	int n = 20,m =100;
	fprintf(fp, "%d %d\n",n, m);
	REP(i, n)
		fprintf(fp, "%d ", rand()%7+1);
	fprintf(fp, "\n");
	REP(i, m){
		int l = rand()%(n/2);
		int r = min(n-1, l+rand()%(n/2));
		fprintf(fp, "%d %d\n", l+1, r+1);
	}

	fclose(fp);
	printf("Done\n");
	sp;
	return 0;
}

//