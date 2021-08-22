#include<iostream>
#include<iomanip>
using namespace std;
class Matrix{
	private:
		//int **data;
		int data[100][100];
		int row;
		int col;
	public:
		Matrix(){
			row=0;
			col=0;
		}
		Matrix(int row, int col){
			this->row=row;
			this->col=col;
/*			    data = new int* [row];
			    for(int i=0;i<row;i++){
			    data[i] = new int[col];
			    }
*/		 }
			void setValue(int row, int col, int value){
				this->data[row][col]=value;
			}
			int getValue(int row, int col){
				return this->data[row][col];
			}
			void print(){
				for(int i=0;i<row;i++){
					for(int j=0;j<col;j++){
						cout << data[i][j] << " ";
					}
					cout << endl;
				}
			}
			Matrix plus(Matrix m){
				for(int i=0;i<row;i++){
					for(int j=0;j<col;j++){
						data[i][j]+=m.getValue(i,j);
					}
				}
			}
			Matrix subtract(Matrix m){
				for(int i=0;i<row;i++){
					for(int j=0;j<col;j++){
						data[i][j]-=m.getValue(i,j);
					}
				}
			}
			Matrix mul(Matrix m){

			}
			Matrix tran(){
				for(int i=0;i<col;i++){
					for(int j=0;j<row;j++){
						//data[i][j]=data[j][i];
						cout << data[j][i] << " ";
					}
                                       cout<<endl;
				}
			}
			~Matrix(){
		//		delete [] data;
			}
};

int main(){
	int m,n;
	cin >> m >> n;
	Matrix *m1 = new Matrix(m, n);
	for(int i = 0 ; i < m ; i++) {
		for(int j = 0 ; j < n ; j++) {
			int value;
			cin >> value;
			m1->setValue(i, j , value);
		}
	}
	m1->tran();
//	m1->print();
	return 0;
}
