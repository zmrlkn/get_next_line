//**butun satirlari yazdirma tek fd

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
    int fd;
    char *str;

    fd = open("a.txt", O_RDONLY);

    while((str = get_next_line(fd)))
    {
        printf("%s",str);
        free(str);
    }
}


//Sirayla fdlerin hepsini yazdirma 1 ondan 1 ondan

#include "get_next_line.h"
#include "get_next_line_bonus.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
    int fd, fd1;
    char *str;
    char *str1;

    fd = open("a.txt", O_RDONLY);
    fd1 = open("b.txt", O_RDONLY);


    while((str = get_next_line(fd)) && (str1 = get_next_line(fd1)))
    {
        printf("%s",str);
        printf("%s",str1);
        free(str1);
        free(str);
    }
}


//belirli bir araligi yazdirma 
//Verilen fd nin 1den 10 a kadar olan satirlarini yazdirir

#include "get_next_line.h"
#include "get_next_line_bonus.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
    int fd, i;

    i = 1;
    char *str;
    fd = open("a.txt", O_RDONLY);

    while((str = get_next_line(fd)))
    {
        if(i >= 1 && i <= 10)
            printf("%s",str);
        i++;
    }
}



// kac satir oldugunu bulma 

#include "get_next_line.h"
#include "get_next_line_bonus.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
    int fd, i;

    i = 1;
    char *str;
    fd = open("a.txt", O_RDONLY);

    while((str = get_next_line(fd)))
    {
        i++;
    }
    printf("%d", i);
}

//son satiri yazdirmaca

#include "get_next_line.h"
#include "get_next_line_bonus.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
    int fd,fd1, i, s;

    s = 1;
    i = 1;
    char *str,*str1;
    fd = open("a.txt", O_RDONLY);
    fd1 = open("a.txt", O_RDONLY);

    while((str = get_next_line(fd)))
    {
        i++;
    }
    while(s < i)
    {
        str1 = get_next_line(fd1);
        s++;
    }
    printf("%s",str1);
}