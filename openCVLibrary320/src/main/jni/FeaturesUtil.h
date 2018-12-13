#ifndef _Included_com_yakin_opencv_jni_FeaturesUtil
#define _Included_com_yakin_opencv_jni_FeaturesUtil

#include "Configure.h"
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/features2d/features2d.hpp>
#include <vector>

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT void JNICALL Java_com_yakin_opencv_jni_FeaturesUtil_find(JNIEnv *, jclass, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
