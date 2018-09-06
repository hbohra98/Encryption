#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
   char data[100],encrypdata[100][100];
    int k=0;

        cout<<"Enter the data you want to encrypt(less then 10 characters)"<<endl;
         gets(data);

  for(int i=0;i<6;i++)
     {


          for(int j=0;j<6;j++)
         {
             if(data[k]==' ')
             {
                 k++;
                 j--;

               }

           else

               {
                encrypdata[i][j]=data[k];
                k++;
                }

           }
     }

for(int i=0;i<6;i++)
{
    for(int j=0;j<6;j++)
    {
        cout<<encrypdata[i][j];
    }


}

     cout<<"\n\nThe encrypted data is:\n\n";
//key=425130

     for(int i=0;i<2;i++)
{
       if(encrypdata[i][4]!=' ')
       {
          cout<<encrypdata[i][4];
       }

}

    for(int i=0;i<2;i++)

{
  if(encrypdata[i][2]!=' ')
  {

     cout<<encrypdata[i][2];
  }

}



    for(int i=0;i<2;i++)

{
    if(encrypdata[i][5]!=' ')
    {
     cout<<encrypdata[i][5];
    }
}


    for(int i=0;i<2;i++)

{
       if(encrypdata[i][1]!=' ')
       {
          cout<<encrypdata[i][1];
       }
}


    for(int i=0;i<2;i++)

{
      if(encrypdata[i][3]!=' ')
      {

     cout<<encrypdata[i][3];
      }

}


    for(int i=0;i<2;i++)

{
  if(encrypdata[i][0]!=' ')
    {
    cout<<encrypdata[i][0];
    }

}
    return 0 ;
	}
