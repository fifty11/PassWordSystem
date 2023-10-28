#include "database.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char nameFirstAndLast[255];
	char password[156];
	char ssid[50];
	char option[10];

	nameFirstAndLast[254]='\0';
	password[155]='\0';
	ssid[49]='\0';
	option[9]='\0';
	

	bool debugInfo=false;

	while(1)//change to boolean later when database struct exists
	{
		printf("1: add user\n2: remove user");
		scanf("%9s", option);
		int64_t optionToInt=atoi(option);
				

		if(!debugInfo)
			system("CLS");
		switch(optionToInt)
		{
			case -1:
				printf("not a real chooise!!!\n");
			break;

			case 1:
				printf("MakeUser:\nUsers Name: ");
				scanf("%254s", nameFirstAndLast);
				printf("Users SSID: ");
				scanf("%49s", ssid);
				printf("Password: ");
				scanf("%155s", password);
				int16_t ans=makeUser(nameFirstAndLast, ssid, password);
				if(ans==1)
					printf("User with same ID alredy exists!!!\n");
				debugInfo=false;
			break;

			case 2:
				printf("RemoveUser:\n");
				printf("Users name: ");
				printf("User ssid: ");
				scanf("%49s", ssid);
				printf("User password: ");
				scanf("%155s", password);
				
				debugInfo=false;
			break;
		}
	}
	return 0;
}
