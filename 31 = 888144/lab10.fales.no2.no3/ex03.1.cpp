
#include <iostream>     //              Language  C++                 //
#include <string.h>     //             Input Letter                   //
#include <iomanip>
using namespace std;
class Matrix {
	private :
		int data[200][200];
		int row;
		int col;
	public  :
		Matrix(){
			row=0;
			col=0;
		}
		Matrix(int row,int col){
			this->row=row;
			this->col=col;
		}
		Matrix plus(Matrix m){
		}
		Matrix subtract(Matrix m){
		}
		Matrix multiply(Matrix m){
		}
		Matrix trans(){
		}
		Matrix add (Matrix m){
			for(int i=0;i<row;i++){
				for(int j=0;j<col;j++){
					data[i][j]+=m.getValue(i,j);
				}
			}
		}
		void setValue(int row ,int col,int value){
			this->data[row][col] = value;
		}
		int getValue(int row, int col){
			return this->data[row][col];
		}
		void print(){
			for(int i = 0 ; i < row ; i++) {
				for(int j = 0 ; j < col ; j++) {
					cout << data[i][j] << " " ;
				}
				cout << endl;
			}
		}


};

int main (){
	int m,n;
	int value;
	cin >> m >> n;
	Matrix m1(m,n);

	for(int i = 0 ; i < m ; i++) {
		for(int j = 0 ; j < n ; j++) {
			cin >> value;
			m1.setValue(i, j ,value);
		}
	}
	Matrix m2(m, n);
	for(int i = 0 ; i < m ; i++) {
		for(int j = 0 ; j < n ; j++) {
			cin >> value;
			m2.setValue(i, j ,value);
		}
	}
	Matrix m3;
        m3 = m1.add(m2);
	m1.print();

	return 0;
}//END

