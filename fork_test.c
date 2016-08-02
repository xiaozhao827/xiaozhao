#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main(void)
{
    pid_t pid;
    printf("xxxxxxxxxxxx\n");
    pid=fork();
   if(pid==-1)
    {
        perror("fork error:");
        exit(1);
     }
    else if (pid==0)
     {
       printf("I`m child1 , pid=%u,ppid=%u\n",getpid(),getppid());
      
      }
    else
    {
      printf("I`m child2 , pid=%u,ppid%u\n",getpid(),getppid());
      sleep(1);
    }
  printf("pppppppppppppp\n");
  return 0;
}
