#include<stdio.h>
typedef struct thongtin{
char name[20];
char tel[20];
char email[20];
}thongtin;
main(void)
{
    int n,i;
    FILE *p;
    thongtin info;
    printf("So ng ban can biet la:");scanf("%d",&n);getchar();
    if((p=fopen("hocsinh.txt","w"))==NULL)
       printf("k mo dc file");
    else
        for(i=0;i<n;i++)
        {
            printf("Ten hoc sinh:");gets(info.name);
            printf("So dien thoai:");gets(info.tel);
            printf("email:");gets(info.email);
            fprintf(p,"%s %s %s\n",info.name, info.tel, info.email);
        }
}
