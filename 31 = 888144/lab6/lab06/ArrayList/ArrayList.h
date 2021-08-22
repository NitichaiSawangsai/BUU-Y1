
class ArrayList
{
private:
	int list[10];
	int length;
	int maxSize;
public:
	bool isEmptyList() const;
	//Function to determine whether the list is empty
	//Postcondition: Returns true if the list is empty;
	//               otherwise, returns false.

	bool isFullList() const;
	//Function to determine whether the list is full
	//Postcondition: Returns true if the list is full; 
	//               otherwise, returns false.

	int search(int searchItem) const;
	//Function to search the list for given item
	//Postcondition: If the item is found, returns the 
	//               location in the array where the item is  
	//               found; otherwise, returns -1.

	void insert(int insertItem);
	//Function to insert insertItem into the list. 
	//Postcondition: list[length] = insertItem; and length++;
	//               If the list is full, an appropriate 
	//               message is displayed.

	void remove(int removeItem);
	//Function to remove removeItem from the list.
	//Postcondition: If removeItem is found in the list,
	//               it is removed from the list and length 
	//               is decremented by one.

	void print() const;
	//Function to output the elements of the list
	//Postcondition: Elements of the list are output on the 
	//               standard output device.

	ArrayList();
	~ArrayList();
};

