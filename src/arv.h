#ifndef ARV_H
#define ARV_H

#include <glib-object.h>
#include <arvconfig.h>

G_BEGIN_DECLS

typedef struct _ArvCamera 		ArvCamera;

typedef struct _ArvGc 			ArvGc;
typedef struct _ArvGcNode 		ArvGcNode;
typedef struct _ArvGcRegisterNode 	ArvGcRegisterNode;
typedef struct _ArvGcIntegerNode 	ArvGcIntegerNode;
typedef struct _ArvGcPortNode		ArvGcPortNode;

typedef struct _ArvInterface 		ArvInterface;
typedef struct _ArvDevice 		ArvDevice;
typedef struct _ArvStream 		ArvStream;
typedef struct _ArvBuffer 		ArvBuffer;

typedef struct _ArvGvInterface 		ArvGvInterface;
typedef struct _ArvGvDevice 		ArvGvDevice;
typedef struct _ArvGvStream 		ArvGvStream;

G_END_DECLS

#endif
