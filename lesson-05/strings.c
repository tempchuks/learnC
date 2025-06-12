#include <stdio.h>
#include <string.h>

int main(){
    char  * name = "Temple chukwuka";
    printf("%lu\n",strlen(name));

    char name_1[15] = "Temple Chukwuka";
    name_1[6] = '_';
    printf("%s\n",name_1);

    char first_name[15] = "Temple ";
    char last_name[] = "Chukwuka";
    strncat(first_name, last_name,8);
    printf("%s\n",first_name);
    return 0;
}
