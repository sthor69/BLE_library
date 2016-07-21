/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class tinyb_BluetoothDevice */

#ifndef _Included_tinyb_BluetoothDevice
#define _Included_tinyb_BluetoothDevice
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     tinyb_BluetoothDevice
 * Method:    getBluetoothType
 * Signature: ()Ltinyb/BluetoothType;
 */
JNIEXPORT jobject JNICALL Java_tinyb_BluetoothDevice_getBluetoothType
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    clone
 * Signature: ()Ltinyb/BluetoothDevice;
 */
JNIEXPORT jobject JNICALL Java_tinyb_BluetoothDevice_clone
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    disconnect
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_tinyb_BluetoothDevice_disconnect
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    connect
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_tinyb_BluetoothDevice_connect
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    connectProfile
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_tinyb_BluetoothDevice_connectProfile
  (JNIEnv *, jobject, jstring);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    disconnectProfile
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_tinyb_BluetoothDevice_disconnectProfile
  (JNIEnv *, jobject, jstring);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    pair
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_tinyb_BluetoothDevice_pair
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    cancelPairing
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_tinyb_BluetoothDevice_cancelPairing
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    getServices
 * Signature: ()Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_tinyb_BluetoothDevice_getServices
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    getAddress
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_tinyb_BluetoothDevice_getAddress
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    getName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_tinyb_BluetoothDevice_getName
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    getAlias
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_tinyb_BluetoothDevice_getAlias
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    setAlias
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_tinyb_BluetoothDevice_setAlias
  (JNIEnv *, jobject, jstring);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    getBluetoothClass
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tinyb_BluetoothDevice_getBluetoothClass
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    getAppearance
 * Signature: ()S
 */
JNIEXPORT jshort JNICALL Java_tinyb_BluetoothDevice_getAppearance
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    getIcon
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_tinyb_BluetoothDevice_getIcon
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    getPaired
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_tinyb_BluetoothDevice_getPaired
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    enablePairedNotifications
 * Signature: (Ltinyb/BluetoothNotification;)V
 */
JNIEXPORT void JNICALL Java_tinyb_BluetoothDevice_enablePairedNotifications
  (JNIEnv *, jobject, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    disablePairedNotifications
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_tinyb_BluetoothDevice_disablePairedNotifications
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    getTrusted
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_tinyb_BluetoothDevice_getTrusted
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    enableTrustedNotifications
 * Signature: (Ltinyb/BluetoothNotification;)V
 */
JNIEXPORT void JNICALL Java_tinyb_BluetoothDevice_enableTrustedNotifications
  (JNIEnv *, jobject, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    disableTrustedNotifications
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_tinyb_BluetoothDevice_disableTrustedNotifications
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    setTrusted
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_tinyb_BluetoothDevice_setTrusted
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    getBlocked
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_tinyb_BluetoothDevice_getBlocked
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    enableBlockedNotifications
 * Signature: (Ltinyb/BluetoothNotification;)V
 */
JNIEXPORT void JNICALL Java_tinyb_BluetoothDevice_enableBlockedNotifications
  (JNIEnv *, jobject, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    disableBlockedNotifications
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_tinyb_BluetoothDevice_disableBlockedNotifications
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    setBlocked
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_tinyb_BluetoothDevice_setBlocked
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    getLegacyPairing
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_tinyb_BluetoothDevice_getLegacyPairing
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    getRSSI
 * Signature: ()S
 */
JNIEXPORT jshort JNICALL Java_tinyb_BluetoothDevice_getRSSI
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    enableRSSINotifications
 * Signature: (Ltinyb/BluetoothNotification;)V
 */
JNIEXPORT void JNICALL Java_tinyb_BluetoothDevice_enableRSSINotifications
  (JNIEnv *, jobject, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    disableRSSINotifications
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_tinyb_BluetoothDevice_disableRSSINotifications
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    getConnected
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_tinyb_BluetoothDevice_getConnected
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    enableConnectedNotifications
 * Signature: (Ltinyb/BluetoothNotification;)V
 */
JNIEXPORT void JNICALL Java_tinyb_BluetoothDevice_enableConnectedNotifications
  (JNIEnv *, jobject, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    disableConnectedNotifications
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_tinyb_BluetoothDevice_disableConnectedNotifications
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    getUUIDs
 * Signature: ()[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_tinyb_BluetoothDevice_getUUIDs
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    getModalias
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_tinyb_BluetoothDevice_getModalias
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    getAdapter
 * Signature: ()Ltinyb/BluetoothAdapter;
 */
JNIEXPORT jobject JNICALL Java_tinyb_BluetoothDevice_getAdapter
  (JNIEnv *, jobject);

/*
 * Class:     tinyb_BluetoothDevice
 * Method:    delete
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_tinyb_BluetoothDevice_delete
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif