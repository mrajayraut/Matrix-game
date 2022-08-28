include<stdio.h>
#include<conio.h>
void display();
void game();
void swap (int a[4][4]);
int main()
{
    
display();
game();

}
void display()
{

      int a[4][4],x=1;
      int i,j,d=0;
      char str[50];
      printf("Enter your name:-");
      gets(str);
    printf("\nwelcome %s\n\n",str);
    
    printf(" rule of this game is you have only\n four steps to solve this game",str);
    
         printf("\n winning situation\n\n");
    
      for(i=0;i<4;i++)
        {
          printf("|");
          for(j=0;j<4;j++)
              {
                  a[i][j]=x;
                   if(x<10)
                    {
                      printf(" ");
                     }
                                                                        
                   if(x!=16)
                   {                                  
                     printf("%d| ",a[i][j]);
                   }
                   else
                   {
                    printf("  |");
                   }
                 
                   x++;
               }
          printf("\n");
         }
        printf("zero is move you press this buttons\n");
        printf("\n\npress 2 to go upword direction\n");
        printf("press 8 to go down word direction\n");
        printf("press 4 to go left direction\n");
        printf("press 6 to go right direction\n");      
       printf("\n\n\tpress enter key to start game");
     getch();
    }
    
    
    
    
    
      
 void game()
{
   int a[4][4];
   int b=15,i,j,v;
clrscr();
for(i=0;i<4;i++)
    {    
          for(j=0;j<4;j++)      
             {
                if(b<10)
                 {
                   printf (" ");
                  }
          
               if(b>0)
                 {
                   a[i][j]=b;
                   printf("%d |",a[i][j]);
                    b--;
                  } 
                else
                {
                a[i][j]=' ';
                printf("  |");
            
                }   
            
         
              }
            printf ("\n");
     }              
        
  swap(a);
            
 }   

    
        
                  
void swap (int a[4][4])
{
     int v,i,j;
    
   for(v=0;v<4;v++)
{
 
         int z,m;
         scanf("%d",&z);
         switch(z)
     {
         case 2:
         {
            clrscr();
           for(i=0;i<4;i++)
             {
               for(j=0;j<4;j++)
                 {
                    if(a[i][j]==32)
                      {
                         m=a[i-1][j];
                        a[i-1][j]=a[i][j];
                        a[i][j]=m;
                       
                       }
                                            
                                                 
                      
                  }
    
              }
        
            
            
     for(i=0;i<4;i++)   
       {
         
                       
        for(j=0;j<4;j++)
          {
           if(a[i][j]<10)
           {
           printf(" ");
            }
            if(a[i][j]==32)
            {
            printf("%c  |",a[i][j]);
            }
            else
            printf("%d |",a[i][j]);
           }
        printf("\n");
      }
    

    break;
 }

    

     case 4:
         {
       
          for(i=0;i<4;i++)
          {
            for(j=0;j<4;j++)
            {
              if(a[i][j]==32)           
               {
                   m=a[i][j-1];
                   a[i][j-1]=a[i][j];
                   a[i][j]=m;
               }
            }
            
          }
       
          clrscr();
     for(i=0;i<4;i++)   
       {
         
                       
        for(j=0;j<4;j++)
          {
           if(a[i][j]<10)
           {
           printf(" ");
            }
            if(a[i][j]==32)
            {
            printf("%c  |",a[i][j]);
            }
            else
            printf("%d |",a[i][j]);
           }
        printf("\n");
        }
        
      
    break;
    }
 case 6:
         {
       
          for(i=0;i<4;i++)
          {
            for(j=0;j<4;j++)
            {
              if(a[i][j]==32)           
               { 
                 int f;
                   j=j+1;                                
                                                                              
                  if(j==4)
                  {
                    i=i+1;
                  m=a[i][0];
                  a[i][0]=a[i-1][3];
                  a[i-1][3]=m;
                  }
            else{
            
                   m=a[i][j-1];
                   a[i][j-1]=a[i][j];
                   a[i][j]=m;
                    }
               }
            }
            
          }
       
          clrscr();
     for(i=0;i<4;i++)   
       {
         
                       
        for(j=0;j<4;j++)
          {
           if(a[i][j]<10)
           {
           printf(" ");
            }
            if(a[i][j]==32)
            {
            printf("%c  |",a[i][j]);
            }
            else
            printf("%d |",a[i][j]);
           }
        printf("\n");
      }
    break;
    }
 case 8:
{
   for(i=0;i<4;i++)
          {
            for(j=0;j<4;j++)
            {
              if(a[i][j]==32)           
               { 
                   i=i+1;                        
            
                
                   m=a[i-1][j];
                   a[i-1][j]=a[i][j];
                   a[i][j]=m;
                 
               }
            }
            
          }
       
          clrscr();
     for(i=0;i<4;i++)   
       {
         
                       
        for(j=0;j<4;j++)
          {
           if(a[i][j]<10)
           {
           printf(" ");
            }
            if(a[i][j]==32)
            {
            printf("%c  |",a[i][j]);
            }
            else
            printf("%d |",a[i][j]);
           }
        printf("\n");
      }
    break;
    }
  }
      
}
}
  

