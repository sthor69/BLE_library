/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class tinyb_BluetoothGattService */

#ifndef _Included_tinyb_BluetoothGattService
#define _Included_tinyb_BluetoothGattService
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     tinyb_BluetoothGattService
 * Method:    getBluetoothType
 * Signature: ()Ltinyb/BluetoothType;
 */
JNIEXPORT jobject JNICALL Java_tinyb_BluetoothGattService_getBluetoothType
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothGattService
 * Method:    clone
 * Signature: ()Ltinyb/BluetoothAdapter;
 */
JNIEXPORT jobject JNICALL Java_tinyb_BluetoothGattService_clone
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothGattService
 * Method:    getUUID
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_tinyb_BluetoothGattService_getUUID
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothGattService
 * Method:    getDevice
 * Signature: ()Ltinyb/BluetoothDevice;
 */
JNIEXPORT jobject JNICALL Java_tinyb_BluetoothGattService_getDevice
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothGattService
 * Method:    getPrimary
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_tinyb_BluetoothGattService_getPrimary
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothGattService
 * Method:    getCharacteristics
 * Signature: ()Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_tinyb_BluetoothGattService_getCharacteristics
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothGattService
 * Method:    delete
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_tinyb_BluetoothGattService_delete
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
