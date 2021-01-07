// ConsoleApplication36.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
Name: jabir abdallah ismail adam
* Class : secand class
* Department : Computer Engineering*/


//Phone directory program using linked list and file handling 
#include<iostream>  
#include<fstream> //this is file library
#include<string>// this is string library
using namespace std;
fstream myfile; // here i have name the library
struct clients//this is the beging of the struck and his name is clients
{
    //parts of a node  and include the deinition of the strings.  
    string name; 

    string   GivenName;

    string  Additional Name;

    string Family Name;

    string Yomi Name;

    string Given Name Yomi;

    string Additional Name Yomi;

    string Family Name Yomi;

    string Name Prefix;

    string Name Suffix;

    string Initials;

    string Nickname;

    string Short Name;

    string Maiden Name;

    string Birthday;

    string Gender;

    string Location;

    string Billing Information;

    string Directory Server;

    string Mileage;

    string Occupation;

    string Hobby;

    string Sensitivity;

    string Priority;

    string Subject;

    string  Notes;

    string Language;

    string Photo;
         
    string Group Membership;

    string E - mail 1 - Type;

    string E - mail 1 - Value;

    string E - mail 2 - Type;

    string E - mail 2 - Value;

    string Phone 1 - Type;

    string Phone 1 - Value;

    string Phone 2 - Type;

    string Phone 2 - Value;

    string Phone 3 - Type;

    string Phone 3 - Value;

    string Phone 4 - Type;

    string Phone 4 - Value;

    string Organization 1 - Type;

    string Organization 1 - Name;

    string Organization 1 - Yomi Name;

    string Organization 1 - Title;

    string Organization 1 - Department;

    string Organization 1 - Symbol;

    string Organization 1 - Location;

    string Organization 1 - Job Description;

    string Website 1 - Type;

        string Website 1 - Value;



    clients* link;  
    clients()
    {
        link = NULL;
    }
}; 
class directory {
    //pointers to handle the linklist  and to help me to reslove my problems
clients* start, * cur, * temp; 
public:  directory()// this is the beginging of the class ander the name directory
    {
        start = NULL;
    }
    //function to create nodes  
      creat_file//name of the function
      (string n,
          string num,
          string cn,
          string data,
          string data6,
          string  data7,
          string  data8,
          string data9,
          string data10,
          string  data11,
          string data12,
          string data13,
          string data14,
          string data15,
          string data16,
          string  data17,
          string  data18,
          string data19,
          string data20,
          string data21,
          string data22,
          string data23,
          string data24,
          string data25,
          string data26,
          string data27,
          string data28,
          string data29,
          string data30,
          string data31,
          string data32,
          string data33,
          string data34,
          string data35,
          string data36,
          string data37,
          string data38,
          string data39,
          string data40,
          string data41,
          string data42,
          string data43,
          string data44,
          string data45,
          string data46,
          string data47,
          string data48,
          string data49,
          string data50,
          string data51,
    )
    {
        //create  node  by  thire data   
          if (start == NULL)
          {
              start = new clients;
              start->link = NULL;
              start->name = n;
              start->GivenName = num;
              start->AdditionalName= cn;
              start->Familyname = data;
           

              start->YomiName = data6;
              start->GivenNameYomi = data7;

              start->AdditionalNameYomi = data8;


              start->FamilyNameYomi = data9;

              start->NamePrefix = data10;

              start->NameSuffix = data11;

              start->Initials = data12;

              start->Nickname = data13;

                  start->ShortName = data14;
                 

                  start->MaidenName = data15;

                  start->Birthday = data16;

                  start->Gender = data17;

                  start->Location = data18;

                  start->BillingInformation = data19;

                  start->DirectoryServer = data20;

                  start->Mileage = data21;

                  start->Occupation = data22;

                  start->Hobby = data23;

                  start->Sensitivity = data24;

                  start->Priority = data25;

                  start->Subject = data26;

                  start->Notes = data27;

                  start->Language = data28;

                  start->Photo = data29;

                  start->GroupMembership = data30;

                  start->Email-1 = data31;

                  start -> Email1Value = data32;

                  start->E -mail2-Type = data33;

                  start->E - mail2-Value = data34;

                  start->Phone1-Type = data35;

                  start->Phone1-Value = data36;

                  start->Phone2 - Type = data37;

                  start->Phone2-Value = data38;

                  start->Phone3-Type = data39;

                  start->Phone3-Value = data40;

                  start->Phone4-Type = data41;

                  start->Phone4-Value = data41;

                  start->Organization1-Type = data42;

                  start->Organization1-Name = data43;

                  start->Organization1-YomiName = data44;

                  start->Organization1-Title = data45;

                  start->Organization1-Department = data46;

                  start->Organization1-Symbol = data47;

                  start->Organization1-Location = data48;

                  start->Organization1-JobDescription = data49;

                  start->Website1-Type = data50;

                  start->Website1-Value = data51;
        

        myfile.open("directory.txt", ios::out | ios::app);
        myfile << "Name:" << start->name << "Given Name:_" << start->GivenName  << "Additional Name :" << start->AdditionalName << " Familyname :" << start->Familyname
            << "yomi name :" << start->YomiName << "givenameyomi :" << start->GivenNameYomi <<

            "Additional NameYomi" << start->AdditionalNameYomi <<

            "FamilyNameYomi :" << start->FamilyNameYomi <<

            "NamePrefix :" << start->NamePrefix <<

            "NameSuffix :" << start->NameSuffix <<

            "Initials :" start->Initials <<

            "Nickname :" start->Nickname <<

            ">ShortName :" start->ShortName <<


            "MaidenName :"start->MaidenName <<

            "Birthday :" start->Birthday <<

            "Gender :" start->Gender <<

            "Location :" start->Location <<

            "BillingInformation :" start->BillingInformation <<

            "BillingInformation :" start->DirectoryServer <<

            "Mileage :" start->Mileage <<

            "Occupation :" start->Occupation <<

            "Hobby :" start->Hobby <<

            "Sensitivity:" start->Sensitivity <<

            "Priority " start->Priority <<

            "Subject :" start->Subject <<

            "Notes :" start->Notes <<

            "Language :" start->Language <<

            "Photo:" start->Photo <<

            "GroupMembership :" start->GroupMembership <<

            "Email - 1 :" start->Email - 1 <<

            "Email1Value :" start->Email1Value <<

            "E - mail2 - Type :" start->E - mail2 - Type <<

            "E - mail2 - Value :" start->E - mail2 - Value <<

            "Phone1 - Type:" start->Phone1 - Type <<

            "Phone1 - Value " start->Phone1 - Value <<

            "Phone2 - Type :" start->Phone2 - Type <<

            "Phone2 - Value :" start->Phone2 - Value <<

            "Phone3 - Type :" start->Phone3 - Type <<

            ">Phone3 - Value :" start->Phone3 - Value <<

            ">Phone4 - Type :" start->Phone4 - Type <<

            "Phone4 - Value :" start->Phone4 - Value <<

            "Organization1 - Type :" start->Organization1 - Type <<

            "Organization1 - Name:" start->Organization1 - Name <<

            "Organization1 - YomiName :"  start->Organization1 - YomiName <<

            "Organization1 - Title :" start->Organization1 - Title <<

            "Organization1 - Department:" start->Organization1 - Department <<

            "Organization1 - Symbol :" start->Organization1 - Symbol <<

            "Organization1 - Location :" start->Organization1 - Location <<

            "Organization1 - JobDescription:" start->Organization1 - JobDescription <<

            "Organization1 - JobDescription:" start->Website1 - Type << 

            "Website1 - Value:" start->Website1 - Value << endl;
            
        myfile.close();
        }
        //to create new node..  
   else {
   cur = start;      while (cur->link != NULL)
   {
       cur = cur->link;
   }
   temp = new clients;    
   temp->name = n;
   temp->GivenName= num;
   temp->AdditionalName = cn;
   start->Familyname = data;
   start->YomiName = data6;
   start->GivenNameYomi = data7;
   start->AdditionalNameYomi = data8;
   start->FamilyNameYomi = data9;
   start->NamePrefix = data10;
   start->NameSuffix = data11;
   start->Initials = data12;
   start->Nickname = data13;
   start->ShortName = data14;
   start->MaidenName = data15;
   start->Birthday = data16;
   start->Gender = data17;
   start->Location = data18;
   start->BillingInformation = data19;
   start->DirectoryServer = data20;
   start->Mileage = data21;
   start->Occupation = data22;
   start->Hobby = data23;
   start->Sensitivity = data24;
   start->Priority = data25;
   start->Subject = data26;
   start->Notes = data27;
   start->Language = data28;
   start->Photo = data29;
   start->GroupMembership = data30;
   start->Email - 1 = data31;
   start->Email1Value = data32;
   start->E - mail2 - Type = data33;
   start->E - mail2 - Value = data34;
   start->Phone1 - Type = data35;
   start->Phone1 - Value = data36;
   start->Phone2 - Type = data37;
   start->Phone2 - Value = data38;
   start->Phone3 - Type = data39;
   start->Phone3 - Value = data40;
   start->Phone4 - Type = data41;
   start->Phone4 - Value = data41;
   start->Organization1 - Type = data42;
   start->Organization1 - Name = data43;
   start->Organization1 - YomiName = data44;
   start->Organization1 - Title = data45;
   start->Organization1 - Department = data46;
   start->Organization1 - Symbol = data47;
   start->Organization1 - Location = data48;
   start->Organization1 - JobDescription = data49;
   start->Website1 - Type = data50;
   start->Website1 - Value = data51;
   temp->link = NULL;  
   cur->link = temp;  
   myfile.open("directory.txt", ios::out | ios::app); // here i have open file  ander the name directory to svae the data that i want to use in this program 
   myfile << "Name_:_" << temp->name << "__|__Additional Name:_" << temp->AdditionalName<< "__|__Given Name:_" << temp->Given Name<<
       " Familyname :" << start->Familyname
       << "yomi name :" << start->YomiName << "givenameyomi :" << start->GivenNameYomi <<

       "Additional NameYomi" << start->AdditionalNameYomi <<

       "FamilyNameYomi :" << start->FamilyNameYomi <<

       "NamePrefix :" << start->NamePrefix <<

       "NameSuffix :" << start->NameSuffix <<

       "Initials :" start->Initials <<

       "Nickname :" start->Nickname <<

       ">ShortName :" start->ShortName <<


       "MaidenName :"start->MaidenName <<

       "Birthday :" start->Birthday <<

       "Gender :" start->Gender <<

       "Location :" start->Location <<

       "BillingInformation :" start->BillingInformation <<

       "BillingInformation :" start->DirectoryServer <<

       "Mileage :" start->Mileage <<

       "Occupation :" start->Occupation <<

       "Hobby :" start->Hobby <<

       "Sensitivity:" start->Sensitivity <<

       "Priority " start->Priority <<

       "Subject :" start->Subject <<

       "Notes :" start->Notes <<

       "Language :" start->Language <<

       "Photo:" start->Photo <<

       "GroupMembership :" start->GroupMembership <<

       "Email - 1 :" start->Email - 1 <<

       "Email1Value :" start->Email1Value <<

       "E - mail2 - Type :" start->E - mail2 - Type <<

       "E - mail2 - Value :" start->E - mail2 - Value <<

       "Phone1 - Type:" start->Phone1 - Type <<

       "Phone1 - Value " start->Phone1 - Value <<

       "Phone2 - Type :" start->Phone2 - Type <<

       "Phone2 - Value :" start->Phone2 - Value <<

       "Phone3 - Type :" start->Phone3 - Type <<

       ">Phone3 - Value :" start->Phone3 - Value <<

       ">Phone4 - Type :" start->Phone4 - Type <<

       "Phone4 - Value :" start->Phone4 - Value <<

       "Organization1 - Type :" start->Organization1 - Type <<

       "Organization1 - Name:" start->Organization1 - Name <<

       "Organization1 - YomiName :"  start->Organization1 - YomiName <<

       "Organization1 - Title :" start->Organization1 - Title <<

       "Organization1 - Department:" start->Organization1 - Department <<

       "Organization1 - Symbol :" start->Organization1 - Symbol <<

       "Organization1 - Location :" start->Organization1 - Location <<

       "Organization1 - JobDescription:" start->Organization1 - JobDescription <<

       "Organization1 - JobDescription:" start->Website1 - Type <<

       "Website1 - Value:" start->Website1 - Value << 

       endl;
   myfile.close(); // here i have close the file after i had saved my data
   }
    }

    void terminating_file(string n) // this is terminating function we delete the name by it
    {
        cur = start;    
        if (start->name == n)
        {
            temp = start;  
            start = start->link;    
            delete temp;
        }
        else
        {
            while (cur->name != n)
            {
                if (cur->link == NULL)
                {
                    cout << "Any case of" << n << " does not exist" << endl;
                    return;
                }
                temp = cur;  
                cur = cur->link;
            }
            temp->link = cur->link; 
            delete cur;
        }

    }

    // this is  the function of the print and we can print data of the linklist.  by this function 
    void print_now()
    {
        cur = start; 
        int good;
        cout << "Person #" << " ---> Name    \tGiven Name  \tAdditional Name  "<< endl;   
        for (good = 1; cur->link != NULL; c++)
        {
            cout << "Person " << good << " ---> " << cur->name << "\t" << cur->Givenname << "\t" << cur->AdditionalName <<    endl;
            cur = cur->link;
        }
        cout << "Person " << good << " ---> " << cur->name << "\t" << cur->Givenname << "\t" << cur->AdditionalName << endl;
    }   void search(string n)
    {
        cur = start; 
        while (cur != NULL)
        {
            if (cur->name == n)
            {
                char mod;
                cout << "\n\t_________DATA FOUND__________\n\n";  
                cout << "Name : " << cur->name << endl;  
                cout << "CNIC : " << cur->AdditionalName << endl;
                cout << "Phone # : " << cur->Givenname << endl;
                cout << "\nDo You want to modify Phone Number (y/n) : ";
                cin >> mod;
                if (mod == 'y' || mod == 'Y')
                {
                    cout << "Enter New Phone Number ";  
                    cin >> cur->number;
                    cout << "\n\t_________Data Updated________" << endl;
                }
                break;
            }
            cur = cur->link;
        }
        if (cur == NULL)  	 cout << "\n\t_______DATA NOT FOUND_________\n\n";
    }  void print()
    {
        //this function will read the  reads the data from file  that i have create it before
        string s;
        myfile.open("directory.txt", ios::in); //and this is file that the function will read the data orm it 
        while (!myfile.eof())
        {
            myfile >> s;  	
            cout << s << endl;
        }
        myfile.close();
    }
};  int main()
{
    directory l1; // here i have called the class 
    int nooffiles, i, p, ch,;
    string n,
        nm,
        cnc,
         data,
         data6,
         data7,
         data8,
         data9,
         data10,
          data11,
         data12,
         data13,
         data14,
     data15,
         data16,
         data17,
         data18,
         data19,
         data20,
         data21,
        data22,
         data23,
        data24,
         data25,
         data26,
         data27,
           data28,
         data29,
         data30,
         data31,
         data32,
         data33,
         data34,
         data35,
         data36,
         data37,
         data38,
         data39,
         data40,
         data41,
         data42,
         data43,
         data44,
         data45,
         data46,
         data47,
         data48,
         data49,
         data50,
         data51,
        )

    cout << "\n\t============================================================= ======\n\n"; 
    cout << "\t\t\t PHONE DIRECTORY SYSTEM\n"; // when you open the program us a user you will see this us atitle of progaram

    cout << "\n\t============================================================= ======\n\n";

    cout << "\n\t============================================================ ======\n\n"; 
    cout << "\n\t1 - SAVE NUMBERS\n"; // if you enter 1 you will beable to save  
    cout << "\n\t2 - CAN SEARCH AND UPDATE THE NUMBER\n";// if you enter 2 you will beable to search about your number and your name

    cout << "\n\t3- WHEN A NUMBER IS OFF,,, YOU CAN DELETE IT FROM YOUR DIRECTORY\n"; // if you enter 3 you beable to delete what you want to delete from the file
    cout << "\n\t4-CAN SEE ALL THE LIST ANY TIME\n"; // if you enter 4 you will beable to see the list that include the names

    cout << "\n\t==================================================== ======\n\n";
    cout << "\n\t========================SAVE NAMES============================== = \n" << endl;
    //no. of files.  
    cout << "\thow many numbers you want to save" << endl;   cin >> nooffiles;
    //create/save data of each memeber....function call pass data..  
    for(i=1;i<=nooffiles;i++)  
    {
        cout << "\n\tEnter Name \t";
        //getline(cin,n);
        cin>>n;   
        cout<<"\n\tEnter Given Name \t";
        cin>>nm; 
        cout<<"\n\tEnter Additional Name \t"; 
        cin>>cnc; 
        cout << "\n\tEnter family name \t";
        cin >> data;
        cout << "\n\tENTERYomi Name \t";
        cin>> data6;
        cout << "\n\tENTER Given Name Yomi \t";
        cin >> data7;
        cout << "\n\tAdditional Name Yomi";
        cin >> data8;
         cout << "\n\tFamily Name Yomit"; 
          cin >> data9;
          cout << "\n\tName Prefix";
            cin >> data10;
            cout << "\n\tName Suffix";
            cin >> data11;
            cout << "\n\tInitials";
            cin >> data12;
            cout << "\n\tNickname";
            cin >> data13;
            cout << "\n\tShort Name";
            cin >> data14;
            cout << "\n\tMaiden Name";
            cin >> data15;
            cout << "\n\tBirthday";
            cin >> data16;
            cout << "\n\tGender";
            cin >> data17;
            cout << "\n\tLocation";
            cin >> data18;
            cout << "\n\tBilling Information";
            cin >> data19;
            cout << "\n\tDirectory Server";
            cin >> data20;
            cout << "\n\tMileage";
            cin >> data21;
            cout << "\n\tOccupation";
            cin >> data22;
            cout << "\n\tHobby";
            cin >> data23;
                cout << "\n\tSensitivityt";
            cout << "\n\tPriority";
            cin >> data24;
            cout << "\n\tSubject";
            cin >> data25;
            cout << "\n\tNotes";
            cin >> data25;
            cout << "\n\tLanguage";
            cin >> data26;
            cout << "\n\tPhoto";
            cin >> data27;
            cout << "\n\tGroup Membership";
            cin >> data28;
            cout << "\n\tE-mail 1 - Type";
            cin >> data29;
            cout << "\n\tE-mail 1 - Value";
            cin >> data30;
            cout << "\n\tE-mail 2 - Typet";
            cin >> data31;
            cout << "\n\tE-mail 2 - Value";
            cin >> data32;
            cout << "\n\tPhone 1 - Type";
            cin >> data33;
            cout << "\n\tPhone 1 - Value";
            cin >> data34;
            cout << "\n\tPhone 2 - Type";
            cin >> data35;
            cout << "\n\tPhone 2 - Value";
            cin >> data36;
            cout << "\n\tPhone 3 - Type";
            cin >> data37;
            cout << "\n\tPhone 3 - Value";
            cin >> data38;
            cout << "\n\tPhone 4 - Type";
            cin >> data39;
            cout << "\n\tPhone 4 - Value";
            cin >> data40;
            cout << "\n\tOrganization 1 - Typet";
            cin >> data41;
            cout << "\n\tOrganization 1 - Name";
            cin >> data42;
            cout << "\n\tOrganization 1 - Yomi Name";
            cin >> data43;
            cout << "\n\tOrganization 1 - Title";
            cin >> data44;
            cout << "\n\tOrganization 1 - Department";
            cin >> data45;
            cout << "\n\tOrganization 1 - Symbol";
            cin >> data46;
            cout << "\n\tOrganization 1 - Location";
            cin >> data47;
            cout << "\n\tOrganization 1 - Job Description";
            cin >> data49;
            cout << "\n\tWebsite 1 - Type";
            cin >> data50;
            cout << "\n\tWebsite 1 - Value";
            cin >> data51;
        l1.creat_file(n,//function ander the name creat 
            nm
            ,cnc ,
             data,
             data6,
              data7,
              data8,
             data9,
             data10,
              data11,
             data12,
             data13,
             data14,
             data15,
             data16,
              data17,
              data18,
            data19,
             data20,
             data21,
             data22,
             data23,
             data24,
             data25,
             data26,
             data27,
             data28,
             data29,
             data30,
             data31,
             data32,
             data33,
             data34,
             data35,
             data36,
            data37,
             data38,
             data39,
             data40,
             data41,
             data42,
             data43,
             data44,
             data45,
             data46,
             data47,
             data48,
             data49,
             data50,
             data51,
            );  
    }
    system("CLS");
    do//this loop to make you able to use the program as user more than on or as you want
    {
        cout << "\n\nWhat You want to do with your cases now" << endl; 
        cout << "\n1-Save new phone number\n"; 
        cout << "2-Delete any number" << endl; 
        cout << "3-Search and Modify" << endl; 
        cout << "4-See All list" << endl; 
        cout << "5-Exit\n" << endl;
        cin >> ch;
        system("CLS");
        switch (ch)
        {
        case 1: // this case to help to enter your data
            cout << "\n\t============================SAVE NEW NUMBER============================\n\n";
            cout << "Enter Data to insert new person's data'" << endl;

            cout << "\nEnter Name \t";
            //getline(cin,n);  
            cin >> n; 
            cout << "\nEnter Phone Given Name \t"; 
            cin >> nm; 
            cout << "Enter Additional Name \t";  
            cin >> cnc; 
            cout << "enter fmaily name\t ";
            cin >> data;
            cout << "\n\tEnter family name \t";
            cin >> data;
            cout << "\n\tENTERYomi Name \t";
            cin >> data6;
            cout << "\n\tENTER Given Name Yomi \t";
            cin >> data7;
            cout << "\n\tAdditional Name Yomi";
            cin >> data8;
            cout << "\n\tFamily Name Yomit";
            cin >> data9;
            cout << "\n\tName Prefix";
            cin >> data10;
            cout << "\n\tName Suffix";
            cin >> data11;
            cout << "\n\tInitials";
            cin >> data12;
            cout << "\n\tNickname";
            cin >> data13;
            cout << "\n\tShort Name";
            cin >> data14;
            cout << "\n\tMaiden Name";
            cin >> data15;
            cout << "\n\tBirthday";
            cin >> data16;
            cout << "\n\tGender";
            cin >> data17;
            cout << "\n\tLocation";
            cin >> data18;
            cout << "\n\tBilling Information";
            cin >> data19;
            cout << "\n\tDirectory Server";
            cin >> data20;
            cout << "\n\tMileage";
            cin >> data21;
            cout << "\n\tOccupation";
            cin >> data22;
            cout << "\n\tHobby";
            cin >> data23;
            cout << "\n\tSensitivityt";
            cout << "\n\tPriority";
            cin >> data24;
            cout << "\n\tSubject";
            cin >> data25;
            cout << "\n\tNotes";
            cin >> data25;
            cout << "\n\tLanguage";
            cin >> data26;
            cout << "\n\tPhoto";
            cin >> data27;
            cout << "\n\tGroup Membership";
            cin >> data28;
            cout << "\n\tE-mail 1 - Type";
            cin >> data29;
            cout << "\n\tE-mail 1 - Value";
            cin >> data30;
            cout << "\n\tE-mail 2 - Typet";
            cin >> data31;
            cout << "\n\tE-mail 2 - Value";
            cin >> data32;
            cout << "\n\tPhone 1 - Type";
            cin >> data33;
            cout << "\n\tPhone 1 - Value";
            cin >> data34;
            cout << "\n\tPhone 2 - Type";
            cin >> data35;
            cout << "\n\tPhone 2 - Value";
            cin >> data36;
            cout << "\n\tPhone 3 - Type";
            cin >> data37;
            cout << "\n\tPhone 3 - Value";
            cin >> data38;
            cout << "\n\tPhone 4 - Type";
            cin >> data39;
            cout << "\n\tPhone 4 - Value";
            cin >> data40;
            cout << "\n\tOrganization 1 - Typet";
            cin >> data41;
            cout << "\n\tOrganization 1 - Name";
            cin >> data42;
            cout << "\n\tOrganization 1 - Yomi Name";
            cin >> data43;
            cout << "\n\tOrganization 1 - Title";
            cin >> data44;
            cout << "\n\tOrganization 1 - Department";
            cin >> data45;
            cout << "\n\tOrganization 1 - Symbol";
            cin >> data46;
            cout << "\n\tOrganization 1 - Location";
            cin >> data47;
            cout << "\n\tOrganization 1 - Job Description";
            cin >> data49;
            cout << "\n\tWebsite 1 - Type";
            cin >> data50;
            cout << "\n\tWebsite 1 - Value";
            cin >> data51;
            l1.creat_file
            (n, nm, cnc)
                // those case include all acasse of the program delete and sharch and printing or seeing all the list eles will show you that is weong 
            cout << "Number of " << n << " has been Saved in your phone directory " << endl;
        break;  
        case 2:
            cout << "\n\t=========================DELETE NUMBER============================\n\n";
            cout << "\nEnter name of person whose number you want to delete\n" << endl;
            //getline(cin,n); 
            cin>>n;  
            l1.terminating_file(n); 
            cout<<"\nNumber of "<<n<<" Has been removed from your list"<<endl;  
        break;  
        case 3:
            cout << "\n\t=====================SEARCH AND UPDATE NUMBER=====================\n\n";
            cout << "Enter NAME of Person to search it from list\t";
            cin >> n;
            l1.search(n);
            break;
        case 4:
            cout << "\n\t=====================PRINTING ALL LIST============================\n\n";
            l1.print();
            break;
        case 5:
            cout << "\n\t====================LIST OF Numbers added now======================\n\n";
            l1.print_now();
            break;
        default:
            cout << "\t----------WRONG----------" << endl;
        }
    } while (ch != 5); 
    cout << "\nTHANK YOU FOR USING THIS ANA DOG BLESSED YOU" << endl;
    getch();
  

}

