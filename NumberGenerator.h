
int main(int argc, char const *argv[]);

redisContext *setupDB(void);

char* updateDB(redisContext *newContext, int newValue);

int generate(redisContext *newContext);

int intStrLen(int in);
