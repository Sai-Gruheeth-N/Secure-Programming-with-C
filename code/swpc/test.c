#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int main()
{
//    FILE *fp;
//    // insert the date into the char array
//    char text[17];
//    time_t now = time(NULL);//obtains current time
//    struct tm *t = localtime(&now);
//    strftime(text, sizeof(text)-1, "%dd %mm %YYYY %HH:%MM", t);
//    text[16] = 0;

//    // concat the date to file name
//    char *filename;
//    if((filename = malloc(strlen("C:\Users\Satyam Dwivedi\Desktop\Employee_leave_manegment_system-master\statement.txt")+strlen(text)+1)) != NULL)
//    {
//       filename[0] = '\0';   // ensures the memory is an empty string
//       strcat(filename,"C:\Users\Satyam Dwivedi\Desktop\Employee_leave_manegment_system-master\statement.txt");
//       strcat(filename,text);
//       strcat(filename,".txt");
//    }

//    // use the file
//    fp = fopen(filename, "w+");
//    fputs("This is testing for fputs...\n", fp);
//    fclose(fp);

//backup2
//(void)strftime(text, sizeof(text)-1, "%dd %mm %YYYY %HH:%MM", t);
//     char text[80];
//     time_t now = time(NULL);//obtains current time
//     struct tm *t = localtime(&now);
//     (void)strftime(buffer,80,"%x - %I:%M%p", t);
//     text[16] = 0;
//     // concat the date to file name
//     char *filename;
//     if((filename = malloc(strlen("C:\\Users\\Satyam Dwivedi\\Desktop\\Employee_leave_manegment_system-master\\statement.txt")+strlen(text)+1)) != NULL)
//     {
//         filename[0] = '\0';   // ensures the memory is an empty string
//         strcat(filename,"statement_");
//         strcat(filename,text);
//         strcat(filename,".txt");
//     }
// //-----------------------------
   time_t rawtime;
   struct tm *info;
   char buffer[80];

   time( &rawtime );

   info = localtime( &rawtime );

   strftime(buffer,80,"%x-%I:%M%p", info);
   printf("Formatted date & time : |%s|\n", buffer );
   char *filename;
    if((filename = malloc(strlen("C:\\Users\\Satyam Dwivedi\\Desktop\\Employee_leave_manegment_system-master\\statement.txt")+strlen(buffer)+1)) != NULL)
    {
        filename[0] = '\0';   // ensures the memory is an empty string
        strcat(filename,"statement_");
        strcat(filename,buffer);
        strcat(filename,".txt");
    }
    printf("filename: %s",filename);
}


