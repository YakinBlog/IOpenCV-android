#include "FeaturesUtil.h"

using namespace std;
using namespace cv;

JNIEXPORT void JNICALL Java_com_yakin_opencv_jni_FeaturesUtil_find(JNIEnv *env, jclass clz, jlong addrGray, jlong addrRgba) {
    Mat& mGr  = *(Mat*)addrGray;
    Mat& mRgb = *(Mat*)addrRgba;
    vector<KeyPoint> v;

    Ptr<FeatureDetector> detector = FastFeatureDetector::create(50);
    detector->detect(mGr, v);
    for( unsigned int i = 0; i < v.size(); i++ )
    {
        const KeyPoint& kp = v[i];
        circle(mRgb, Point(kp.pt.x, kp.pt.y), 10, Scalar(255,0,0,255));
    }
}