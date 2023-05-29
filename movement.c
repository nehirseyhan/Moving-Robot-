#include <stdio.h>
int main()
{
int x,y,n;
char yon;
scanf("%c %d %d %d\n",&yon,&x,&y,&n);
if(yon == 'E')
{ 
if(x != (n - 1))
x++; 
}

else if(yon == 'N')
{ 
if(y != 0)
y--; 
}

else if(yon == 'W')
{ 
if(x != 0)
x--; 
}

else if(yon == 'S')
{ 
if(y != (n - 1))
y++; 
}
printf("%d %d", x,y);
return 0;
}
