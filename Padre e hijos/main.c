#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main() 
{
  pid_t pid_padre;
  
  for(int i=1;i<6;i++)
  {
    pid_padre = fork();
    if(pid_padre == 0)
    {
      printf("Soy un hijo con PID %d y mi padre tiene PID %d\n",getpid(),getppid());
      exit(0);
    }
    if(pid_padre > 0)
    {
      continue;
    }
    else
    {
    
      //printf("HOLA");
    }
  }
    //printf("Proceso PADRE = %d\n",getppid());

  return 0;
}
