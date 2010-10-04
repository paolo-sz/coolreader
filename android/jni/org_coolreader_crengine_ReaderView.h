/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_coolreader_crengine_ReaderView */

#ifndef _Included_org_coolreader_crengine_ReaderView
#define _Included_org_coolreader_crengine_ReaderView
#ifdef __cplusplus
extern "C" {
#endif
#undef org_coolreader_crengine_ReaderView_NOOK_KEY_PREV_LEFT
#define org_coolreader_crengine_ReaderView_NOOK_KEY_PREV_LEFT 96L
#undef org_coolreader_crengine_ReaderView_NOOK_KEY_PREV_RIGHT
#define org_coolreader_crengine_ReaderView_NOOK_KEY_PREV_RIGHT 98L
#undef org_coolreader_crengine_ReaderView_NOOK_KEY_NEXT_LEFT
#define org_coolreader_crengine_ReaderView_NOOK_KEY_NEXT_LEFT 95L
#undef org_coolreader_crengine_ReaderView_NOOK_KEY_NEXT_RIGHT
#define org_coolreader_crengine_ReaderView_NOOK_KEY_NEXT_RIGHT 97L
#undef org_coolreader_crengine_ReaderView_NOOK_KEY_SHIFT_UP
#define org_coolreader_crengine_ReaderView_NOOK_KEY_SHIFT_UP 101L
#undef org_coolreader_crengine_ReaderView_NOOK_KEY_SHIFT_DOWN
#define org_coolreader_crengine_ReaderView_NOOK_KEY_SHIFT_DOWN 100L
/*
 * Class:     org_coolreader_crengine_ReaderView
 * Method:    getPageImage
 * Signature: (Landroid/graphics/Bitmap;)V
 */
JNIEXPORT void JNICALL Java_org_coolreader_crengine_ReaderView_getPageImage
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_coolreader_crengine_ReaderView
 * Method:    createInternal
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_coolreader_crengine_ReaderView_createInternal
  (JNIEnv *, jobject);

/*
 * Class:     org_coolreader_crengine_ReaderView
 * Method:    destroyInternal
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_coolreader_crengine_ReaderView_destroyInternal
  (JNIEnv *, jobject);

/*
 * Class:     org_coolreader_crengine_ReaderView
 * Method:    loadDocumentInternal
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_coolreader_crengine_ReaderView_loadDocumentInternal
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_coolreader_crengine_ReaderView
 * Method:    getSettingsInternal
 * Signature: ()Ljava/util/Properties;
 */
JNIEXPORT jobject JNICALL Java_org_coolreader_crengine_ReaderView_getSettingsInternal
  (JNIEnv *, jobject);

/*
 * Class:     org_coolreader_crengine_ReaderView
 * Method:    applySettingsInternal
 * Signature: (Ljava/util/Properties;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_coolreader_crengine_ReaderView_applySettingsInternal
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_coolreader_crengine_ReaderView
 * Method:    setStylesheetInternal
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_coolreader_crengine_ReaderView_setStylesheetInternal
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_coolreader_crengine_ReaderView
 * Method:    resizeInternal
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_coolreader_crengine_ReaderView_resizeInternal
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_coolreader_crengine_ReaderView
 * Method:    doCommandInternal
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_org_coolreader_crengine_ReaderView_doCommandInternal
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_coolreader_crengine_ReaderView
 * Method:    getCurrentPageBookmarkInternal
 * Signature: ()Lorg/coolreader/crengine/Bookmark;
 */
JNIEXPORT jobject JNICALL Java_org_coolreader_crengine_ReaderView_getCurrentPageBookmarkInternal
  (JNIEnv *, jobject);

/*
 * Class:     org_coolreader_crengine_ReaderView
 * Method:    goToPositionInternal
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_coolreader_crengine_ReaderView_goToPositionInternal
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_coolreader_crengine_ReaderView
 * Method:    getPositionPropsInternal
 * Signature: (Ljava/lang/String;)Lorg/coolreader/crengine/PositionProperties;
 */
JNIEXPORT jobject JNICALL Java_org_coolreader_crengine_ReaderView_getPositionPropsInternal
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_coolreader_crengine_ReaderView
 * Method:    updateBookInfoInternal
 * Signature: (Lorg/coolreader/crengine/BookInfo;)V
 */
JNIEXPORT void JNICALL Java_org_coolreader_crengine_ReaderView_updateBookInfoInternal
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_coolreader_crengine_ReaderView
 * Method:    getTOCInternal
 * Signature: ()Lorg/coolreader/crengine/TOCItem;
 */
JNIEXPORT jobject JNICALL Java_org_coolreader_crengine_ReaderView_getTOCInternal
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
