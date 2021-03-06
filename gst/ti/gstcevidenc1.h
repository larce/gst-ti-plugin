/*
 * Authors:
 *   Diego Dompe <ddompe@gmail.com>
 *   Luis Arce <luis.arce@rigerun.com>
 *
 * Copyright (C) 2012 RidgeRun	
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation version 2.1 of the License.
 *
 * This program is distributed #as is# WITHOUT ANY WARRANTY of any kind,
 * whether express or implied; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 */

#ifndef ___GST_CE_VIDENC1_H__
#define ___GST_CE_VIDENC1_H__

#include <gst/gst.h>
#include <gstcebasevideoencoder.h>

#include <xdc/std.h>
#include <ti/sdo/ce/Engine.h>
#include <ti/sdo/ce/video1/videnc1.h>

G_BEGIN_DECLS
#define GST_TYPE_CE_VIDENC1 \
  (gst_ce_videnc1_get_type())
#define GST_CE_VIDENC1(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST((obj),GST_TYPE_CE_VIDENC1,GstCEVIDENC1))
#define GST_CE_VIDENC1_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_CAST((klass),GST_TYPE_CE_VIDENC1,GstCEVIDENC1Class))
#define GST_IS_CE_VIDENC1(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE((obj),GST_TYPE_CE_VIDENC1))
#define GST_IS_CE_VIDENC1_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_TYPE((klass),GST_TYPE_CE_VIDENC1))
#define CE_VIDENC1_GET_CLASS(obj) \
(G_TYPE_INSTANCE_GET_CLASS ((obj), GST_TYPE_CE_VIDENC1, GstCEVIDENC1Class))
typedef struct _GstCEVIDENC1 GstCEVIDENC1;
typedef struct _GstCEVIDENC1Class GstCEVIDENC1Class;

/**
 * This class implements CodecEngine VIDENC1 API
 * @extends _GstCEBaseVideoEncoder
 */
struct _GstCEVIDENC1
{
  GstCEBaseVideoEncoder base_video_encoder;
};

struct _GstCEVIDENC1Class
{
  GstCEBaseVideoEncoderClass parent_class;

};
/* Macros that allow access to the method of the class */

/*-------------------*/
/* Public methods */
/*-------------------*/

GstBuffer *
  gst_ce_videnc1_generate_header (GstCEVIDENC1 * videnc1_encoder);

gboolean
  gst_ce_videnc1_initialize_params (GstCEBaseEncoder * base_encoder);

gboolean
  gst_ce_videnc1_control (GstCEBaseEncoder * base_encoder, gint cmd_id);

gboolean
  gst_ce_videnc1_delete (GstCEBaseEncoder * base_encoder);

gboolean
  gst_ce_videnc1_create (GstCEBaseEncoder * base_encoder);

GstBuffer*
  gst_ce_videnc1_process_sync (GstCEBaseEncoder * base_encoder,
    GstBuffer * input_buffer, GstBuffer * output_buffer);

void
  gst_ce_videnc1_alloc_params (GstCEBaseEncoder * base_encoder);


/* Class functionality */
GType gst_ce_videnc1_get_type (void);

G_END_DECLS
#endif /* ___GST_CE_VIDENC1_H__ */
