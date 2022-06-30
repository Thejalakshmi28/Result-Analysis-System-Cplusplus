#include<iostream.h>
#include<fstream.h>
#include<iomanip.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<process.h>


    class student
	 {   int c[10],p[10],cs[10],m[9],e[9];
	    int rollno;
	    int perc[9];
	    
	    char name[50];

	    char grade[9];
	    void calculate(int);
	    public:
	    void show_tabular(int);
	    void enter_mt1();
	    void enter_mt2();
	    void enter_mt3();
	    void enter_mt4();
	    void enter_mt5();
	    void enter_mt6();
	    void enter_pb1();
	    void enter_pb2();
	    void enter_prac();
	    void enter_final();
	    void display_all();
	    void getdata();
	    void showdata();

	    int retrollno()
	    {
	    return rollno;}
	 };
	 void student::show_tabular(int i)
	 {
	 cout<<endl<<setw(6)<<" "<<name<<setw(10)<<p[i]<<setw(4)<<c[i]<<setw(4)<<m[i]<<setw(4)<<e[i]<<setw(4)<<cs[i]<<setw(6)<<perc[i]<<setw(6)<<" "<<grade[i]<<endl;
	 }
 void student::enter_mt1()
	{
	cout<<"\n enter the marks of mt1";
	cout<<"\n enter the marks of physics";
	cin>>p[1];
	cout<<"\n enter the chemitry marks";
	cin>>c[1];
	cout<<"\n enter the maths marks";
	cin>>m[1];
	cout<<"\n enter the english marks";
	cin>>e[1];
	cout<<"\n enter the computer marks";
	cin>>cs[1];
	calculate(1);
	}


 void student::enter_mt2()
	{
	cout<<"\n enter the marks of mt2";
	cout<<"\n enter the marks of physics";
	cin>>p[2];
	cout<<"\n enter the chemitry marks";
	cin>>c[2];
	cout<<"\n enter the maths marks";
	cin>>m[2];
	cout<<"\n enter the english marks";
	cin>>e[2];
	cout<<"\n enter the computer marks";
	cin>>cs[2];
	calculate(2);
	}
	 void student::enter_mt3()
	{
	cout<<"\n enter the marks of mt3";
	cout<<"\n enter the marks of physics";
	cin>>p[3];
	cout<<"\n enter the chemitry marks";
	cin>>c[3];
	cout<<"\n enter the maths marks";
	cin>>m[3];
	cout<<"\n enter the english marks";
	cin>>e[3];
	cout<<"\n enter the computer marks";
	cin>>cs[3];
	calculate(3);
	}
	 void student::enter_mt4()
	{
	cout<<"\n enter the marks of mt4";
	cout<<"\n enter the marks of physics";
	cin>>p[4];
	cout<<"\n enter the chemitry marks";
	cin>>c[4];
	cout<<"\n enter the maths marks";
	cin>>m[4];
	cout<<"\n enter the english marks";
	cin>>e[4];
	cout<<"\n enter the computer marks";
	cin>>cs[4];
	calculate(4);
	}
	 void student::enter_mt5()
	{
	cout<<"\n enter the marks of mt5";
	cout<<"\n enter the marks of physics";
	cin>>p[5];
	cout<<"\n enter the chemitry marks";
	cin>>c[5];
	cout<<"\n enter the maths marks";
	cin>>m[5];
	cout<<"\n enter the english marks";
	cin>>e[5];
	cout<<"\n enter the computer marks";
	cin>>cs[5];
	calculate(5);
	}
	 void student::enter_mt6()
	{
	cout<<"\n enter the marks of mt1";
	cout<<"\n enter the marks of physics";
	cin>>p[6];
	cout<<"\n enter the chemitry marks";
	cin>>c[6];
	cout<<"\n enter the maths marks";
	cin>>m[6];
	cout<<"\n enter the english marks";
	cin>>e[6];
	cout<<"\n enter the computer marks";
	cin>>cs[6];
	calculate(6);
	}
	 void student::enter_pb1()
	{
	cout<<"\n enter the marks of pb1";
	cout<<"\n enter the marks of physics";
	cin>>p[7];
	cout<<"\n enter the chemitry marks";
	cin>>c[7];
	cout<<"\n enter the maths marks";
	cin>>m[7];
	cout<<"\n enter the english marks";
	cin>>e[7];
	cout<<"\n enter the computer marks";
	cin>>cs[7];
	calculate(7);
	}
	 void student::enter_pb2()
	{
	cout<<"\n enter the marks of pb2";
	cout<<"\n enter the marks of physics";
	cin>>p[8];
	cout<<"\n enter the chemitry marks";
	cin>>c[8];
	cout<<"\n enter the maths marks";
	cin>>m[8];
	cout<<"\n enter the english marks";
	cin>>e[8];
	cout<<"\n enter the computer marks";
	cin>>cs[8];
	calculate(8);
	}
	
	 void student::enter_prac()
	{
	cout<<"\n enter the marks of practicles";
	cout<<"\n enter the marks of physics";
	cin>>p[10];
	cout<<"\n enter the chemitry marks";
	cin>>c[10];
	cout<<"\n enter the computer marks";
	cin>>cs[10];
	
	}

 void student::enter_final()
	{
	cout<<"\n enter the marks of final";
	cout<<"\n enter the marks of physics";
	cin>>p[9];
	cout<<"\n enter the chemitry marks";
	cin>>c[9];
	cout<<"\n enter the maths marks";
	cin>>m[9];
	cout<<"\n enter the english marks";
	cin>>e[9];
	cout<<"\n enter the computer marks";
	cin>>cs[9];
	calculate(9);
	}









   void student::calculate(int i)
	 {
	      perc[i]=(p[i]+c[i]+cs[i]+e[i]+m[i])/5.0;
	    if(perc[i]>=60)
	      grade[i]='A';
	    else if(perc[i]>=50)
	      grade[i]='B';
	    else if(perc[i]>=33)
	      grade[i]='C';
	    else
	      grade[i]='F';
	 }

  void student::getdata()
	 {    int t;
	      cout<<"\n enter the roll number of the student:";
	      cin>>rollno;
	      cout<<"\n\n enter the name of the student:";
	      gets(name);
	      cout<<"\n enter the marks:";

	      cout<<"\n choose the option:";
	      cout<<"\n 1. MT-1";
	      cout<<"\n 2. MT-2";
	      cout<<"\n 3. MT-3";
	      cout<<"\n 4. MT-4";
	      cout<<"\n 5. MT-5";
	      cout<<"\n 6. MT-6";
	      cout<<"\n 7. PRE-BOARD-1";
	      cout<<"\n 8. PRE-BOARD-2";
	      cout<<"\n 9. FINAL";
	      cout<<"\n 10. PRACTICALS";
	      cin>>t;
	      switch(t)
	      {
	      case 1:
	      {
	      enter_mt1();
	      break;
	      }
	      case 2:
	      {
	      enter_mt2();
	      break;
	      }
	      case 3:
	      {
	      enter_mt3();
	      break;
	      }
	      case 4:
	      {
	      enter_mt4();
	      break;
	      }
	      case 5:
	      {
	      enter_mt5();
	      break;
	      }
	      case 6:
	      {
	      enter_mt6();
	      break;
	      }
	      case 7:
	      {
	      enter_pb1();
	      break;
	      }
	      case 8:
	      {
	      enter_pb2();
	      break;
	      }
	      case 9:
	      {
	      enter_final();
	      break;
	      }
	      case 10:
	      {
	      enter_prac();
	      break;
	      }




	      if(t!=10)
	      {
	      cout<<endl<<" percentage of the student:"<<perc[t];
	      cout<<endl<<" grade of the student:"<<grade[t];
	  }      }


  void main()
  {
  void write_student();
  void display_all();
  void display_sp(int);
  void modify_student(int);
  void delete_student(int);
  void class_result();
  void result();
  void intro();
  void admin_menu();

	  intro();
	  char ch;
	  do
	  {
	      clrscr();
	      cout<<"\n\n\n\t MAIN MENU";
	      cout<<"\n\n\t 01. RESULT MENU";
	      cout<<"\n\n\t 02. ADMIN  MENU";
	      cout<<"\n\n\t 03. DISPLAY MENU";
	      cout<<"\n\n\t 04. SEARCH MENU";
	      cout<<"\n\n\t 05. EXIT MENU";
	      cout<<"\n\n\t PLEASE SELECT YOUR OPTION (1-3)";
	      cin>>ch;
	      clrscr();
	      int num;
	      switch(ch)
		  {
		     case '1':result();
			      break;
		     case '2':admin_menu();
			      break;
		     case '3':display_all();
			      break;
		     case '4':cout<<"\n Please enter the roll number:";
		     cin>>num;
		     display_sp(num);
		     break;
		     case '5':
		     exit(0);
		     default:cout<<"\a";
		     }
	  } while(ch!='4');

	    getch();

   }


   void write_student()
      {
	   student st;
	   ofstream outfile;
	   outfile.open("student.dat",ios::binary|ios::app);
	   st.getdata();
	   outfile.write((char*)&st,sizeof(student));
	   outfile.close();
	   cout<<"\n\n student record has been created";
	   cin.ignore();
	   getch();
       }


    void display_sp(int n)
       {
	   student st;
	   ifstream infile;
	   infile.open("student.dat",ios::binary);
	   if(!infile)
	     {
		cout<<"file could not be open !! press any key....";
		getch();
		return;
	     }

	     int flag=0;
	 while(infile.read((char*)&st,sizeof(student)))
	       {
		  if(st.retrollno()==n)
		  {
		  st.showdata();
		  flag=1;
		  }
	       }
	 infile.close();
	 if(flag==0)
	      cout<<"\n\n record not exist";
	      getch();  }



	      void student::showdata()
	      {
		 cout<<"endl";
		 cout<<"\n roll number of students";
		 cout<<"\n name of the student:"<<name;
		  int i;
		 cout<<endl<<" marks in each exam ";
		 for(i=1;i<11;++i)
		 {
		 if(i<10)
		 {

		  if(i<7)
		 cout<<endl<<" MONTHLY TEST "<<i<<" MARKS ";
		 if(i==7||i==8 )
		 cout<<endl<<" PRE BOARD "<<i<<" marks ";
		 if(i==9)
		 cout<<endl<<" FINAL EXAM MARKS ";
		 cout<<"\n marks in physics"<<p[i];
		 cout<<"\n marks in chemistry"<<c[i];
		 cout<<"\n marks in maths"<<m[i];
		 cout<<"\n marks in english"<<e[i];
		 cout<<"\n marks in computer"<<cs[i];
		 cout<<"\n percentage of the student"<<perc[i];
		 cout<<"\n grade of the student is"<<grade[i];
		 }
	      else if(i==10)
	      {
	      cout<<endl<<" practical marks :";
	      cout<<endl<<" physics : "<<p[10];
	      cout<<endl<<" chhemistry :"<<c[10];
	      cout<<endl<<"computer :"<<cs[10];
	      }
	      }

	      }







	      void display_all()
	      {
	      student st;
	      ifstream infile;
	      infile.open("student.dat",ios::binary);
	      if(!infile)
	      {
	      cout<<"file could not be open!!press any key....";
	      getch();
	      return;
	      }
	      cout<<endl<<" display all the record ";
	      while(infile.read((char*)&st,sizeof(student)))
	      {
	      st.showdata();
	      cout<<endl<<"====================================================";
	      }
	      infile.close();
	      getch();
	      }




       void modify_student(int n)
	   {
		int found=0;
		student st;
		fstream file;
		file.open("student.dat",ios::binary|ios::in|ios::out);
		if(!file)
		   {
			cout<<"file could not be open !! press any key....";
			getch();
			return;
		   }
		while(file.read((char*)&st,sizeof(student))&&found==0)
		   {
		if(st.retrollno()==n)
		   {
			st.showdata();
			cout<<"\n\n please enter the new data of the student"<<endl;
			st.getdata();
			int pos=(-1)*sizeof(st);
			file.seekp(pos,ios::cur);
			file.write((char*)&st,sizeof(student));
			cout<<"\n\n\t record updated";
			found=1;
		   }
		}
		file.close();
		if(found==0)cout<<"\n\n record not found";
		getch();
		}



	   void delete_student(int n)
	       {
		  student st;
		  ifstream infile;
		  infile.open("student.dat",ios::binary);
		if(!infile)
		   {
		     cout<<"file could not be open!! press any key...";
		     getch();
		     return;
		   }
	       ofstream outfile;
	       outfile.open("temp.dat",ios::out);
	       infile.seekg(0,ios::beg);
	     while(infile.read((char*)&st,sizeof(student)))
		{
		  if(st.retrollno()!=n)
		    {
		       outfile.write((char*)&st,sizeof(student));
		    }
		}
	     outfile.close();
	     infile.close();
	     remove("student.dat");
	     rename("temp.dat","student.dat");
	     cout<<"\n\n\t record deleted";
	     getch();
	   }



	   void class_result()
	     {
		student st;
		ifstream infile;
		infile.open("student.dat",ios::binary);
	      if(!infile)
		{
		  cout<<"file could not be open!! press any key...";
		  getch();
		  return;
		}
	      int g;
	      cout<<endl<<" CHOOSE THE OPTION ";
	      cout<<endl<<" 1. MT 1";
	      cout<<endl<<" 2. MT 2"
	      cout<<endl<<" 3. MT 3";
	      cout<<endl<<" 4. MT4 ";
	       cout<<endl<<"5. MT5 ";
	       cout<<endl<<"6. MT6 ";
	       cout<<endl<<"7. PREBOARD1 ";
	       cout<<endl<<"8. PREBOARD 2";
	       cout<<endl<<"9. FINAL EXAM ";
	       cin>>g;


	      cout<<"\n\n\t\t ALL STUDENT RESULT \n\n";
	      cout<<"============================== \n";
	      cout<<"RNO        NAME        P   C   M   E   CS\a\a\a\a        PERCENTAGE   GRADE"<<endl;
	      cout<<"=====================================================================\n";
	      while(infile.read((char*)&st,sizeof(student)))
	       {

		 show_tabular(g);
	       }
		 getch();
		 infile.close();
	    }



	    void result()
	      {
		  char ch;
		  int rno;
		  cout<<"\n\n\n\t RESULT MENU";
		  cout<<"\n\n\n\t 1.CLASS RESULT";
		  cout<<"\n\n\t 2.STUDENT REPORT CARD";
		  cout<<"\n\n 3.BACK TO MAIN MENU";
		  cout<<"\n\n\n\t enter the choice(1/2/3)?";
		  cin>>ch;
		  clrscr();
	      switch(ch)
		  {
		    case '1':class_result();
			     break;
		    case '2':cout<<"\n\n\t enter roll number of student:";
			     cin>>rno;
			     display_sp(rno);
			     break;
		    case '3':break;
		     default:cout<<"\a";
		 }
	      }





       void intro()
       {
       cout<<"\n         ---------------------------------------------------------------";
       cout<<"\n\t|\t   W   W"<<"  EEE"<<"  L  "<<"  CCC"<<"  OOO"<<"  M   M"<<"  EEE                |";
       cout<<"\n\t|\t   W   W"<<"  E  "<<"  L  "<<"  C  "<<"  O O"<<"  MM MM"<<"  E                  |";
       cout<<"\n\t|\t   W W W"<<"  EEE"<<"  L  "<<"  C  "<<"  O O"<<"  M M M"<<"  EEE                |";
       cout<<"\n\t|\t   WW WW"<<"  E  "<<"  L  "<<"  C  "<<"  O O"<<"  M   M"<<"  E                  |";
       cout<<"\n\t|\t   W   W"<<"  EEE"<<"  LLL"<<"  CCC"<<"  OOO"<<"  M   M"<<"  EEE                |";
       cout<<"\n\t|\t   -------------------------------------- \t\t|";
       cout<<"\n\t|\t\t RRR"<<"  EEE"<<"  SSS"<<"  U U"<<"  L"<<"    TTT \t\t\t|";
       cout<<"\n\t|\t\t R R"<<"  E"<<"    S"<<"    U U"<<"  L"<<"     T  \t\t\t|";
       cout<<"\n\t|\t\t RRR"<<"  EEE"<<"  SSS"<<"  U U"<<"  L"<<"     T  \t\t\t|";
       cout<<"\n\t|\t\t RR"<<"   E"<<"      S"<<"  U U"<<"  L"<<"     T  \t\t\t|";
       cout<<"\n\t|\t\t R R"<<"  EEE"<<"  SSS"<<"  UUU"<<"  LLL"<<"   T  \t\t\t|";
       cout<<"\n\t|\t\t ------------------------------ \t\t|";
       cout<<"\n\t|\t AAA"<<"  N   N"<<"  AAA"<<"  L"<<"    Y   Y"<<"  SSS"<<"  III"<<"  SSS \t\t|";
       cout<<"\n\t|\t A A"<<"  NN  N"<<"  A A"<<"  L"<<"     Y Y"<<"   S"<<"     I"<<"   S   \t\t|";
       cout<<"\n\t|\t AAA"<<"  N N N"<<"  AAA"<<"  L"<<"      Y"<<"    SSS"<<"   I"<<"   SSS \t\t|";
       cout<<"\n\t|\t A A"<<"  N  NN"<<"  A A"<<"  L"<<"      Y"<<"      S"<<"   I"<<"     S \t\t|";
       cout<<"\n\t|\t A A"<<"  N   N"<<"  A A"<<"  LLL"<<"    Y"<<"    SSS"<<"  III"<<"  SSS \t\t|";
       cout<<"\n\t|\t-------------------------------------------- \t\t|";
       cout<<"\n\t|\t MADE BY- \t\t\t\t\t\t|";
       cout<<"\n\t|\t -------- \t\t\t\t\t\t|";
       cout<<"\n\t|\t THEJALAKSHMI  \t T.SUBHIKSHA \t GAUTHAMI \t\t|";
       cout<<"\n\t|\t SCHOOL NAME: KENDRIYA VIDYALAYA CHENNAI\t \t|";
       cout<<"\n\t|\t ------------ \t\t\t\t\t\t|";
       cout<<"\n\t --------------------------------------------------------------- ";

       getch();
       }



       void admin_menu()
       {
	   char pass[10]="theja";
char a[10],ch;
int i=0,k=3,c;
jump:
clrscr();
ch=0;
i=0;
--k;
cout<<endl<<" enter the password ";
while(ch!=13)
{
ch=getch();
if(ch==13)
break;
a[i]=ch;
cout<<"*";
++i;
}
if(strcmp(a,pass)==0)
{
cout<<endl<<" entry granted ";
system("PAUSE");
goto proceed;
}
else if(k==0)
{
cout<<endl<<" no chances left ";
system("PAUSE");
exit(0);
}
else
{
cout<<endl<<" wrong ";
cout<<endl<<" you have  "<<k<<" chances left ";
cout<<endl<<"press any key to continue ";
getch();
goto jump;
}


   proceed:
   {
		   
       	
	char ch;
	clrscr();
       cout<<"\n\n\n\t ADMIN MENU";
       cout<<"\n\n\t 1.CREATE STUDENT RECORD";
       cout<<"\n\n\t 2.MODIFY STUDENT RECORD";
       cout<<"\n\n\t 3.DELETE STUDENT RECORD";
       cout<<"\n\n\t 4.BACK TO MAIN MENU";
       cout<<"\n\n\t PLEASE ENTER YOUR CHOICE (1-6)";
       cin>>ch;
       clrscr();
       int num;
       switch(ch)
     {
     case '1':
     {
     write_student();
     break;
     }
     case '2':
     {
     cout<<"\n\n please enter the roll number";
     cin>>num;
     modify_student(num);
     break;
     }
     case '3':
     {
     cout<<"\n\n\t please enter the roll number";
     cin>>num;
     delete_student(num);
     break;
     }
     case '4':
	     break;
     default:cout<<"\a";
     admin_menu();
     }

     }
 }

;}




