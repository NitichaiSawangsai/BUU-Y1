node temp;
node min;
node ntemp;
node stemp = new node (0);
for(temp = head ; temp!= NULL ; temp=temp->link){
	min=temp;
	for(ntemp = temp -> link ; ntemp != NULL ; ntemp = ntemp->link){
		if(min->data > ntemp->data){
			min = ntemp;
		}

	}
	stemp->data = temp->data;
	temp->data  = min->data;
	min->data   = stemp->data;
}

