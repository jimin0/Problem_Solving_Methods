#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, count;
	int maxage = -1, minage = 1000;
	int maxscore = -1, minscore = 1000;
	int maxagecnt = 0, minagecnt = 0, maxscorecnt = 0, minscorecnt = 0;
	int age[100], maxagegrp[100], minagegrp[100];
	int score[100], maxscoregrp[100], minscoregrp[100];

	// init data
	for (i = 0; i < 100; i++) {
		int tmp_age, tmp_score;
		printf("put age and score pair (end:-1,-1): ");
		scanf("%d %d", &tmp_age, &tmp_score);
		if (tmp_age == -1 && tmp_score == -1)
			break;
		age[i] = tmp_age; score[i] = tmp_score;
	}
	count = i;

	// find max age
	for (i = 0; i < count; i++) {
		if (age[i] > maxage) {
			maxage = age[i];              /* new max age found  */
			maxagecnt = 0;
			maxagegrp[maxagecnt] = i;  /* save the age index  */
		}
		else if (age[i] == maxage) {
			maxagecnt = maxagecnt + 1; /* tie max age found  */
			maxagegrp[maxagecnt] = i;  /* save the age index  */
		}
	}

	// find min ages
	for (i = 0; i < count; i++) {
		if (age[i] < minage) {
			minage = age[i];
			minagecnt = 0;
			minagegrp[minagecnt] = i;
		}
		else if (age[i] == minage) {
			minagecnt++;
			minagegrp[minagecnt] = i;
		}
	}

	// find max scores
	for (i = 0; i < count; i++) {
		if (score[i] > maxscore) {
			maxscore = score[i];
			maxscorecnt = 0;
			maxscoregrp[maxscorecnt] = i;
		}
		else if (score[i] == maxscore) {
			maxscorecnt++;
			maxscoregrp[maxscorecnt] = i;
		}
	}

	// find min scores
	for (i = 0; i < count; i++) {
		if (score[i] < minscore) {
			minscore = score[i];
			minscorecnt = 0;
			minscoregrp[minscorecnt] = i;
		}
		else if (score[i] == minscore) {
			minscorecnt++;
			minscoregrp[minscorecnt] = i;
		}
	}

	puts(" ");
	puts(" ");

	// print max ages
	for (i = 0; i <= maxagecnt; i = i + 1)
		printf("Oldest age(%d) score as %d\n", maxage, score[maxagegrp[i]]);

	 //print min ages
	 for (i = 0; i <= minagecnt; i++)
		 printf("Lowst age(%d) score as %d\n", minage, score[minagegrp[i]]);

	 //print max scores
	 for (i = 0; i <= maxscorecnt; i++)
		 printf("Highst score(%d) age as %d\n", maxscore, age[maxscoregrp[i]]);

	 //print min scores
	 for (i = 0; i <= minscorecnt; i++)
		 printf("Lowest score(%d) age as %d\n", minscore, age[minscoregrp[i]]);

	return 0;
}