/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class tinyb_BluetoothObject */

#ifndef _Included_tinyb_BluetoothObject
#define _Included_tinyb_BluetoothObject
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     tinyb_BluetoothObject
 * Method:    getBluetoothType
 * Signature: ()Ltinyb/BluetoothType;
 */
JNIEXPORT jobject JNICALL Java_tinyb_BluetoothObject_getBluetoothType
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothObject
 * Method:    clone
 * Signature: ()Ltinyb/BluetoothObject;
 */
JNIEXPORT jobject JNICALL Java_tinyb_BluetoothObject_clone
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothObject
 * Method:    delete
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_tinyb_BluetoothObject_delete
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothObject
 * Method:    operatorEqual
 * Signature: (Ltinyb/BluetoothObject;)Z
 */
JNIEXPORT jboolean JNICALL Java_tinyb_BluetoothObject_operatorEqual
  (JNIEnv *, jobject, jobject);

/*
 * Class:     tinyb_BluetoothObject
 * Method:    getObjectPath
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_tinyb_BluetoothObject_getObjectPath
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
