#include <iostream>
#include <vector>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	vector<int> ax ;
	for ( int i = 1 ; i<=a ; i+=2){
		ax.push_back(i);
	}
	for(int i = 2 ; i<=a ; i+=2){
		ax.push_back(i);
	}
	cout<<ax[b-1];
}