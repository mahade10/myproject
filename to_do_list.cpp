#include <iostream>
#include <string>
#include<fstream>
using namespace std;


int main()
{
   int choice = 0;
   while (1)
   {
      cout << "Enter you choice " << endint main()
    {
   int choice = 0;
   while (1)
   {
      cout << "Enter you choice " << endl;l;

      cout << "1. add information" << endl;
      cout << "2. show information" << endl;
      cout << "3. Delete information"<<endl;
      cout << "4. exit"<<endl;
      cin >> choice;

      if (choice == 1)
      {
      	string name;
         string description;
         string Date;
         cin.ignore();
         cout<<"Entr your name : ";
         getline(cin,name);
         cout << "Enter your discription : ";
         getline(cin, description);
         cout << "Enter date :";
         cin >> Date;
            else if(choice == 3)
      	{
      		cout<<"Enter which list you want Delete : ";
      		int y;
      		cin>>y;
      		Delete(y-1);
      	}
      else if(choice==4) return 0;
   }
   return 0;
}

