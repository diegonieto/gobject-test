#ifndef __IFACE_IMPLEMENTED_H__
#define __IFACE_IMPLEMENTED_H__

#include "iface.h"

G_BEGIN_DECLS

#define FOO_TYPE_IMPLEMENTED foo_implemented_get_type()
G_DECLARE_FINAL_TYPE (FooImplemented, foo_implemented, FOO, IMPLEMENTED, GObject)

struct _FooImplementedClass
{
  GObjectClass parent_class;
};

G_END_DECLS

#endif
