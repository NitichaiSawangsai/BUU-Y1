#include <iostream>
using namespace std;
int main()
{
	int A[2][2] = {{1,2},
		{4,5}};

	int B[2][2] = {{10,20},
		{40,50}};

	int C[2][2] = {{0.0,0.0},
		{0.0,0.0}};

	// Show matrix A
	for(int i = 0;i<2;i++) {
		for(int j=0;j<2;j++)  {
                        cout<<C[i][j]<<" ";
		//	cout<<"A["<<i<<"]["<<j<<"] = "<<A[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";
	// Show matrix B
	for(int i = 0;i<2;i++) {
		for(int j=0;j<2;j++) {
			cout<<"B["<<i<<"]["<<j<<"] = "<<B[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";
	// Find AB
	for(int n =0;n<2;n++) {
		for(int q = 0;q<2;q++){
			for(int p=0;p<2;p++) {
				C[n][q] += A[n][p]*B[p][q];
			}
		}
	}

	//Show matric C = AB
	for(int i = 0;i<2;i++){
		for(int j=0;j<2;j++){
                        cout<<C[i][j]<<" ";
		//	cout<<"C["<<i<<"]["<<j<<"] = "<<C[i][j]<<" ";
		}
		cout<<"\n\a";
	}
	return 0;
}

