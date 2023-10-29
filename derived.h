#ifndef __DERIVED_H__
#define __DERIVED_H__

#include "base.h"

G_BEGIN_DECLS

// Derivable
#define GST_TYPE_FOODERIVED (gst_fooderived_get_type())
G_DECLARE_DERIVABLE_TYPE(GstFooDerived, gst_fooderived, GST,
                         FOODERIVED, GstFooBase)

/**
 * @brief This struct has to be at least the same of the inherited one
 *
 */
struct _GstFooDerivedClass
{
    GstFooBaseClass parent_class;

    gpointer padding[12];
};


// Final
#define GST_TYPE_FOOFINAL gst_foofinal_get_type()
G_DECLARE_FINAL_TYPE (GstFooFinal, gst_foofinal, GST, GST_TYPE_FOOFINAL, GstFooBase)
struct _GstFooFinal
{
    GstFooBase parent_class;

    int my_value;
};


G_END_DECLS

#endif // __DERIVED_H__
