#ifndef MAINUI_LOG_H
#define MAINUI_LOG_H

#include <android/log.h>

#define LOG_D(fmt, ...) __android_log_print(ANDROID_LOG_DEBUG, TAG, fmt, ##__VA_ARGS__)
#define LOG_E(fmt, ...) __android_log_print(ANDROID_LOG_ERROR, TAG, fmt, ##__VA_ARGS__)

#endif //MAINUI_LOG_H
