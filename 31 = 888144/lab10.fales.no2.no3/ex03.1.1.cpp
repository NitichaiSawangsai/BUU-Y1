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
		Matrix add(Matrix m){
			Matrix *sum=new Matrix(row,col);
			for(int i=0;i<row;i++){
				for(int j=0;j<col;j++){
					sum->setValue(i,j,data[i][j]+m.getValue(i,j));
				}
			}
			return *sum;
		}
		Matrix subtract(Matrix m){
			Matrix sum(row,col);
			for(int i=0;i<row;i++){
				for(int j=0;j<col;j++){
					sum.setValue(i,j,data[i][j]-m.getValue(i,j));
				}
			}
			return sum;
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
	Matrix m2(m, n);
	for(int i = 0 ; i < m ; i++) {
		for(int j = 0 ; j < n ; j++) {
			int value;
			cin >> value;
			m2.setValue(i, j , value);
		}
	}
        cout<<endl;
	Matrix m3 = m1.add(m2);
	m3.print();
	return 0;
}
