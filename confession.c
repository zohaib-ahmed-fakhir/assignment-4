#include<stdio.h>
#include<conio.h>

void main()
{
	int reading_time,writting_time,total_time;
	printf("\n\n\tEnter the time you have spent  on confession reading (In minutes ):");
	scanf("%d",&reading_time);
	
	printf("\n\tEnter the time you have spent on confession writting (In minutes):");
	scanf("%d",&writting_time);
	
	total_time = reading_time + writting_time;
	
	if (total_time >= 120 ){
		printf("\n\n\tOoohh bhai itna time barbad kr rha he parrh le kuch ja kr.\n\n");
		
	}
	else if(total_time >=60 && total_time <= 120){
		printf("\n\n\tBhai in fazool cheezon per time barbaad nhi kro ap ka ye waqt bht qeemti he.\n\n");
		
	}
	else if (total_time<= 60 ){
		printf("\n\n\tBhai koi fayda nhi hua na confession per waqt dene ka is liye ye fazool he is ko chor do.\n\n");
	}
}
