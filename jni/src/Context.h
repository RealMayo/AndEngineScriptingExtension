#ifndef Context_H
#define Context_H

#include <jni.h>
#include "src/Wrapper.h"

extern "C" {
	// ===========================================================
	// org.andengine.extension.scripting.ContextProxy
	// ===========================================================

	JNIEXPORT void JNICALL Java_org_andengine_extension_scripting_ContextProxy_nativeInitClass(JNIEnv*, jclass);
}

class Context : public Wrapper {
	public:
		/* Constructors */
		Context(jobject);

		/* Getter & Setter */
		jobject getAssets();
};

#endif
