#include<stdio.h>
#include<stdlib.h>
int split(char *s, char ,char **arr) 
{
int sum = 0;
    int count =0;
    char *ip_str1 = ip_str;
    while (*ip_str) {
        if (*ip_str >= '0' && *ip_str <= '9'){
            ++ip_str;
            count++;
        }
        else
            return 0;
    }
    if(count==3){
        printf("%d \n",count);
        sum = (*ip_str1++ - '0')*100 + (*ip_str1++ - '0')*10 +(*ip_str1++ - '0')*1;
        printf("%d \n",sum);
        if(sum > 255)return 0;
        return 1;
    }
    return 1;
}

int main (int argc, char ** argv)
{
    int i;
    char *s = "255.1025.255.285";
    int c = 0;
    nclude<iint checks=0;
    char **arr = NULL;

    c = split(s, '.', &arr);

    printf("found %d tokens.\n", c);

    for (i = 0; i < c; i++){
        printf("string #%d: %s\n", i, arr[i]);
        if(valid_digit(arr[i])){ checks++;}
        
    }
    if(c == 4 && checks == 4){
        printf("valid");
    }else
     printf("Not valid");
    return 0;
}

 int sum = 0;
    int count =0;
    char *ip_str1 = ip_str;
    while (*ip_str) {
        if (*ip_str >= '0' && *ip_str <= '9'){
            ++ip_str;
            count++;
        }
        else
            return 0;
    }
    if(count==3){
        printf("%d \n",count);
        sum = (*ip_str1++ - '0')*100 + (*ip_str1++ - '0')*10 +(*ip_str1++ - '0')*1;
        printf("%d \n",sum);
        if(sum > 255)return 0;
        return 1;
    }
    return 1;
}

int main (int argc, char ** argv)
{
    int i;
    char *s = "255.1025.255.285";
    int c = 0;
    int checks=0;
    char **arr = NULL;

    c = split(s, '.', &arr);

    printf("found %d tokens.\n", c);

    for (i = 0; i < c; i++){
        printf("string #%d: %s\n", i, arr[i]);
        if(valid_digit(arr[i])){ checks++;}
        
    }
    if(c == 4 && checks == 4){
        printf("valid");
    }else
     printf("Not valid");
    return 0;
}
