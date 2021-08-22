
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

// function prototypes
int operator_value(char c);
/*
void write_to_output(char c);

char op_stack_top();
int op_stack_top_position();
void op_stack_pop();
void op_stack_push(int l);
*/


int main(){
string strin;
char strout[1000];
int strout_len = 0; 

int op_stack[2000]; 
int op_size = 0;

	int id_count = 0; 
	int op_count = 0; 
	//scanf("%s", strin);
        cin>>strin;
	for(int i = 0; strin[i] != 0; ){
		if(strin[i] == ' ') {
			i++; // move to the next position
		}else if(operator_value(strin[i]) >= 0){
			if(strin[i] == '('){
				op_stack[op_size] = i;
				op_size++;  //End  op_stack_push(i);
			}else if(strin[i] == ')'){
				while(op_size > 0 && strin[op_stack[op_size - 1]] != '('){
					strout[strout_len] = strin[op_stack[op_size - 1]];
					strout_len++;  //END write_to_output(op_stack_top());

					strout[strout_len] = ' ';
					strout_len++;  //END write_to_output(' ');

					op_size--; //END op_stack_pop();	
				}
				if(op_size > 0){
					op_size--; //END op_stack_pop();
				}else{
					cout<<"\n -- Error -- \n"<<endl; //cout<<"\nError: Found ')' at "<<i<<" with no matching '('"<<endl;
				}
			}else {
				if(op_count == id_count){
					cout<<"\n -- Error -- \n"<<endl; // cout<<"\nError: Expected IDs/numbers, but received operator '"<<strin[i]<<"' at "<<i<<endl;
				}

				while(op_size > 0 && operator_value(strin[op_stack[op_size - 1]]) >= operator_value(strin[i])){
					strout[strout_len] = strin[op_stack[op_size - 1]];
					strout_len++; //End write_to_output(op_stack_top());

					strout[strout_len] = ' ';
					strout_len++; //End write_to_output(' ');

					op_size--; //End op_stack_pop();

				}
				op_stack[op_size] = i;
				op_size++; //End op_stack_push(i);
				op_count++; // count +-*/
			}
			i++; // move to the next position
		}else{
			if(id_count == op_count){
				while(strin[i] != 0 && strin[i] != ' ' && operator_value(strin[i]) == -1){
					strout[strout_len] = strin[i];
					strout_len++; //END write_to_output(strin[i]);
					i++;
				}
				strout[strout_len] = ' ';
				strout_len++;  //End write_to_output(' ');
			}else{
				cout<<"\n -- Error -- \n"<<endl; //cout<<"Error: Expected an operator at location "<<i<<" ['"<<strin[i]<<"']\n";
			}
			id_count++; // count IDs/numbers
		}
	}//END for
	while(op_size > 0){
		if(strin[op_stack[op_size - 1]] == '('){
			cout<<"\n -- Error -- \n"<<endl; //cout<<"Error: Found '(' at "<<op_stack[op_size - 1]<<" with no matching ')'\n";
		}
		strout[strout_len] = strin[op_stack[op_size - 1]];
		strout_len++; //End write_to_output(op_stack_top());

		strout[strout_len] = ' ';
		strout_len++; //End write_to_output(' ');

		op_size--; //End op_stack_pop();
	}
	if(id_count == op_count + 1){
		strout_len--; // ignore the space after the last character
		strout[strout_len] = 0; // NULL, to end the string
		//printf("%s\n", strout);
                cout<<strout<<endl;
	}else{
		printf("Error: Early input termination. Expected more IDs/numbers\n");
	}
	return 0;
}

int operator_value(char c) {
	if(c == '(' || c == ')')
		return 0;
	else if(c == '+' || c == '-')
		return 1;
	else if(c == '*' || c == '/')
		return 2;
	else
		return -1; // not an operator symbol
}
/*
void write_to_output(char c){
	strout[strout_len] = c;
	strout_len++;
}
// Returns the operator (char) on top of stack
char op_stack_top(){
	return strin[op_stack[op_size - 1]];
}
int op_stack_top_position(){
	return op_stack[op_size - 1];
}
// Pops the top of stack
// op_size > 0
void op_stack_pop(){
	op_size--;
}
// Pushes char position onto the stack
// l = index of the operator in the input string (strin[])
void op_stack_push(int l){
	op_stack[op_size] = l;
	op_size++;
}
*/
