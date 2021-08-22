#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <time.h>
using namespace std;
struct node{
    int id,idQ,idQ2,idc,idc2;
    int idnum;
    int idQu;
    int idC1;
    int idC2;
    int idC3;
    int idC4;
    int idC5;
    int idA,idAQ,idAC;
    int idS,idSQ1,idSQ2,idSQ3,idSQ4,idSQ5;
    int idsc,idse,idscore;
    string name,nameQ,namec,idna;
    node *next,*nextQ,*nextc,*nextm,*nexta,*nexts,*nextsc;
};
node *head=NULL,*tail,*temp,*temp2;
node *headQ=NULL,*tailQ,*tempQ,*tempQ2;
node *headc=NULL,*tailc,*tempc,*tempc2;
node *headm=NULL,*tailm,*tempm,*tempm2;
node *headA=NULL,*tailA,*tempA,*tempA2;
node *heads=NULL,*tails,*temps,*temps2;
node *headsc=NULL,*tailsc,*tempsc,*tempsc2;

void show(){
    temp = head;
    while(temp != NULL){
        if(temp->name!="")
            cout<<temp ->id<<"\t"<<temp ->name<<endl;
            temp = temp ->next;
    }
}

void showQ(){
    tempQ = headQ;
    while(tempQ != NULL){
        if(tempQ->nameQ!="")
            cout<<tempQ ->idQ<<"\t"<<tempQ ->idQ2<<"\t"<<tempQ ->nameQ<<endl;
            tempQ = tempQ ->nextQ;
    }
}

void showc(){
    tempc = headc;
    while(tempc != NULL){
        if(tempc->namec!="")
            cout<<tempc ->idc<<"\t"<<tempc ->idc2<<"\t"<<tempc ->namec<<endl;
            tempc = tempc ->nextc;
    }
}

void showm(){
    tempm = headm;
    while(tempm != NULL){

            cout<<tempm ->idnum<<"\t"<<tempm ->idQu<<"\t"<<tempm ->idC1<<"\t"<<tempm ->idC2<<"\t"<<tempm ->idC3<<"\t"<<tempm ->idC4<<"\t"<<tempm ->idC5<<endl;
            tempm = tempm ->nextm;
    }
}

void showA(){
    tempA = headA;
    while(tempA != NULL){
            cout<<tempA ->idA<<"\t"<<tempA ->idAQ<<"\t"<<tempA ->idAC<<endl;
            tempA = tempA ->nexta;
    }
}

void shows(){
    temps = heads;
    while(temps != NULL){
            cout<<temps ->idS<<"\t"<<temps ->idSQ1<<"\t"<<temps ->idSQ2<<"\t"<<temps ->idSQ3<<"\t"<<temps ->idSQ4<<"\t"<<temps ->idSQ5<<endl;
            temps = temps ->nexts;
    }
}

void showsc(){
    tempsc = headsc;
    while(tempsc != NULL){
            if(tempsc == tailsc){
                cout<<tempsc ->idsc<<"\t"<<tempsc ->idse<<"\t"<<tempsc ->idna<<"\t"<<tempsc ->idscore<<endl;
            break;
            }else{
                cout<<tempsc ->idsc<<"\t"<<tempsc ->idse<<"\t"<<tempsc ->idna<<"\t"<<tempsc ->idscore<<endl;
            }
            tempsc = tempsc ->nextsc;

    }
}

int add(int nu,string na){
    if(head == NULL){
        head = new node;
        head ->id = nu;
        head ->name = na;
        tail = head;
        tail ->next = head;
    }else{
        temp = new node;
        temp ->id = nu;
        temp ->name = na;
        tail ->next = temp;
        tail = temp;
        tail ->next = NULL;
    }
    return 0;
}

int addQ(int nu,int nu2,string na){
    if(headQ == NULL){
        headQ = new node;
        headQ ->idQ = nu;
        headQ ->idQ2 = nu2;
        headQ ->nameQ = na;
        tailQ = headQ;
        tailQ ->nextQ = headQ;
    }else{
        tempQ = new node;
        tempQ ->idQ = nu;
        tempQ ->idQ2 = nu2;
        tempQ ->nameQ = na;
        tailQ ->nextQ = tempQ;
        tailQ = tempQ;
        tailQ ->nextQ = NULL;
    }
    return 0;
}

int addc(int nu,int nu2,string na){
    if(headc == NULL){
        headc = new node;
        headc ->idc = nu;
        headc ->idc2 = nu2;
        headc ->namec = na;
        tailc = headc;
        tailc ->nextc = headc;
    }else{
        tempc = new node;
        tempc ->idc = nu;
        tempc ->idc2 = nu2;
        tempc ->namec = na;
        tailc ->nextc = tempc;
        tailc = tempc;
        tailc ->nextc = NULL;
    }
    return 0;
}

int addm(int nu,int nu2,int nu3,int nu4,int nu5,int nu6,int nu7){
    if(headm == NULL){
        headm = new node;
        headm ->idnum = nu;
        headm ->idQu = nu2;
        headm ->idC1 = nu3;
        headm ->idC2 = nu4;
        headm ->idC3 = nu5;
        headm ->idC4 = nu6;
        headm ->idC5 = nu7;
        tailm = headm;
        tailm ->nextm = headm;
    }else{
        tempm = new node;
        tempm ->idnum = nu;
        tempm ->idQu = nu2;
        tempm ->idC1 = nu3;
        tempm ->idC2 = nu4;
        tempm ->idC3 = nu5;
        tempm ->idC4 = nu6;
        tempm ->idC5 = nu7;
        tailm ->nextm = tempm;
        tailm = tempm;
        tailm ->nextm = NULL;
    }
    return 0;
}

int addA(int nu,int nu2,int nu3){
    if(headA == NULL){
        headA = new node;
        headA ->idA = nu;
        headA ->idAQ = nu2;
        headA ->idAC = nu3;
        tailA = headA;
        tailA ->nexta = headA;
    }else{
        tempA = new node;
        tempA ->idA = nu;
        tempA ->idAQ = nu2;
        tempA ->idAC = nu3;
        tailA ->nexta = tempA;
        tailA = tempA;
        tailA ->nexta = NULL;
    }
    return 0;
}

int adds(int nu,int nu2,int nu3,int nu4,int nu5,int nu6){
    if(heads == NULL){
        heads = new node;
        heads ->idS = nu;
        heads ->idSQ1 = nu2;
        heads ->idSQ2 = nu3;
        heads ->idSQ3 = nu4;
        heads ->idSQ4 = nu5;
        heads ->idSQ5 = nu6;
        tails = heads;
        tails ->nexts = heads;
    }else{
        temps = new node;
        temps ->idS = nu;
        temps ->idSQ1 = nu2;
        temps ->idSQ2 = nu3;
        temps ->idSQ3 = nu4;
        temps ->idSQ4 = nu5;
        temps ->idSQ5 = nu6;
        tails ->nexts = temps;
        tails = temps;
        tails ->nexts = NULL;
    }
    return 0;
}

int addsc(int nu,int nu2,string nu3,int nu4){
    if(headsc == NULL){
        headsc = new node;
        headsc ->idsc = nu;
        headsc ->idse = nu2;
        headsc ->idna = nu3;
        headsc ->idscore = nu4;
        tailsc = headsc;
        tailsc ->nextsc = headsc;
    }else{
        tempsc = new node;
        tempsc ->idsc = nu;
        tempsc ->idse = nu2;
        tempsc ->idna = nu3;
        tempsc ->idscore = nu4;
        tailsc ->nextsc = tempsc;
        tailsc = tempsc;
        tailsc ->nextsc = NULL;
    }
    return 0;
}

void edit(int nu){
    string ename;
    temp = head;
    while(temp != NULL){
        if(temp ->id==nu){
            cout<<"Old Name : "<<temp ->name<<endl;
            cout<<"New Name : ";
            cin>>ename;
            temp ->name = ename;
            break;
        }else{
            temp = temp ->next;
        }
    }
}

void editQ(int nu){
    string ename;
    tempQ = headQ;
    while(tempQ != NULL){
        if(tempQ ->idQ==nu){
            cout<<"Old Name : "<<tempQ ->nameQ<<endl;
            cout<<"New Name : ";
            cin>>ename;
            tempQ ->nameQ = ename;
            break;
        }else{
            tempQ = tempQ ->nextQ;
        }
    }
}

void editc(int nu){
    string ename;
    tempc = headc;
    while(tempc != NULL){
        if(tempc ->idc==nu){
            cout<<"Old Name : "<<tempc ->namec<<endl;
            cout<<"New Name : ";
            cin>>ename;
            tempc ->namec = ename;
            break;
        }else{
            tempc = tempc ->nextc;
        }
    }
}

void Delete(int nu){
    temp = head;
    temp2 = head;
    while(temp != NULL){
        if(head ->id == nu){
            head = head ->next;
            delete temp;
            temp = head;
        }else if(temp ->id==nu){
            temp2 ->next = temp ->next;
            delete temp;
            temp = temp ->next;
        }else{
            temp2 = temp;
            temp = temp ->next;
        }
    }
}

void DeleteQ(int nu){
    tempQ = headQ;
    tempQ2 = headQ;
    while(tempQ != NULL){
        if(headQ ->idQ == nu){
            headQ = headQ ->nextQ;
            delete tempQ;
            tempQ = headQ;
        }else if(tempQ ->idQ==nu){
            tempQ2 ->nextQ = tempQ ->nextQ;
            delete tempQ;
            tempQ = tempQ ->nextQ;
        }else{
            tempQ2 = tempQ;
            tempQ = tempQ ->nextQ;
        }
    }
}

void Deletec(int nu){
    tempc = headc;
    tempc2 = headc;
    while(tempc != NULL){
        if(headc ->idc == nu){
            headc = headc ->nextc;
            delete tempc;
            tempc = headc;
        }else if(tempc ->idc==nu){
            tempc2 ->nextc = tempc ->nextc;
            delete tempc;
            tempc = tempc ->nextc;
        }else{
            tempc2 = tempc;
            tempc = tempc ->nextc;
        }
    }
}

void Deletem(int nu){
    tempm = headm;
    tempm2 = headm;
    while(tempm != NULL){
        if(headm ->idnum == nu){
            headm = headm ->nextm;
            delete tempm;
            tempm = headm;
        }else if(tempm ->idnum==nu){
            tempm2 ->nextm = tempm ->nextm;
            delete tempm;
            tempm = tempm ->nextm;
        }else{
            tempm2 = tempm;
            tempm = tempm ->nextm;
        }
    }
}

void Deletea(int nu){
    tempA = headA;
    tempA2 = headA;
    while(tempA != NULL){
        if(headA ->idA == nu){
            headA = headA ->nexta;
            delete tempA;
            tempA = headA;
        }else if(tempA ->idA==nu){
            tempA2 ->nexta = tempA ->nexta;
            delete tempA;
            tempA = tempA ->nexta;
        }else{
            tempA2 = tempA;
            tempA = tempA ->nexta;
        }
    }
}

void Deletes(int nu){
    temps = heads;
    temps2 = heads;
    while(temps != NULL){
        if(heads ->idS == nu){
            heads = heads ->nexts;
            delete temps;
            temps = heads;
        }else if(temps ->idS==nu){
            temps2 ->nexts = temps ->nexts;
            delete temps;
            temps = temps ->nexts;
        }else{
            temps2 = temps;
            temps = temps ->nexts;
        }
    }
}

int main(){
    time_t start,stop;
    int score=0;
    int tar=0,number=0,numbercat=0,menu=0,countline=0,countline2=0,countline3=0,check=0;
    stringstream numb,numc;
    string line,num,numCat,ncat,newname;
    ifstream myfile;
    myfile.open("Question.dat");
    while(!myfile.eof())
    {
        getline(myfile,line);
        tar = line.find("\t");
        num = line.substr(0,tar);
        line.erase(0,tar+1);
        tar = line.find("\t");
        numCat = line.substr(0,tar);
        ncat = line.substr(tar+1,string::npos);
        numb << num;
        numb >> number;
        numc << numCat;
        numc >> numbercat;
        numc.clear();
        numb.clear();
        addQ(number,numbercat,ncat);
        countline++;
    }
    myfile.close();
    /////////////////////////////// end read file Question //////////////////////////////
    stringstream numb2,numc2;
    tar=0,number=0,numbercat=0,menu=0,countline2=0,check=0;
    myfile.open("Choice.dat");
    while(!myfile.eof())
    {
        getline(myfile,line);
        tar = line.find("\t");
        num = line.substr(0,tar);
        line.erase(0,tar+1);
        tar = line.find("\t");
        numCat = line.substr(0,tar);
        ncat = line.substr(tar+1,string::npos);
        numb2 << num;
        numb2 >> number;
        numc2 << numCat;
        numc2 >> numbercat;
        numc2.clear();
        numb2.clear();
        addc(number,numbercat,ncat);
        countline2++;
    }
    myfile.close();
 /////////////////////////////// end read file Choice //////////////////////////////

        int numa,numq,numch;
        tar=0,number=0,menu=0,countline3=0;
        stringstream numb1,numb3;
        string num1,num2,num3;
        myfile.open("Answer.dat");
        while(!myfile.eof())
        {
            getline(myfile,line);
            tar = line.find("\t");
            num1 = line.substr(0,tar);
            line.erase(0,tar+1);
            numb1 << num1;
            numb1 >> numa;
            numb1.clear();

            tar = line.find("\t");
            num2 = line.substr(0,tar);
            line.erase(0,tar+1);
            numb2 << num2;
            numb2 >> numq;
            numb2.clear();

            num3 = line.substr(0,string::npos);
            numb3 << num3;
            numb3 >> numch;
            numb3.clear();

            addA(numa,numq,numch);
            countline3++;
            //cout<<num<<name<<endl;
        }
        myfile.close();
         /////////////////////////////// end read file Answer //////////////////////////////

    tar=0;
    int countline4=0;
    int nnum1=0,nnum2=0,nnum3=0,nnum4=0,nnum5=0,nnum6=0,nnum7=0;
    myfile.open("Matching.dat");
    while(!myfile.eof())
    {
        getline(myfile,line);
        tar = line.find("\t");
        num = line.substr(0,tar);
        line.erase(0,tar+1);
        numb << num;
        numb >> nnum1;
        numb.clear();

        tar = line.find("\t");
        num = line.substr(0,tar);
        line.erase(0,tar+1);
        numb << num;
        numb >> nnum2;
        numb.clear();

        tar = line.find("\t");
        num = line.substr(0,tar);
        line.erase(0,tar+1);
        numb << num;
        numb >> nnum3;
        numb.clear();

        tar = line.find("\t");
        num = line.substr(0,tar);
        line.erase(0,tar+1);
        numb << num;
        numb >> nnum4;
        numb.clear();

        tar = line.find("\t");
        num = line.substr(0,tar);
        line.erase(0,tar+1);
        numb << num;
        numb >> nnum5;
        numb.clear();

        tar = line.find("\t");
        num = line.substr(0,tar);
        line.erase(0,tar+1);
        numb << num;
        numb >> nnum6;
        numb.clear();

        tar = line.find("\t");
        num = line.substr(0,tar);
        line.erase(0,tar+1);
        numb << num;
        numb >> nnum7;
        numb.clear();

        addm(nnum1,nnum2,nnum3,nnum4,nnum5,nnum6,nnum7);
        countline4++;
    }
    myfile.close();

  /////////////////////////////// end read file Matching //////////////////////////////

        tar=0,number=0,menu,countline=0;
        int num01=0,num02=0,num03=0,num04=0,num05=0,num06=0,num07=0;
        myfile.open("Series.dat");
        while(!myfile.eof()){
            getline(myfile,line);
            tar = line.find("\t");
            num = line.substr(0,tar);
            line.erase(0,tar+1);
            numb << num;
            numb >> num01;
            numb.clear();

            tar = line.find("\t");
            num = line.substr(0,tar);
            line.erase(0,tar+1);
            numb << num;
            numb >> num02;
            numb.clear();

            tar = line.find("\t");
            num = line.substr(0,tar);
            line.erase(0,tar+1);
            numb << num;
            numb >> num03;
            numb.clear();

            tar = line.find("\t");
            num = line.substr(0,tar);
            line.erase(0,tar+1);
            numb << num;
            numb >> num04;
            numb.clear();

            tar = line.find("\t");
            num = line.substr(0,tar);
            line.erase(0,tar+1);
            numb << num;
            numb >> num05;
            numb.clear();

            tar = line.find("\t");
            num = line.substr(0,tar);
            line.erase(0,tar+1);
            numb << num;
            numb >> num06;
            numb.clear();

            adds(num01,num02,num03,num04,num05,num06);
            countline++;
        }
        myfile.close();

        ////////////////////////////////end read file series///////////////////////////////////////////

        int SCscore,SCse,SCsco;
        tar=0,number=0,menu=0;
        int countlines=0;
        stringstream scscore,scse,scsco;
        string numscore,numserie,namee,numsco;
        myfile.open("Score.dat");
        while(!myfile.eof())
        {
            getline(myfile,line);
            tar = line.find("\t");
            numscore = line.substr(0,tar);
            line.erase(0,tar+1);
            scscore << numscore;
            scscore >> SCscore;
            scscore.clear();

            tar = line.find("\t");
            numserie = line.substr(0,tar);
            line.erase(0,tar+1);
            scse << numserie;
            scse >> SCse;
            scse.clear();

            tar = line.find("\t");
            namee = line.substr(0,tar);
            line.erase(0,tar+1);

            numsco = line.substr(0,string::npos);
            scsco << numsco;
            scsco >> SCsco;
            scsco.clear();

            addsc(SCscore,SCse,namee,SCsco);
            countlines++;
        }
        myfile.close();

    int choice;
    do{
    cout<<"     Menu"<<endl;
    cout<<"1.Category"<<endl;
    cout<<"2.Question"<<endl;
    cout<<"3.Choice"<<endl;
    cout<<"4.Matching"<<endl;
    cout<<"5.Answer"<<endl;
    cout<<"6.Series"<<endl;
    cout<<"7.Quiz"<<endl;
    cout<<"8.Score"<<endl;
    cout<<"9.Exit"<<endl;
    cout<<"Choose Choice : ";
    cin>>choice;
    switch(choice){

    case 1://Category
    {
    int tar=0,number=0,menu=0,countline=0;
    stringstream numb;
    string line,num,ncat,newname;
    ifstream myfile;
    myfile.open("Category.dat");
    while(!myfile.eof())
    {

        getline(myfile,line);
        tar = line.find("\t");
        num = line.substr(0,tar);
        ncat = line.substr(tar+1,string::npos);
        numb << num;
        numb >> number;
        numb.clear();
        add(number,ncat);
        countline++;
        //cout<<num<<name<<endl;
    }
    myfile.close();

    do{
        check = 0;
        cout<<"     Menu   "<<endl;
        cout<<"1.Show      "<<endl;
        cout<<"2.Add       "<<endl;
        cout<<"3.Edit      "<<endl;
        cout<<"4.Delete    "<<endl;
        cout<<"5.Back      "<<endl;
        cout<<"Choose Menu: ";
        cin>>menu;
        switch(menu){
            case 1:
            {
                show();
            break;
            }

            case 2:
            {
                int cline;
                cout<<"Enter Name : ";
                cin>>newname;
                countline++;
                cline = countline*10;
                add(cline,newname);
            break;
            }

            case 3:
            {

                cout<<"Enter Number : ";
                cin>>number;
                edit(number);

            break;
            }

            case 4:
            {
                check = 0;
                cout<<"Enter Number : ";
                cin>>number;
                tempQ = headQ;
                while(tempQ != NULL){
                    if(tempQ->idQ2==number){
                        cout<<"Cannot Delete!!"<<endl;
                        check = 1;
                        break;
                    }else{
                        tempQ = tempQ->nextQ;
                    }
                }
                if(check==0){
                Delete(number);
                }

            break;
            }
        }

        ofstream outfile;
        outfile.open("Category.dat",ios::out);
        temp = head;
        while(temp != NULL){
            if(temp == tail){
                if(temp->name!="")
                    outfile<<temp ->id<<"\t"<<temp ->name;
                if(temp->name=="")
                    outfile<<"\t"<<temp ->name;
            }else{
                if(temp->name!="")
                    outfile<<temp ->id<<"\t"<<temp ->name<<endl;
            }
             temp = temp ->next;
        }
        outfile.close();

    }while(menu!=5);
    break;
    }
//////////////////////////////////////////////End case 1/////////////////////////////////////////
    case 2://Question
    {
    do{
        cout<<"     Menu   "<<endl;
        cout<<"1.Show      "<<endl;
        cout<<"2.Add       "<<endl;
        cout<<"3.Edit      "<<endl;
        cout<<"4.Delete    "<<endl;
        cout<<"5.Back      "<<endl;
        cout<<"Choose Menu: ";
        cin>>menu;
        switch(menu){
            case 1:
            {
                showQ();
            break;
            }

            case 2:
            {
                int cline,cline2;
                cout<<"Enter Number : ";
                cin>>cline2;
                cout<<"Enter Name   : ";
                cin>>newname;
                countline++;
                cline = countline+1000;
                //cline2 = countline*10;
                addQ(cline,cline2,newname);
            break;
            }

            case 3:
            {
                cout<<"Enter Number : ";
                cin>>number;
                editQ(number);

            break;
            }

            case 4:
            {
                cout<<"Enter Number : ";
                cin>>number;
                DeleteQ(number);
            break;
            }
        }

        ofstream outfile;
        outfile.open("Question.dat",ios::out);
        tempQ = headQ;
        while(tempQ != NULL){
            if(tempQ == tail){
                if(tempQ->nameQ!="")
                    outfile<<tempQ ->idQ<<"\t"<<tempQ ->idQ2<<"\t"<<tempQ ->nameQ;
                if(tempQ->nameQ=="")
                    outfile<<"\t"<<tempQ ->nameQ;
            }else{
                if(tempQ->nameQ!="")
                    outfile<<tempQ ->idQ<<"\t"<<tempQ ->idQ2<<"\t"<<tempQ ->nameQ<<endl;
            }
             tempQ = tempQ ->nextQ;
        }

        outfile.close();
    }while(menu!=5);
    break;
    }
///////////////////////////////////////////// End case 2//////////////////////////////////////////
    case 3://Choice
    {
        do{
        cout<<"     Menu   "<<endl;
        cout<<"1.Show      "<<endl;
        cout<<"2.Add       "<<endl;
        cout<<"3.Edit      "<<endl;
        cout<<"4.Delete    "<<endl;
        cout<<"5.Back      "<<endl;
        cout<<"Choose Menu: ";
        cin>>menu;
        switch(menu){
            case 1:
            {
                showc();
            break;
            }

            case 2:
            {
                int cline,cline2;
                cout<<"Enter Number : ";
                cin>>cline2;
                cout<<"Enter Name   : ";
                cin>>newname;
                countline2++;
                cline = countline2+2000;
                //cline2 = countline*10;
                addc(cline,cline2,newname);
            break;
            }

            case 3:
            {
                cout<<"Enter Number : ";
                cin>>number;
                editc(number);

            break;
            }

            case 4:
            {
                cout<<"Enter Number : ";
                cin>>number;
                Deletec(number);
            break;
            }
        }

        ofstream outfile;
        outfile.open("Choice.dat",ios::out);
        tempc = headc;
        while(tempc != NULL){
            if(tempc == tailc){
                if(tempc->namec!="")
                    outfile<<tempc ->idc<<"\t"<<tempc ->idc2<<"\t"<<tempc ->namec;
                if(tempc->namec=="")
                    outfile<<"\t"<<tempc ->namec;
            }else{
                if(tempc->namec!="")
                    outfile<<tempc ->idc<<"\t"<<tempc ->idc2<<"\t"<<tempc ->namec<<endl;
            }
             tempc = tempc ->nextc;
        }

        outfile.close();
    }while(menu!=5);
    break;
    }
//////////////////////////////////////////////End case 3/////////////////////////////////////////
    case 4://Matching
    {

    do{
        cout<<"     Menu   "<<endl;
        cout<<"1.Show      "<<endl;
        cout<<"2.Add       "<<endl;
        cout<<"3.Delete    "<<endl;
        cout<<"4.Back      "<<endl;
        cout<<"Choose Menu: ";
        cin>>menu;
        switch(menu){
            case 1:
            {
                showm();
            break;
            }

            case 2:
            {
                showQ();
                int ch=0;
                int choice1,choice2,choice3,choice4,choice5,choicetrue;
                int cline,cline2,caline;
                cout<<"Enter Number Question : ";
                cin>>cline2;
                tempm = headm;
                while(tempm != NULL){
                    if(cline2 == tempm ->idQu){
                        cout<<"Not Add!!"<<endl;
                        ch = 1;
                        break;
                    }else{
                    tempm = tempm ->nextm;
                    }
                }
                if(ch!=1){
                countline++;
                cline = countline+3000;
                showc();
                cout<<"Enter Choice1 : ";
                cin>>choice1;
                cout<<"Enter Choice2 : ";
                cin>>choice2;
                cout<<"Enter Choice3 : ";
                cin>>choice3;
                cout<<"Enter Choice4 : ";
                cin>>choice4;
                cout<<"Enter Choice5 : ";
                cin>>choice5;
                cout<<"Enter True Choice : ";
                cin>>choicetrue;
                countline3++;
                caline = countline3+4000;
                addA(caline,cline,choicetrue);
                addm(cline,cline2,choice1,choice2,choice3,choice4,choice5);
                }
            break;
            }

            case 3:
            {
                cout<<"Enter Number : ";
                cin>>number;
                Deletem(number);
            break;
            }
        }

        ofstream outfile;
        outfile.open("Matching.dat",ios::out);
        tempm = headm;
        while(tempm != NULL){
            if(tempm == tailm){
                //if(temp->name!="")
                    outfile<<tempm ->idnum<<"\t"<<tempm ->idQu<<"\t"<<tempm ->idC1<<"\t"<<tempm ->idC2<<"\t"<<tempm ->idC3<<"\t"<<tempm ->idC4<<"\t"<<tempm ->idC5;
                //if(temp->name=="")
                   // outfile<<"\t"<<temp ->name;
            }else{
               // if(temp->name!="")
                    outfile<<tempm ->idnum<<"\t"<<tempm ->idQu<<"\t"<<tempm ->idC1<<"\t"<<tempm ->idC2<<"\t"<<tempm ->idC3<<"\t"<<tempm ->idC4<<"\t"<<tempm ->idC5<<endl;
            }
             tempm = tempm ->nextm;
        }

        outfile.close();
    }while(menu!=4);
            break;
    }
//////////////////////////////////////////////End case 4/////////////////////////////////////////
    case 5://Answer
    {
    do{
        cout<<"     Menu   "<<endl;
        cout<<"1.Show      "<<endl;
        cout<<"2.Delete    "<<endl;
        cout<<"3.Back      "<<endl;
        cout<<"Choose Menu: ";
        cin>>menu;
        switch(menu){
            case 1:
            {
                showA();
            break;
            }

            case 2:
            {
                cout<<"Enter Number : ";
                cin>>number;
                Deletea(number);
            break;
            }

            case 3:
            {


            break;
            }
        }

        ofstream outfile;
        outfile.open("Answer.dat",ios::out);
        tempA = headA;
        while(tempA != NULL){
            if(tempA == tailA){
                    outfile<<tempA ->idA<<"\t"<<tempA ->idAQ<<"\t"<<tempA ->idAC;
            }else{
                    outfile<<tempA ->idA<<"\t"<<tempA ->idAQ<<"\t"<<tempA ->idAC<<endl;
            }
             tempA = tempA ->nexta;
        }

        outfile.close();
    }while(menu!=3);

    break;
    }
//////////////////////////////////////////////End case 5/////////////////////////////////////////
    case 6://Series
    {

    do{
        cout<<"     Menu   "<<endl;
        cout<<"1.Show      "<<endl;
        cout<<"2.ADD      "<<endl;
        cout<<"3.Delete    "<<endl;
        cout<<"4.Back      "<<endl;
        cout<<"Choose Menu: ";
        cin>>menu;
        switch(menu){
            case 1:
            {
                shows();
            break;
            }

            case 2:
            {
                showm();
                int mat1,mat2,mat3,mat4,mat5,coount;
                cout<<"Enter Matching : ";
                cin>>mat1;
                cout<<"Enter Matching : ";
                cin>>mat2;
                cout<<"Enter Matching : ";
                cin>>mat3;
                cout<<"Enter Matching : ";
                cin>>mat4;
                cout<<"Enter Matching : ";
                cin>>mat5;
                coount = tails ->idS;
                coount++;
                adds(coount,mat1,mat2,mat3,mat4,mat5);

            break;
            }

            case 3:
            {
                cout<<"Enter Number : ";
                cin>>number;
                Deletes(number);

            break;
            }
        }

        ofstream outfile;
        outfile.open("Series.dat",ios::out);
        temps = heads;
        while(temps != NULL){
            if(temps == tails){
                    outfile<<temps ->idS<<"\t"<<temps ->idSQ1<<"\t"<<temps ->idSQ2<<"\t"<<temps ->idSQ3<<"\t"<<temps ->idSQ4<<"\t"<<temps ->idSQ5;
            }else{
                    outfile<<temps ->idS<<"\t"<<temps ->idSQ1<<"\t"<<temps ->idSQ2<<"\t"<<temps ->idSQ3<<"\t"<<temps ->idSQ4<<"\t"<<temps ->idSQ5<<endl;
            }
             temps = temps ->nexts;
        }

        outfile.close();
    }while(menu!=4);

    break;
    }
//////////////////////////////////////////////End case 6/////////////////////////////////////////
    case 7://Quiz
    {
        string NAME;
        int series,chek,checkscore=0;
        int ch1,ch2,ch3,ch4,ch5;
        cout<<"Wellcome To Game Quiz!"<<endl<<endl;
        cout<<"Enter your name : ";
        cin>>NAME;
        shows();
        cout<<"Choose Series : ";
        cin>>series;
        time(&start);/////////////////////
        temps = heads;
        while(temps != NULL){//series
            if(temps ->idS == series){
                tempm = headm;
                while(tempm != NULL){//matching Question 1
                    if(temps ->idSQ1 == tempm ->idnum){
                        tempQ = headQ;
                        while(tempQ != NULL){//Question 1
                            if(tempm ->idQu == tempQ ->idQ){
                                cout<<tempQ ->nameQ<<endl<<endl;
                                break;
                            }else{
                                tempQ = tempQ ->nextQ;
                            }
                        }
                        tempc = headc;
                        while(tempc != NULL){//Choice
                            if(tempm ->idC1 == tempc ->idc){//choice 1
                                cout<<"\t"<<"1."<<tempc ->namec<<endl;
                                break;
                            }else{
                                tempc = tempc ->nextc;
                            }
                        }
                        tempc = headc;
                        while(tempc != NULL){//Choice
                            if(tempm ->idC2 == tempc ->idc){//choice 2
                                cout<<"\t"<<"2."<<tempc ->namec<<endl;
                                break;
                            }else{
                                tempc = tempc ->nextc;
                            }
                        }
                        tempc = headc;
                        while(tempc != NULL){//Choice
                            if(tempm ->idC3 == tempc ->idc){//choice 3
                                cout<<"\t"<<"3."<<tempc ->namec<<endl;
                                break;
                            }else{
                                tempc = tempc ->nextc;
                            }
                        }
                        tempc = headc;
                        while(tempc != NULL){//Choice
                            if(tempm ->idC4 == tempc ->idc){//choice 4
                                cout<<"\t"<<"4."<<tempc ->namec<<endl;
                                break;
                            }else{
                                tempc = tempc ->nextc;
                            }
                        }
                        tempc = headc;
                        while(tempc != NULL){//Choice
                            if(tempm ->idC5 == tempc ->idc){//choice 5
                                cout<<"\t"<<"5."<<tempc ->namec<<endl;
                                break;
                            }else{
                                tempc = tempc ->nextc;
                            }
                        }
                        break;
                    }else{
                        tempm = tempm ->nextm;
                    }
                }//matching 1
/////////////////////////////////////////////////////////////Check Answer Question 1///////////////////////////////////////////////////////////////
                tempA = headA;
                    while(tempA != NULL){//Choice 1
                        if(tempm ->idnum == tempA ->idAQ){
                            break;
                        }else{
                            tempA = tempA ->nexta;
                        }
                    }

                cout<<"Choose Choice : ";
                cin>>ch1;
                chek = 0;
                if(ch1 == 1){
                        if(tempm ->idC1 == tempA ->idAC){
                            chek = 1;
                            checkscore++;
                        }else{
                        }
                    cout<<endl;
                    if(chek == 1){
                        cout<<"True!"<<endl;
                    }else{
                        cout<<"False!"<<endl;
                    }
                    cout<<endl;
                }//if choice 1

                else if(ch1 == 2){
                        if(tempm ->idC2 == tempA ->idAC){
                            chek = 1;
                            checkscore++;
                        }else{
                        }
                    cout<<endl;
                    if(chek == 1){
                        cout<<"True!"<<endl;
                    }else{
                        cout<<"False!"<<endl;
                    }
                    cout<<endl;
                }//if choice 2

                else if(ch1 == 3){
                        if(tempm ->idC3 == tempA ->idAC){
                            chek = 1;
                            checkscore++;
                        }else{
                        }
                    cout<<endl;
                    if(chek == 1){
                        cout<<"True!"<<endl;
                    }else{
                        cout<<"False!"<<endl;
                    }
                    cout<<endl;
                }//if choice 3

                else if(ch1 == 4){
                        if(tempm ->idC4 == tempA ->idAC){
                            chek = 1;
                            checkscore++;
                        }else{
                        }
                    cout<<endl;
                    if(chek == 1){
                        cout<<"True!"<<endl;
                    }else{
                        cout<<"False!"<<endl;
                    }
                    cout<<endl;
                }//if choice 4

                else if(ch1 == 5){
                        if(tempm ->idC5 == tempA ->idAC){
                            chek = 1;
                            checkscore++;
                        }else{
                        }
                    cout<<endl;
                    if(chek == 1){
                        cout<<"True!"<<endl;
                    }else{
                        cout<<"False!"<<endl;
                    }
                    cout<<endl;
                }//if choice 5
/////////////////////////////////////////////////////////////End check Answer Question 1///////////////////////////////////////////////////////////
                tempm = headm;
                while(tempm != NULL){//matching Question 2
                    if(temps ->idSQ2 == tempm ->idnum){
                        tempQ = headQ;
                        while(tempQ != NULL){//Question 2
                            if(tempm ->idQu == tempQ ->idQ){
                                cout<<tempQ ->nameQ<<endl<<endl;
                                break;
                            }else{
                                tempQ = tempQ ->nextQ;
                            }
                        }
                        tempc = headc;
                        while(tempc != NULL){//Choice
                            if(tempm ->idC1 == tempc ->idc){//choice 1
                                cout<<"\t"<<"1."<<tempc ->namec<<endl;
                                break;
                            }else{
                                tempc = tempc ->nextc;
                            }
                        }
                        tempc = headc;
                        while(tempc != NULL){//Choice
                            if(tempm ->idC2 == tempc ->idc){//choice 2
                                cout<<"\t"<<"2."<<tempc ->namec<<endl;
                                break;
                            }else{
                                tempc = tempc ->nextc;
                            }
                        }
                        tempc = headc;
                        while(tempc != NULL){//Choice
                            if(tempm ->idC3 == tempc ->idc){//choice 3
                                cout<<"\t"<<"3."<<tempc ->namec<<endl;
                                break;
                            }else{
                                tempc = tempc ->nextc;
                            }
                        }
                        tempc = headc;
                        while(tempc != NULL){//Choice
                            if(tempm ->idC4 == tempc ->idc){//choice 4
                                cout<<"\t"<<"4."<<tempc ->namec<<endl;
                                break;
                            }else{
                                tempc = tempc ->nextc;
                            }
                        }
                        tempc = headc;
                        while(tempc != NULL){//Choice
                            if(tempm ->idC5 == tempc ->idc){//choice 5
                                cout<<"\t"<<"5."<<tempc ->namec<<endl;
                                break;
                            }else{
                                tempc = tempc ->nextc;
                            }
                        }
                        break;
                    }else{
                        tempm = tempm ->nextm;
                    }
                }//matching 2
/////////////////////////////////////////////////////////////Check Answer Question 2///////////////////////////////////////////////////////////////
                tempA = headA;
                    while(tempA != NULL){//Choice 1
                        if(tempm ->idnum == tempA ->idAQ){
                            break;
                        }else{
                            tempA = tempA ->nexta;
                        }
                    }
                cout<<"Choose Choice : ";
                cin>>ch2;
                chek = 0;
                if(ch2 == 1){
                        if(tempm ->idC1 == tempA ->idAC){
                            chek = 1;
                            checkscore++;
                        }else{
                        }
                    cout<<endl;
                    if(chek == 1){
                        cout<<"True!"<<endl;
                    }else{
                        cout<<"False!"<<endl;
                    }
                    cout<<endl;
                }//if choice 1

                else if(ch2 == 2){
                        if(tempm ->idC2 == tempA ->idAC){
                            chek = 1;
                            checkscore++;
                        }else{
                        }
                    cout<<endl;
                    if(chek == 1){
                        cout<<"True!"<<endl;
                    }else{
                        cout<<"False!"<<endl;
                    }
                    cout<<endl;
                }//if choice 2

                else if(ch2 == 3){
                        if(tempm ->idC3 == tempA ->idAC){
                            chek = 1;
                            checkscore++;
                        }else{
                            tempA = tempA ->nexta;
                        }
                    cout<<endl;
                    if(chek == 1){
                        cout<<"True!"<<endl;
                    }else{
                        cout<<"False!"<<endl;
                    }
                    cout<<endl;
                }//if choice 3

                else if(ch2 == 4){
                        if(tempm ->idC4 == tempA ->idAC){
                            chek = 1;
                            checkscore++;
                        }else{
                            tempA = tempA ->nexta;
                        }
                    cout<<endl;
                    if(chek == 1){
                        cout<<"True!"<<endl;
                    }else{
                        cout<<"False!"<<endl;
                    }
                    cout<<endl;
                }//if choice 4

                else if(ch2 == 5){
                        if(tempm ->idC5 == tempA ->idAC){
                            chek = 1;
                            checkscore++;
                        }else{
                            tempA = tempA ->nexta;
                        }
                    cout<<endl;
                    if(chek == 1){
                        cout<<"True!"<<endl;
                    }else{
                        cout<<"False!"<<endl;
                    }
                    cout<<endl;
                }//if choice 5
/////////////////////////////////////////////////////////////End check Answer Question 2///////////////////////////////////////////////////////////

                tempm = headm;
                while(tempm != NULL){//matching Question 3
                    if(temps ->idSQ3 == tempm ->idnum){
                        tempQ = headQ;
                        while(tempQ != NULL){//Question 3
                            if(tempm ->idQu == tempQ ->idQ){
                                cout<<tempQ ->nameQ<<endl<<endl;
                                break;
                            }else{
                                tempQ = tempQ ->nextQ;
                            }
                        }
                        tempc = headc;
                        while(tempc != NULL){//Choice
                            if(tempm ->idC1 == tempc ->idc){//choice 1
                                cout<<"\t"<<"1."<<tempc ->namec<<endl;
                                break;
                            }else{
                                tempc = tempc ->nextc;
                            }
                        }
                        tempc = headc;
                        while(tempc != NULL){//Choice
                            if(tempm ->idC2 == tempc ->idc){//choice 2
                                cout<<"\t"<<"2."<<tempc ->namec<<endl;
                                break;
                            }else{
                                tempc = tempc ->nextc;
                            }
                        }
                        tempc = headc;
                        while(tempc != NULL){//Choice
                            if(tempm ->idC3 == tempc ->idc){//choice 3
                                cout<<"\t"<<"3."<<tempc ->namec<<endl;
                                break;
                            }else{
                                tempc = tempc ->nextc;
                            }
                        }
                        tempc = headc;
                        while(tempc != NULL){//Choice
                            if(tempm ->idC4 == tempc ->idc){//choice 4
                                cout<<"\t"<<"4."<<tempc ->namec<<endl;
                                break;
                            }else{
                                tempc = tempc ->nextc;
                            }
                        }
                        tempc = headc;
                        while(tempc != NULL){//Choice
                            if(tempm ->idC5 == tempc ->idc){//choice 5
                                cout<<"\t"<<"5."<<tempc ->namec<<endl;
                                break;
                            }else{
                                tempc = tempc ->nextc;
                            }
                        }
                        break;
                    }else{
                        tempm = tempm ->nextm;
                    }
                }//matching 3
/////////////////////////////////////////////////////////////Check Answer Question 3///////////////////////////////////////////////////////////////
                tempA = headA;
                    while(tempA != NULL){//Choice 1
                        if(tempm ->idnum == tempA ->idAQ){
                            break;
                        }else{
                            tempA = tempA ->nexta;
                        }
                    }
                cout<<"Choose Choice : ";
                cin>>ch3;
                chek = 0;
                if(ch3 == 1){
                        if(tempm ->idC1 == tempA ->idAC){
                            chek = 1;
                            checkscore++;
                        }else{
                        }
                    cout<<endl;
                    if(chek == 1){
                        cout<<"True!"<<endl;
                    }else{
                        cout<<"False!"<<endl;
                    }
                    cout<<endl;
                }//if choice 1

                else if(ch3 == 2){
                        if(tempm ->idC2 == tempA ->idAC){
                            chek = 1;
                            checkscore++;
                        }else{
                        }
                    cout<<endl;
                    if(chek == 1){
                        cout<<"True!"<<endl;
                    }else{
                        cout<<"False!"<<endl;
                    }
                    cout<<endl;
                }//if choice 2

                else if(ch3 == 3){
                        if(tempm ->idC3 == tempA ->idAC){
                            chek = 1;
                            checkscore++;
                        }else{
                        }
                    cout<<endl;
                    if(chek == 1){
                        cout<<"True!"<<endl;
                    }else{
                        cout<<"False!"<<endl;
                    }
                    cout<<endl;
                }//if choice 3

                else if(ch3 == 4){
                        if(tempm ->idC4 == tempA ->idAC){
                            chek = 1;
                            checkscore++;
                        }else{
                        }
                    cout<<endl;
                    if(chek == 1){
                        cout<<"True!"<<endl;
                    }else{
                        cout<<"False!"<<endl;
                    }
                    cout<<endl;
                }//if choice 4

                else if(ch3 == 5){
                        if(tempm ->idC5 == tempA ->idAC){
                            chek = 1;
                            checkscore++;
                        }else{
                        }
                    cout<<endl;
                    if(chek == 1){
                        cout<<"True!"<<endl;
                    }else{
                        cout<<"False!"<<endl;
                    }
                    cout<<endl;
                }//if choice 5
/////////////////////////////////////////////////////////////End check Answer Question 3///////////////////////////////////////////////////////////

                tempm = headm;
                while(tempm != NULL){//matching Question 4
                    if(temps ->idSQ4 == tempm ->idnum){
                        tempQ = headQ;
                        while(tempQ != NULL){//Question 4
                            if(tempm ->idQu == tempQ ->idQ){
                                cout<<tempQ ->nameQ<<endl<<endl;
                                break;
                            }else{
                                tempQ = tempQ ->nextQ;
                            }
                        }
                        tempc = headc;
                        while(tempc != NULL){//Choice
                            if(tempm ->idC1 == tempc ->idc){//choice 1
                                cout<<"\t"<<"1."<<tempc ->namec<<endl;
                                break;
                            }else{
                                tempc = tempc ->nextc;
                            }
                        }
                        tempc = headc;
                        while(tempc != NULL){//Choice
                            if(tempm ->idC2 == tempc ->idc){//choice 2
                                cout<<"\t"<<"2."<<tempc ->namec<<endl;
                                break;
                            }else{
                                tempc = tempc ->nextc;
                            }
                        }
                        tempc = headc;
                        while(tempc != NULL){//Choice
                            if(tempm ->idC3 == tempc ->idc){//choice 3
                                cout<<"\t"<<"3."<<tempc ->namec<<endl;
                                break;
                            }else{
                                tempc = tempc ->nextc;
                            }
                        }
                        tempc = headc;
                        while(tempc != NULL){//Choice
                            if(tempm ->idC4 == tempc ->idc){//choice 4
                                cout<<"\t"<<"4."<<tempc ->namec<<endl;
                                break;
                            }else{
                                tempc = tempc ->nextc;
                            }
                        }
                        tempc = headc;
                        while(tempc != NULL){//Choice
                            if(tempm ->idC5 == tempc ->idc){//choice 5
                                cout<<"\t"<<"5."<<tempc ->namec<<endl;
                                break;
                            }else{
                                tempc = tempc ->nextc;
                            }
                        }
                        break;
                    }else{
                        tempm = tempm ->nextm;
                    }
                }//matching 4
/////////////////////////////////////////////////////////////Check Answer Question 4///////////////////////////////////////////////////////////////
                tempA = headA;
                    while(tempA != NULL){//Choice 1
                        if(tempm ->idnum == tempA ->idAQ){
                            break;
                        }else{
                            tempA = tempA ->nexta;
                        }
                    }
                cout<<"Choose Choice : ";
                cin>>ch4;
                chek = 0;
                if(ch4 == 1){
                        if(tempm ->idC1 == tempA ->idAC){
                            chek = 1;
                            checkscore++;
                        }else{
                        }
                    cout<<endl;
                    if(chek == 1){
                        cout<<"True!"<<endl;
                    }else{
                        cout<<"False!"<<endl;
                    }
                    cout<<endl;
                }//if choice 1

                else if(ch4 == 2){
                        if(tempm ->idC2 == tempA ->idAC){
                            chek = 1;
                            checkscore++;
                        }else{
                        }
                    cout<<endl;
                    if(chek == 1){
                        cout<<"True!"<<endl;
                    }else{
                        cout<<"False!"<<endl;
                    }
                    cout<<endl;
                }//if choice 2

                else if(ch4 == 3){
                        if(tempm ->idC3 == tempA ->idAC){
                            chek = 1;
                            checkscore++;
                        }else{
                        }
                    cout<<endl;
                    if(chek == 1){
                        cout<<"True!"<<endl;
                    }else{
                        cout<<"False!"<<endl;
                    }
                    cout<<endl;
                }//if choice 3

                else if(ch4 == 4){
                        if(tempm ->idC4 == tempA ->idAC){
                            chek = 1;
                            checkscore++;
                        }else{
                        }
                    cout<<endl;
                    if(chek == 1){
                        cout<<"True!"<<endl;
                    }else{
                        cout<<"False!"<<endl;
                    }
                    cout<<endl;
                }//if choice 4

                else if(ch4 == 5){
                        if(tempm ->idC5 == tempA ->idAC){
                            chek = 1;
                            checkscore++;
                        }else{
                        }
                    cout<<endl;
                    if(chek == 1){
                        cout<<"True!"<<endl;
                    }else{
                        cout<<"False!"<<endl;
                    }
                    cout<<endl;
                }//if choice 5
/////////////////////////////////////////////////////////////End check Answer Question 4///////////////////////////////////////////////////////////

                tempm = headm;
                while(tempm != NULL){//matching Question 5
                    if(temps ->idSQ5 == tempm ->idnum){
                        tempQ = headQ;
                        while(tempQ != NULL){//Question 5
                            if(tempm ->idQu == tempQ ->idQ){
                                cout<<tempQ ->nameQ<<endl<<endl;
                                break;
                            }else{
                                tempQ = tempQ ->nextQ;
                            }
                        }
                        tempc = headc;
                        while(tempc != NULL){//Choice
                            if(tempm ->idC1 == tempc ->idc){//choice 1
                                cout<<"\t"<<"1."<<tempc ->namec<<endl;
                                break;
                            }else{
                                tempc = tempc ->nextc;
                            }
                        }
                        tempc = headc;
                        while(tempc != NULL){//Choice
                            if(tempm ->idC2 == tempc ->idc){//choice 2
                                cout<<"\t"<<"2."<<tempc ->namec<<endl;
                                break;
                            }else{
                                tempc = tempc ->nextc;
                            }
                        }
                        tempc = headc;
                        while(tempc != NULL){//Choice
                            if(tempm ->idC3 == tempc ->idc){//choice 3
                                cout<<"\t"<<"3."<<tempc ->namec<<endl;
                                break;
                            }else{
                                tempc = tempc ->nextc;
                            }
                        }
                        tempc = headc;
                        while(tempc != NULL){//Choice
                            if(tempm ->idC4 == tempc ->idc){//choice 4
                                cout<<"\t"<<"4."<<tempc ->namec<<endl;
                                break;
                            }else{
                                tempc = tempc ->nextc;
                            }
                        }
                        tempc = headc;
                        while(tempc != NULL){//Choice
                            if(tempm ->idC5 == tempc ->idc){//choice 5
                                cout<<"\t"<<"5."<<tempc ->namec<<endl;
                                break;
                            }else{
                                tempc = tempc ->nextc;
                            }
                        }
                        break;
                    }else{
                        tempm = tempm ->nextm;
                    }
                }//matching 5
/////////////////////////////////////////////////////////////Check Answer Question 5///////////////////////////////////////////////////////////////
                tempA = headA;
                    while(tempA != NULL){//Choice 1
                        if(tempm ->idnum == tempA ->idAQ){
                            break;
                        }else{
                            tempA = tempA ->nexta;
                        }
                    }
                cout<<"Choose Choice : ";
                cin>>ch5;
                chek = 0;
                if(ch5 == 1){
                        if(tempm ->idC1 == tempA ->idAC){
                            chek = 1;
                            checkscore++;
                        }else{
                        }
                    cout<<endl;
                    if(chek == 1){
                        cout<<"True!"<<endl;
                    }else{
                        cout<<"False!"<<endl;
                    }
                    cout<<endl;
                }//if choice 1

                else if(ch5 == 2){
                        if(tempm ->idC2 == tempA ->idAC){
                            chek = 1;
                            checkscore++;
                        }else{
                        }
                    cout<<endl;
                    if(chek == 1){
                        cout<<"True!"<<endl;
                    }else{
                        cout<<"False!"<<endl;
                    }
                    cout<<endl;
                }//if choice 2

                else if(ch5 == 3){
                        if(tempm ->idC3 == tempA ->idAC){
                            chek = 1;
                            checkscore++;
                        }else{
                        }
                    cout<<endl;
                    if(chek == 1){
                        cout<<"True!"<<endl;
                    }else{
                        cout<<"False!"<<endl;
                    }
                    cout<<endl;
                }//if choice 3

                else if(ch5 == 4){
                        if(tempm ->idC4 == tempA ->idAC){
                            chek = 1;
                            checkscore++;
                        }else{
                            tempA = tempA ->nexta;
                        }
                    cout<<endl;
                    if(chek == 1){
                        cout<<"True!"<<endl;
                    }else{
                        cout<<"False!"<<endl;
                    }
                    cout<<endl;
                }//if choice 4

                else if(ch5 == 5){
                        if(tempm ->idC5 == tempA ->idAC){
                            chek = 1;
                            checkscore++;
                        }else{
                        }
                    cout<<endl;
                    if(chek == 1){
                        cout<<"True!"<<endl;
                    }else{
                        cout<<"False!"<<endl;
                    }
                    cout<<endl;
                }//if choice 5
/////////////////////////////////////////////////////////////End check Answer Question 5///////////////////////////////////////////////////////////

                break;
            }else{
                temps = temps ->nexts;
            }// if series

        }
        time(&stop);
        int idscoree;
        cout<<"Name  : "<<NAME<<endl;
        cout<<"Score : "<<checkscore<<endl;
        cout<<"Time  : "<<stop-start<<endl<<endl;
        countlines++;
        idscoree = 6000+countlines;
        addsc(idscoree,temps ->idS,NAME,checkscore);
        ofstream outfile;
        outfile.open("Score.dat",ios::out);
        tempsc = headsc;
        while(tempsc != NULL){
            if(tempsc == tailsc){
                outfile<<tempsc ->idsc<<"\t"<<tempsc ->idse<<"\t"<<tempsc ->idna<<"\t"<<tempsc ->idscore;
                break;
            }else{
                outfile<<tempsc ->idsc<<"\t"<<tempsc ->idse<<"\t"<<tempsc ->idna<<"\t"<<tempsc ->idscore<<endl;
            }
             tempsc = tempsc ->nextsc;
        }

        outfile.close();

    break;
    }
//////////////////////////////////////////////End case 7/////////////////////////////////////////
    case 8://Score
    {
        showsc();
    break;
    }
//////////////////////////////////////////////End case 8/////////////////////////////////////////

    }// switch choicehome
    }while(choice!=9);
}
