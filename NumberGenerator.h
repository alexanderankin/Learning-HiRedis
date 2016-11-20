#ifndef NumberGenerator_H
#define NumberGenerator_H

#include <hiredis/hiredis.h>

int main(int argc, char const *argv[]);

redisContext *setupDB(void);

char* updateDB(redisContext *newContext, int newValue);

int generate(redisContext *newContext);

int intStrLen(int in);

typedef redisContext *redisContextptr;

#endif
