/*Question 1:
Disha is a computer engineering graduate. She is an average student in her college and
because of this quality, her college didn’t offer her to attend the placement. She was very
upset because of not getting placed in any of the companies. Even after completing her
graduation she was very confused about her career, one fine day she met her old mentor
Ram sir and she was explaining him about her waving mind. Then Mr.Ram asked her to
prepare for the GATE exam. Her preparation and hard work helped her in applying
confidently for most of the companies, among those she got an interview call from an MNC
to write an online exam. In her call letter, she got the venue details of the online exam and
the company’s name. And after entering the venue, she was informed with the details of the
examination and the topic for the exam.
Input and Output Format:
Refer Sample Input and Output for formatting specifications.
Assume that the maximum length of the input strings is 50.
[All text in bold corresponds to input and the rest corresponds to output]
Sample Input and Output:
Welcome To Online Exam
Name
Test Your Skills
Topic
C Programming
Duration
120
Marks
100
Test Your Skills is a C Programming exam for 100 marks and the duration is 120 mins*/

#include<stdio.h>
#include<string.h>
int main()
{
    int duration,mark=0;
    char name[50],topic[50];
    printf("Name");
    gets(name);
    printf("Topic");
    gets(topic);
    printf("Duration");
    scanf("%d",&duration);
    printf("mark");
    scanf("%d",&mark);

    printf("\n WELCOME TO ONLINE EXAM \n");
    printf("%s is a %s exam for %d marks and the duration is %d mins ",name,topic,mark,duration);

}
