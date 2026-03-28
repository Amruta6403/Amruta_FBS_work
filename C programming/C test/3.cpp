/*3. Develop a program to manage a music library. Define a structure to 
store song details (song ID, title, artist, and duration). Create a menu
driven program to add new songs and display the song library. Use 
functions to handle these operations.*/

# include <stdio.h>
struct song{
	
	int id;
	char title[20];
	char artist[30];
	int duration;
};

int main()

{
	
	struct song s[20];
	int n=0,i,choice;
	do{
	
	printf("\n1.Add  \n2.Display \n3.Exit\n");
	
	printf("enter the choice:");
	scanf("%d",&choice);
	  if (choice==1)
	  {
	  	
	  	printf("Add New song:\n");
	  	printf(" id: ");
	  	scanf("%d",&s[n].id);
	  	
	  	printf("title:");

	  	scanf("%s",&s[n].title);
	  	printf("artist:");
	  	scanf("%s",&s[n].artist);
	  	
	  	printf("duration:");
	  	scanf("%d",&s[n].duration);
	  	
	  	n++;
	  }
	     else if(choice == 2) {
	     	
	     	printf("songs Details\n");
            for(i = 0; i < n; i++) {
                printf("%d %s\n %s\n %d\n", s[i].id, s[i].title,s[i].artist,s[i].duration);
            }
        }

    } while(choice != 3);

    return 0;
}