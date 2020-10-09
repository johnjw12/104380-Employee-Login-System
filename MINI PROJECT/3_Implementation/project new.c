#include<stdio.h>
#include<stdlib.h>

/**
 * This is the main function
 *
*/

int main()
{
    /// This is a test
 int userID[]= {104380},userPasswords[]={1234,1111},i,user,password,count=0,flag=0;
    do{
      printf("Enter the user ID\n");
      scanf("%d",&user);
      printf("Enter 4 digit Pincode\n");
      scanf("%d",&password);

     for(i=0;i<2;i++)
     {
         // check userID and userPasswords
      if( userID == user || userPasswords[i]== password)
      {
       printf("Authentication Successful\n");
       flag=1;
       break;
      }
     }
     // count the no.of times user used
     if(flag==0)
     {
      if(count!=2)
      printf("INVALID PASSWORD,try again. %d times Over\n",count+1);
      else
      printf("EXCEEDS %d times Over\n",count+1);
      count+=1;
     }
    }
    // if trail access exceeds , access will be denied
    while(count>0 && count<3 && flag==0);
  if(flag==0)
  {
   printf("You exceeded your trail.Access Denied\n");
  }
}
