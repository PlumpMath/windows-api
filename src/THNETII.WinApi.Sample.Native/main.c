#include <stdlib.h>
#include <stdio.h>

#include <Windows.h>
#include <LM.h>
#include <winnt.h>

void main()
{
	const int size = sizeof(NET_VALIDATE_AUTHENTICATION_INPUT_ARG);
	const int value = PRIVILEGE_SET_ALL_NECESSARY;

	void* ptr = NetValidatePasswordPolicy;
}
