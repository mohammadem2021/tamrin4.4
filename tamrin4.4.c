#include <stdio.h>

int main() {

   float Strog;
   int FileText;
   int FileVoice;
   int FileVideo;
   int StrogT=0;
   int StrogVo=0;
   int StrogVi=0;
   float remaining;
   printf("\nmeghadr hafeze khod ra vared konid:  ");
   scanf(" %f",&Strog);
   printf("\ntedad file text khod ra vared konid: ");
   scanf(" %d",&FileText);
   printf("\ntedad file video khoda ra vared konid:  ");
   scanf(" %d",&FileVideo);
   printf("\ntedad file voice khoda ra vared konid:  ");
   scanf(" %d",&FileVoice);

   for (int i = 1; i <=FileText ; i++)
    {
        StrogT+=1;
    }
    for (int i = 1; i <=FileVoice ; i++)
    {
        StrogVo+=3;
    }
  for (int i = 1; i <= FileVideo ; i++)
    {
        StrogVi+=1;
    }
    float sum=(StrogVi+StrogVo+StrogT);
    sum/=1024;
    remaining=Strog-sum;

    printf("baghi mande hafeze shoma:  %f",remaining);


    return 0;
}
