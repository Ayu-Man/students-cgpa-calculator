#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
      int NumStudent,NumCourse[20],NumSem;
      float Mark[100], GPA[20][20], gpa=0, cgpa=0, CGPA[20], Point[20][20][20] ;
      string name[15];
      char grade[50][50][50];
      
      cout <<" how many students:  ";
      cin>>NumStudent;
      cout <<" how many semesters:  ";
      cin>>NumSem;
      
      for(int i=1;i<=NumStudent;++i){
           cout << "enter the name of student " << i<<" : ";
           cin>>name[i];
              for (int j=1;j<= NumSem;++j){
                 cout << "enter the number of course for semester " << j<<" : ";
                 cin>>NumCourse[i];
                 for(int k=1;k<=NumCourse[i];++k){
                     cout << "enter the mark for course " << k<<" :  ";
                     cin>>Mark[k];
                     
                     if(Mark[k]>=85){
                          grade[i][j][j] = 'A';
                     }else if(Mark[k]>=70){
                          grade[i][j][k] = 'B';
                     }else if(Mark[k]>=50){
                          grade[i][j][k] = 'C';
                     }else if(Mark[k]<50){
                          grade[i][j][k] = 'F';
                     } 
                     
                      if (grade[i][j][k]=='A') {  
                            gpa+=4;
                     }if (grade[i][j][k]=='B') {  
                            gpa+=3;
                     }if (grade[i][j][k]=='C')  { 
                            gpa+=2;
                     }if (grade[i][j][k]=='F')   {
                            gpa+=0;
                     }
                     
                 }
                 GPA[i][j] = gpa/NumCourse[i];
                 gpa=0;
                 cgpa+= GPA[i][j];
              }
              CGPA[i]=cgpa/NumSem;
              cgpa=0;
      
      }
      
     cout<<"Name";
      for (int i=1;i<=NumSem;++i){
             for(int j=1;j<=NumCourse[i];++j){
                cout<<setw(10)<<"sem"<<i<<"couse"<<j<<setw(10);}
                cout<<" GPA "<<setw(10);}
                cout<<"CGPA";
                
      for(int i=1;i<=NumStudent;++i){
               cout<<name[i]<<setw(15);
               for(int j=1;j<=NumSem;++j){
                    for(int k=1;k<=NumCourse[i];++k){
                        cout<<grade[i][j][k]<<setw(15);
              }
                 cout<<GPA[i][j]<<setw(15);
             }
             cout<<CGPA[i]<<endl;
      }
      
      
       
return 0;
}
    