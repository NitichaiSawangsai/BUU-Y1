#include <iostream>
using namespace std;
class StackLink {
	private : 
		class node {
			public  :
				string data;
				node *link;
				void setnode(string value){
					this->data=value;
					link=NULL;
				}
		};
		node *top;
		int count;
	public  :
		StackLink(){
			this->top=NULL;     
			this->count=0;
		}
		void push(string value){
			node *tmp=new node;
			tmp->setnode(value);
			if(this->isEmpty()){
				top = tmp;
			}else{
				tmp->link = top;
				top       = tmp;
			}
			count++;
		}
		string pop(){
			node *tmp=top;
			string value = tmp->data; 
			if(isEmpty()){
				return  0;
			}else{
				top=top->link;
				count--; 
				return  value;
			}
		}
		void Infix_Postfix(string strin){		
			char strout[1000];
			int strout_len = 0 ;

			int *op_stack; 
			int op_size = 0 ;
			op_stack = new int[200];              

			int id_count = 0; 
			int op_count = 0;             
			for(int i = 0; strin[i] != 0;){
				if(strin[i] == ' ') {
					i++;
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
						}//End while
						if(op_size > 0){
							op_size--; //END op_stack_pop();
						}else{
							cout<<"\nError: Found ')' at "<<i<<" with no matching '('"<<endl;
						}
					}else{
						if(op_count == id_count){
							cout<<"\nError: Expected IDs/numbers, but received operator '"<<strin[i]<<"' at "<<i<<endl; // terminate program
						}
						// put the in-stack operators with higher or equal importance to the output string
						while(op_size > 0 && operator_value(strin[op_stack[op_size - 1]]) >= operator_value(strin[i])){
							strout[strout_len] = strin[op_stack[op_size - 1]];
							strout_len++; //End write_to_output(op_stack_top());

							strout[strout_len] = ' ';
							strout_len++; //End write_to_output(' ');
							op_size--; //End op_stack_pop();
						}
						op_stack[op_size] = i;
						op_size++; //End op_stack_push(i); // push this operator onto the stack
						op_count++; // count +-*/
					}//End else
					i++; // move to the next position
				} else { //END else if(operator_value(strin[i]) >= 0)
					if(id_count == op_count){
						while(strin[i] != 0 && strin[i] != ' ' && operator_value(strin[i]) == -1){
							strout[strout_len] = strin[i];
							strout_len++; //END write_to_output(strin[i]);
							i++;
						}
						strout[strout_len] = ' ';
						strout_len++;  //End write_to_output(' ');
					}else{
						cout<<"Error: Expected an operator at location "<<i<<" ['"<<strin[i]<<"']\n"; // terminate program
					}
					id_count++; // count IDs/numbers
				}//End if(strin[i] == ' ')
			}//End for

			while(op_size > 0){
				if(strin[op_stack[op_size - 1]] == '('){
					cout<<"Error: Found '(' at "<<op_stack[op_size - 1]<<" with no matching ')'\n"; // terminate program
				}
				strout[strout_len] = strin[op_stack[op_size - 1]];
				strout_len++; //End write_to_output(op_stack_top());

				strout[strout_len] = ' ';
				strout_len++; //End write_to_output(' ');
				op_size--; //End op_stack_pop();
			}//End while(op_size > 0)

			if(id_count == op_count + 1){
				strout_len--; // ignore the space after the last character
				strout[strout_len] = 0; // NULL, to end the string
				//printf("%s\n", strout);
				cout<<"Infix/Postfix : "<<strout<<endl;
			}else{
				cout<<"Error: Early input termination. Expected more IDs/numbers\n";
			}//End if(id_count == op_count + 1)
		}//End Infix_Postfix  //Thx for programming.in.th/forum/plain/t4293.htm
		int operator_value(char c){
			if(c == '(' || c == ')'){
				return 0;
			}else if(c == '+' || c == '-'){
				return 1;
			}else if(c == '*' || c == '/'){
				return 2;
			}else{
				return -1;
			}
		}	 
		void show(){
			cout<<"\nData : ";
			for(node *tmp=top;tmp!=NULL;tmp=tmp->link){
				cout<<tmp->data<<"  ,  ";
			}
			cout<<endl;
		}
		bool isEmpty(){
			if(count==0){
				return true;
			}else{
				return false;
			}
		}
		int size(){
			return count;
		}
		~StackLink(){
			for(node *tmp=top;tmp!=NULL;top=top->link){
				delete  tmp;
				tmp = NULL;
			}
			top = NULL;
		}

};
int main(){
	StackLink obj_stackLink;
	string  ch;
	do{
		cout<<"\n----------------------"<<endl;
		cout<<" 1 = Add (push)       "<<endl;
		cout<<" 2 = pop              "<<endl;
		cout<<" 3 = Infix/Postfix    "<<endl;
		cout<<" 4 = Show             "<<endl;
		cout<<" 5 = Exit             "<<endl;
		cout<<"----------------------"<<endl;
                cout<<"Input : ";
		cin>>ch;
		if(ch=="1"){
			string add;
			cout<<"\n-->> Add : ";
			cin>>add;
			obj_stackLink.push(add);
		}else if(ch=="2"){
			if(obj_stackLink.size()==0){
				cout<<" - - No data - -"<<endl;
			}else{
				cout<<"\nPOP : "<<obj_stackLink.pop()<<endl;
			}
		}else if(ch=="3"){
			if(!obj_stackLink.isEmpty()){
				string Input=obj_stackLink.pop();
				cout<<"\n -- Infix/Postfix -- "<<endl;
				cout<<"\nInput : "<<Input<<endl;
				obj_stackLink.Infix_Postfix(Input);
			}else{
				cout<<" -- No data && No Infix/Postfix -- "<<endl;
			}
		}else if(ch=="4"){
			if(!obj_stackLink.isEmpty()){
				cout<<"\n-->> Show "<<endl;
				obj_stackLink.show();
			}else{
				cout<<"\nData :  -- No data -- "<<endl;
			}
		}
	}while(ch!="5");      
	return 0;
}
