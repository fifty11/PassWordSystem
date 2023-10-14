#ifndef SIXTEN_PASSWORD_SYSTEM
#define SIXTEN_PASSWORD_SYSTEM

#include <cstdint>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

struct User
{
	int64_t chaching;
	char* name;
	uint8_t* hashedSSID;
	uint8_t* hashedPassword;
};

int16_t makeUser(char* name, char* ssid, char* password);
int16_t killUser(char* name, char* ssid, char* password);
int16_t transfer();

#endif
