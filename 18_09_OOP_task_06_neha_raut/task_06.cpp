#include<iostream>

#include<iomanip>

using namespace std;



class personal

{

  protected:

          char name[10],surname[10],dob[10];

          int mob;

          char address[20];

    public:
          personal() {}
          void getdata()

          {

              cout<<"Enter your Name :";

              cin>>name;

              cout<<"Enter your Surname:";

              cin>>surname;

              cout<<"Enter your Mobile No. :";

              cin>>mob;

              cout<<"Enter your Date of Birth :";

              cin>>dob;

              cout<<"Enter your Address :";

              cin>>address;

            
          }

};



class professional

{

  protected:

           char job_profile[10],compname[10],project[10];


     public:
           professional() {}
           void accept()

           {

               cout<<"Enter your Company Name :";

               cin>>compname;

               cout<<"Enter your Project :";

               cin>>project;

               cout<<"Enter your job_profile :";

               cin>>job_profile;

            

           } 

};



class academic

{

  protected:

          char college_name[10],branch[10];

          int year_of_passing,cgpa;


     public:
          academic() {}
          void data()

          {

               cout<<"Enter your college name :";

               cin>>college_name;

               cout<<"Enter your branch :";

               cin>>branch;

               cout<<"Enter your passing year :";

               cin>>year_of_passing;

               cout<<"Enter your cgpa:";

               cin>>cgpa;


          }

};



class biodata:public personal, public professional,public academic 

{

 public:

      void display()

      {

         cout<<"\n********************BIODATA************************\n";

         cout<<"\n********************Personal Data********************\n";

         cout<<"\n"<<"NAME"<<name<<"\n"<<"SURNAME"<<surname<<"\n"<<"MOBLILE NO."<<mob<<"\n"<<"DOB"<<dob<<"\n"<<"ADDRESS"<<address;

        
         cout<<"\n*******************Professional Details****************\n";

         cout<<"\n"<<"NAME OF ORGANIZATION"<<compname<<"\n"<<"PROJECT"<<project<<"\n"<<"JOB PROFILE"<<job_profile;

         

         cout<<"\n*******************Academic Details *******************\n";

         cout<<"\n"<<"YEAR OF PASSING"<<year_of_passing<<"\n"<<"CGPA"<<cgpa<<"\n"<<"COLLEGE NAME"<<college_name<<"\n"<<"BRANCH"<<branch;

       } 

};



int main()

{

  biodata b;

  b.getdata();

  b.accept();

  b.data();

  b.display();

 cout<<"\n\n";

  return 0;

}