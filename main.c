/*
** EPITECH PROJECT, 2018
** overflow
** File description:
** test main
*/
#include <stdio.h>
#include <stdlib.h>
 
void cat_secret() {
	system("/bin/cat secret");
}

void display() {
	printf("Tu essayes quoi là ?!\n");
}
 
int main(void)
{
	int var;
	void (*func)()=display;
	char buf[4];

	fgets(buf, 9, stdin);
	func();
}
