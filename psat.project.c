#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool moduleLinearSearch (char* state){
bool status = false;
int j, value;
char place[35][3]={"AN", "AP", "AR", "AS", "BR", "CH", "DN", "DD",
  		   "DL", "GA", "GJ", "HR", "HP", "JK", "KA", "KL",
                           "LD", "MP", "MH", "MN", "ML", "MZ", "NL", "OR",
                           "PY", "PN", "RJ", "SK", "TN", "TR", "UP", "UK", 
                           "WB", "TS", "CG"};

for (j = 0; j < 35; j++) {
        value = strncmp(place[j],state,2);
        if (value==0){
            status = true;
            break;
        }
        
    }
    
    return(status);
}
int main() {
    char in[80];
    int i;
    //int temp =100;
    memset(in, '\0', 80);
    printf("enter your plate number to see if its valid (in capital letters)\n");
    scanf("%s" , in);
    //in[10] = '\0';
    if (in[10]>0)
    {
        printf("inavlid plate");
        
    }
    else
    {bool state;
    state = moduleLinearSearch(in);
    if (!state){
        printf("invalid plate");
        return 0;
    }
    if (in[2]>=49 && in[2]<=57 && in[3]>=48 && in[3]<=57){
    //sscanf(&in[2],"%d",&temp);
    if (in[4]>=65 && in[4]<=90)
    {
        if (in[5]>=48 && in[5]<=57 || in[5]>=65 && in[5]<=90)
    {
        if (in[6]>=49 && in[6]<=57)
        {
            if (in[6]>=49 && in[6]<=57)
            {
                for (i = 7; i < 10; i++)
                {
                    if (in[i]>=49 && in[i]<=57)
                    {
                        printf("your plate is valid");
                        i=10;
                    }
                }
            }
        }
    }
    }
    }
    else{
        printf("invalid plate");
        return 0;
    }
    }
    
    return 0;
}