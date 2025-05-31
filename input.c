/*
   Copyright 2025 <shaun@archlinux>
   
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   
  getting input from an user
*/

#include <stdio.h>

int main(){
	char character[100];
	printf("Enter the string\n");
	fgets(character, sizeof(character), stdin);
	printf("You entered:-\n %s \n", character);
}
