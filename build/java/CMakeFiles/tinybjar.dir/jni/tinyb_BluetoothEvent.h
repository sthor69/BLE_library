/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class tinyb_BluetoothEvent */

#ifndef _Included_tinyb_BluetoothEvent
#define _Included_tinyb_BluetoothEvent
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     tinyb_BluetoothEvent
 * Method:    getType
 * Signature: ()Ltinyb/BluetoothType;
 */
JNIEXPORT jobject JNICALL Java_tinyb_BluetoothEvent_getType
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothEvent
 * Method:    getName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_tinyb_BluetoothEvent_getName
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothEvent
 * Method:    getIdentifier
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_tinyb_BluetoothEvent_getIdentifier
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothEvent
 * Method:    executeCallback
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_tinyb_BluetoothEvent_executeCallback
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothEvent
 * Method:    hasCallback
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_tinyb_BluetoothEvent_hasCallback
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothEvent
 * Method:    init
 * Signature: (Ltinyb/BluetoothType;Ljava/lang/String;Ljava/lang/String;Ltinyb/BluetoothObject;Ltinyb/BluetoothCallback;Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_tinyb_BluetoothEvent_init
  (JNIEnv *, jobject, jobject, jstring, jstring, jobject, jobject, jobject);

/*
 * Class:     tinyb_BluetoothEvent
 * Method:    delete
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_tinyb_BluetoothEvent_delete
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
