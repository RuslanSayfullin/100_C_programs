#include <cstdint>
#include <iostream>

void foo(int32_t param) {
	// Проверяем, что int32_t действительно 4 байта
	static_assert(sizeof(int32_t) == 4, "int32_t must be 32 bits!");
}

int main() {
	foo(10);	// Ok
	return 0;
}
