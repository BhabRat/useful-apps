#include<bits/stdc++.h>

using namespace std;



int main()
{
	//For two sets of die with l sides with the inputs given by user,
	//find the probability of getting a sum n when two die are flipped.
	//The first set of input is for the first dice and then the second dice.
	//Note: Both die will have l sides and it will take input given.
	//Input: l, n, d1, d2
	//Output: If probability is x/y, then given first x then y.
	int n;
	int k=0;
	int l; 
	

	cin>>l;
	cin>>n;


	int d1[l]; int d2[l];
	for (int i=0; i<l; i++){
		cin>>d1[i];
	}


	for (int i=0; i<l; i++){
		cin>>d2[i];
	}


	for (int i=0; i<l; i++){
		for (int j=0; j<l; j++){
			if (d1[i]+d2[j]==n){
				k=k+1;
			}
			else {continue;}

		}
	}
	cout<<k<<endl;
	cout<<l*l;



}