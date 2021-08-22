#include<iostream>
#include<iomanip>
using namespace std;
class Matrix{
	private:
		int **data;
		int row;
		int col;
	public:
		Matrix(){
			row=0;
			col=0;
		}
		Matrix(int r, int c){
			row=r;
			col=c;
			data = new int* [row];
			for(int i=0;i<row;i++){
				data[i] = new int[col];
			}
		}
		void setValue(int row, int col, int value){
			data[row][col]=value;
		}
		int getValue(int row, int col){
			return data[row][col];
		}
		void print(){
			for(int i=0;i<row;i++){
				for(int j=0;j<col;j++){
					cout << data[i][j] << " ";
				}
				cout << endl;
			}
		}
		Matrix mul(Matrix m){
			Matrix *sum=new Matrix(row,m.col);
			int sumAB=0;
			for(int i=0;i<row;i++){
				for(int j=0;j<m.col;j++){
					sumAB=0;
					for(int k=0;k<col;k++){
						sumAB+=data[i][k]*m.getValue(k,j);
					}
					sum->setValue(i,j,sumAB);
				}
			}
			return *sum;
		}
		~Matrix(){
			delete [] data;
		}
};

int main(){
	int m,n;
	cin >> m >> n;
	Matrix m1(m, n);
	for(int i = 0 ; i < m ; i++) {
		for(int j = 0 ; j < n ; j++) {
			int value;
			cin >> value;
			m1.setValue(i, j , value);
		}
	}
	Matrix m2(n, m);
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < m ; j++) {
			int value;
			cin >> value;
			m2.setValue(i, j , value);
		}
	}
	Matrix m3 = m1.mul(m2);
	m3.print();
	return 0;
}
