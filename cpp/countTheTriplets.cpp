#include <bits/stdc++.h>
using namespace std;

/*** Idea for solving the question:
	First, find the max element in the array, then make an array of length maxElement+1.
	Second, put the 4 cases into consideration and find the respective Number of triplets that exist using the counts of each element.
***/

int main(int arr, int n) {
	int max = 0;
	for(int i=0;i<n;i++) {
		if(arr[i]>max) {
			max == arr[i];
		}
	}
	int maxElement = max;
	int count[maxElement+1];
	
	int totalWays = 0;
	
	// for 0, 0, 0
	totalWays += count[0]*(count[0]-1)*(count[0]-2)/6;
	
	// for 0, x, x
	for(int j=0;j<(maxElement+1);j++) {
		totalways += count[0]*count[j]*(count[j]-1)/2;
	}
	
	// for x, x, 2x
	for(int j=0;j<(maxElement+1);j++) {
		totalways += count[j]*(count[j]-1)/(2*count[2*j]);
	}
	
	// for x, y, x+y
	for(int i=0;i<(maxElement+1);i++) {
		for(int j=i+1;i+j<(maxElement+1);j++) {
			totalways += count[i]*(count[j)*count[i+j];
		}
	}
	return totalWays;
}
