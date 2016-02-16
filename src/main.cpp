#include "common.h"

#define TESTMODULE

int main(int argc, char* argv[])
{
#ifdef TESTMODULE
    ModuleTest();
#else
#endif
    return 0;
}
