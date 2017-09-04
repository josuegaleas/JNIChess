/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class ChessBoard */

#ifndef _Included_ChessBoard
#define _Included_ChessBoard
#ifdef __cplusplus
extern "C" {
#endif
#undef ChessBoard_FOCUS_TRAVERSABLE_UNKNOWN
#define ChessBoard_FOCUS_TRAVERSABLE_UNKNOWN 0L
#undef ChessBoard_FOCUS_TRAVERSABLE_DEFAULT
#define ChessBoard_FOCUS_TRAVERSABLE_DEFAULT 1L
#undef ChessBoard_FOCUS_TRAVERSABLE_SET
#define ChessBoard_FOCUS_TRAVERSABLE_SET 2L
#undef ChessBoard_TOP_ALIGNMENT
#define ChessBoard_TOP_ALIGNMENT 0.0f
#undef ChessBoard_CENTER_ALIGNMENT
#define ChessBoard_CENTER_ALIGNMENT 0.5f
#undef ChessBoard_BOTTOM_ALIGNMENT
#define ChessBoard_BOTTOM_ALIGNMENT 1.0f
#undef ChessBoard_LEFT_ALIGNMENT
#define ChessBoard_LEFT_ALIGNMENT 0.0f
#undef ChessBoard_RIGHT_ALIGNMENT
#define ChessBoard_RIGHT_ALIGNMENT 1.0f
#undef ChessBoard_serialVersionUID
#define ChessBoard_serialVersionUID -7644114512714619750LL
#undef ChessBoard_serialVersionUID
#define ChessBoard_serialVersionUID 4613797578919906343LL
#undef ChessBoard_INCLUDE_SELF
#define ChessBoard_INCLUDE_SELF 1L
#undef ChessBoard_SEARCH_HEAVYWEIGHTS
#define ChessBoard_SEARCH_HEAVYWEIGHTS 1L
#undef ChessBoard_NOT_OBSCURED
#define ChessBoard_NOT_OBSCURED 0L
#undef ChessBoard_PARTIALLY_OBSCURED
#define ChessBoard_PARTIALLY_OBSCURED 1L
#undef ChessBoard_COMPLETELY_OBSCURED
#define ChessBoard_COMPLETELY_OBSCURED 2L
#undef ChessBoard_WHEN_FOCUSED
#define ChessBoard_WHEN_FOCUSED 0L
#undef ChessBoard_WHEN_ANCESTOR_OF_FOCUSED_COMPONENT
#define ChessBoard_WHEN_ANCESTOR_OF_FOCUSED_COMPONENT 1L
#undef ChessBoard_WHEN_IN_FOCUSED_WINDOW
#define ChessBoard_WHEN_IN_FOCUSED_WINDOW 2L
#undef ChessBoard_UNDEFINED_CONDITION
#define ChessBoard_UNDEFINED_CONDITION -1L
#undef ChessBoard_IS_DOUBLE_BUFFERED
#define ChessBoard_IS_DOUBLE_BUFFERED 0L
#undef ChessBoard_ANCESTOR_USING_BUFFER
#define ChessBoard_ANCESTOR_USING_BUFFER 1L
#undef ChessBoard_IS_PAINTING_TILE
#define ChessBoard_IS_PAINTING_TILE 2L
#undef ChessBoard_IS_OPAQUE
#define ChessBoard_IS_OPAQUE 3L
#undef ChessBoard_KEY_EVENTS_ENABLED
#define ChessBoard_KEY_EVENTS_ENABLED 4L
#undef ChessBoard_FOCUS_INPUTMAP_CREATED
#define ChessBoard_FOCUS_INPUTMAP_CREATED 5L
#undef ChessBoard_ANCESTOR_INPUTMAP_CREATED
#define ChessBoard_ANCESTOR_INPUTMAP_CREATED 6L
#undef ChessBoard_WIF_INPUTMAP_CREATED
#define ChessBoard_WIF_INPUTMAP_CREATED 7L
#undef ChessBoard_ACTIONMAP_CREATED
#define ChessBoard_ACTIONMAP_CREATED 8L
#undef ChessBoard_CREATED_DOUBLE_BUFFER
#define ChessBoard_CREATED_DOUBLE_BUFFER 9L
#undef ChessBoard_IS_PRINTING
#define ChessBoard_IS_PRINTING 11L
#undef ChessBoard_IS_PRINTING_ALL
#define ChessBoard_IS_PRINTING_ALL 12L
#undef ChessBoard_IS_REPAINTING
#define ChessBoard_IS_REPAINTING 13L
#undef ChessBoard_WRITE_OBJ_COUNTER_FIRST
#define ChessBoard_WRITE_OBJ_COUNTER_FIRST 14L
#undef ChessBoard_RESERVED_1
#define ChessBoard_RESERVED_1 15L
#undef ChessBoard_RESERVED_2
#define ChessBoard_RESERVED_2 16L
#undef ChessBoard_RESERVED_3
#define ChessBoard_RESERVED_3 17L
#undef ChessBoard_RESERVED_4
#define ChessBoard_RESERVED_4 18L
#undef ChessBoard_RESERVED_5
#define ChessBoard_RESERVED_5 19L
#undef ChessBoard_RESERVED_6
#define ChessBoard_RESERVED_6 20L
#undef ChessBoard_WRITE_OBJ_COUNTER_LAST
#define ChessBoard_WRITE_OBJ_COUNTER_LAST 21L
#undef ChessBoard_REQUEST_FOCUS_DISABLED
#define ChessBoard_REQUEST_FOCUS_DISABLED 22L
#undef ChessBoard_INHERITS_POPUP_MENU
#define ChessBoard_INHERITS_POPUP_MENU 23L
#undef ChessBoard_OPAQUE_SET
#define ChessBoard_OPAQUE_SET 24L
#undef ChessBoard_AUTOSCROLLS_SET
#define ChessBoard_AUTOSCROLLS_SET 25L
#undef ChessBoard_FOCUS_TRAVERSAL_KEYS_FORWARD_SET
#define ChessBoard_FOCUS_TRAVERSAL_KEYS_FORWARD_SET 26L
#undef ChessBoard_FOCUS_TRAVERSAL_KEYS_BACKWARD_SET
#define ChessBoard_FOCUS_TRAVERSAL_KEYS_BACKWARD_SET 27L
/*
 * Class:     ChessBoard
 * Method:    createBoard
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ChessBoard_createBoard
  (JNIEnv *, jobject);

/*
 * Class:     ChessBoard
 * Method:    updateBoard
 * Signature: (LChessBoard/Board;)V
 */
JNIEXPORT void JNICALL Java_ChessBoard_updateBoard
  (JNIEnv *, jobject, jobject);

/*
 * Class:     ChessBoard
 * Method:    deleteBoard
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_ChessBoard_deleteBoard
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
