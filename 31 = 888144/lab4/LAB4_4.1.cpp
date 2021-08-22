#include <iostream>
using namespace std;

bool taYang(int arr[100][100],int row,int col);

int main(){
	int arr[100][100],row,col;
	cin >> row >> col;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin >> arr[i][j];
		}
	}

	if(taYang(arr,row,col)){
		cout << "True" << endl;
	}
		else
		cout << "False" << endl;
}

bool taYang(int arr[100][100],int row,int col){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){	
			if(i<j){
				if(i!=j){
					if(arr[i][j] != 0){
					//cout << "False" << endl;
						return false;
					}
				}	
			}else{
				if(i!=j){
					if(arr[i][j] != 0){
					//cout << "False" << endl;
						return false;
					}
				}
			}
		}
	}
	return true;
}
