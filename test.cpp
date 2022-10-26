#include <android/log.h>

void test() {
	__android_log_write(ANDROID_LOG_INFO, "hello", "Hello world");
}
