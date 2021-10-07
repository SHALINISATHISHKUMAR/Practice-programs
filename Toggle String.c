#include <stdio.h>

#include <string.h>

int main()
{
    
            char s[100];
   
            int i=0;
    
            printf("Enter string:");
  
            gets(s);
    
            while(s[i])

            {
        
             if(s>='65'&&s<='90')
         
             s=s+32;
        
             if(s1>='97'&&s<='122')
          
             s=s-32
         
             s[i++];
   
            }
   
         printf("Toggle string is %s",s);
   
         return 0;

}