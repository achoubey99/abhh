
#include <file.h>




int main(int argc, char* argv[])
{	
	int n, pid;

	n=atoi(argv[1]);

	pid = fork();
	if (pid==0)
	{
		for(int i=1; i<=n;i++)
		{
			if (i % 2 != 0)
			cout<<"odd no. are "<<i<<" "<<endl;
		}
	}
	else 
	{	sleep(5);
		for (int j=1; j<=n; j++)
		{
			if (j % 2 == 0)
				cout<<"even no. are " <<j<<" "<<endl;
		
		}
		
	}

return 0;

}	
