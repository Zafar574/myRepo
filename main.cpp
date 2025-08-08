#include <bits/stdc++.h>
using namespace std;

void bubblesort(int n){
	//
}

void quicksort(int n){
	//
}
void mergesort(){
	//
}
void insertionsort(){
	//
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	vector<string> ans;
	while(t--){
	    int n;
	    cin>>n;
	    set<int> arr1;
	    set<int> arr2;
	    for(int i=0;i<n;i++){
	        int v;
	        cin>>v;
	        arr1.insert(v);
	    }
	    for(int i=0;i<n;i++){
	        int v;
	        cin>>v;
	        arr2.insert(v);
	    }
	    int s1=arr1.size();
	    int s2=arr2.size();
	    if(s1+s2>=4){
	        ans.push_back("YES");
	    }
	    else{
	        ans.push_back("NO");
	    }
	}
	for(auto it:ans){
	    cout<<it<<endl;
	}
	cout<<"COMMIT"<<endl;
	cout<<"COMMIT"<<endl;
	cout<<"COMMIT"<<endl;
	cout<<"COMMIT"<<endl;
	cout<<"COMMIT"<<endl;

}
