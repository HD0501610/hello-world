#include "hello_world.h"

static void func_patch() {
    return;
}

int main() {
    printf("Hello World !\n");
    func_patch();
    return 0;
}
