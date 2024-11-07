#include <stdio.h>
 main(){
	int hm,em,mm,sstm,scm,percentage ;
	printf("Enter your hindi marks :- ",hm);
	scanf("%d",&hm);
	printf("Enter your english marks :-",em);
	scanf("%d",&em);
	printf("Enter your maths marks :-",mm);
	scanf("%d",&mm);
	printf("Enter your sst marks :-",sstm);
	scanf("%d",&sstm);
	printf("Enter your science marks :-",scm);
	scanf("%d",&scm);
	percentage=(hm+em+mm+sstm+scm)/5 ;
	printf("your percentage is %d",percentage);
	return 0;
}
