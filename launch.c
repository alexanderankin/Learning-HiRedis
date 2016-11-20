#include <stdio.h>

#include "NumberGenerator.h"

/**
 * Connects to Redis, passes that connection to integer generator
 * the generator, and returns whatever the generator returns.
 * 
 */
int main(int argc, char const *argv[])
{
	printf("%s\n", "Now setting up Database");
	redisContextptr context = setupDB();
	printf("%s\n", "Now generating numbers");
	return generate(context);
}
