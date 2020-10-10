/**
*Program for Login system for employee
*This program is for logins make user accounts possible. Most systems require unique usernames, which ensures every user's login is different. On a more advanced level, logins provide a security layer between unsecured and secured activity
*/
#include<stdio.h>
#include<stdlib.h>



int main()
{

 int userID[]= {104380},userPasswords[]={1234,1111},i,user,password,count=0,flag=0;
    do{
      printf("Enter the user ID\n"); /// enter the userID
      scanf("%d",&user);
      printf("Enter 4 digit Pincode\n"); /// enter the pincode
      scanf("%d",&password);

     for(i=0;i<2;i++)
     {

      if( userID == user || userPasswords[i]== password)
      {
       printf("Authentication Successful\n"); /// check userID and userPasswords
       flag=1;
       break;
      }
     }

     if(flag==0)
     {
      if(count!=2)
      printf("INVALID PASSWORD,try again. %d times Over\n",count+1);
      else
      printf("EXCEEDS %d times Over\n",count+1); /// count the no.of times user used
      count+=1;
     }
    }

    while(count>0 && count<3 && flag==0);
  if(flag==0)
  {
   printf("You exceeded your trail.Access Denied\n"); /// if trail access exceeds , access will be denied
  }
}
