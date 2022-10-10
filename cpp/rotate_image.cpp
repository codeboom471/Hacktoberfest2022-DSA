#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>sol;
        int n = matrix.size();
        for(int i =0;i<n;i++){
            vector<int>temp;
            for(int j= 0;j<n;j++){
                temp.push_back(matrix[j][i]);
            }
            reverse(temp.begin(),temp.end());
            sol.push_back(temp);
        }
        matrix = sol;
        return matrix;
    }
    
    
    
void print(vector<vector<int>>&matrix){
	for(auto x : matrix){
		for(auto y : x){
			cout<<y<<" ";
		}
		cout<<"\n";
	}
}

    
int main(){
vector<vector<int>>matrix;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
    	vector<int>temp;
    	for(int j = 0;j<n;j++){
    		int val ;
    		cin>>val;
    		temp.push_back(val);
		}
		matrix.push_back(temp);
	}
	cout<<"Before sort : \n";
	print(matrix);
	matrix = rotate(matrix);
	cout<<"After Sort : \n";
	print(matrix);
	return 0;
}
