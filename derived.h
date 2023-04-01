#ifndef __DERIVED_H__
#define __DERIVED_H__

#include "base.h"

G_BEGIN_DECLS

#define GST_TYPE_FOODERIVED (gst_fooderived_get_type())
G_DECLARE_DERIVABLE_TYPE(GstFooDerived, gst_fooderived, GST,
                         FOODERIVED, GstFooBase)

/**
 * @brief This struct has to be at least the same of the inherited one
 *
 */
struct _GstFooDerivedClass
{
    GObjectClass parent_class;

    void (*bar)();

    gpointer padding[12];
};

G_END_DECLS

#endif // __DERIVED_H__
