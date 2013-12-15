#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("LinkJVM Updater v1.0\n(c)2013, Markus Klein\nMIT License");
	return system(
	"cd /tmp;\
	echo 'Fetching latest LinkJVM package...';\
	wget http://files.mklein.co.at/LinkJVM/packages/latest.ipk;\
	echo 'Installing latest LinkJVM package...';\
	opkg upgrade latest.ipk;\
	echo 'Done.';");
}
