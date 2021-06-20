//
// Created by DefTruth on 2021/3/14.
//

#ifndef LITEHUB_LITE_H
#define LITEHUB_LITE_H

#include "backend.h"

// ENABLE_ONNXRUNTIME
#ifdef ENABLE_ONNXRUNTIME

#include "ort/core/ort_core.h"
#include "ort/core/ort_utils.h"
#include "ort/cv/age_googlenet.h"
#include "ort/cv/arcafce_resnet.h"
#include "ort/cv/colorizer.h"
#include "ort/cv/deeplabv3_resnet101.h"
#include "ort/cv/densenet.h"
#include "ort/cv/efficientnet_lite4.h"
#include "ort/cv/emotion_ferplus.h"
#include "ort/cv/fast_style_transfer.h"
#include "ort/cv/fcn_resnet101.h"
#include "ort/cv/fsanet.h"
#include "ort/cv/gender_googlenet.h"
#include "ort/cv/ghostnet.h"
#include "ort/cv/hardnet.h"
#include "ort/cv/ibnnet.h"
#include "ort/cv/mobilenetv2.h"
#include "ort/cv/pfld.h"
#include "ort/cv/resnet.h"
#include "ort/cv/resnext.h"
#include "ort/cv/shufflenetv2.h"
#include "ort/cv/ssd.h"
#include "ort/cv/ssd_mobilenetv1.h"
#include "ort/cv/ssrnet.h"
#include "ort/cv/subpixel_cnn.h"
#include "ort/cv/tiny_yolov3.h"
#include "ort/cv/ultraface.h"
#include "ort/cv/vgg16_age.h"
#include "ort/cv/vgg16_gender.h"
#include "ort/cv/yolov3.h"
#include "ort/cv/yolov4.h"
#include "ort/cv/yolov5.h"

#endif

// ENABLE_MNN
#ifdef ENABLE_MNN
#endif

// ENABLE_NCNN
#ifdef ENABLE_NCNN
#endif

namespace lite
{
  // alias cvx, different with cv(opencv)
  namespace cvx
  {
#ifdef BACKEND_ONNXRUNTIME
    namespace utils = ortcv::utils;
    namespace types = ortcv::types;
#endif

#ifdef BACKEND_ONNXRUNTIME
    typedef ortcv::FSANet _FSANet;
    typedef ortcv::PFLD _PFLD;
    typedef ortcv::UltraFace _UltraFace;
    typedef ortcv::AgeGoogleNet _AgeGoogleNet;
    typedef ortcv::GenderGoogleNet _GenderGoogleNet;
    typedef ortcv::EmotionFerPlus _EmotionFerPlus;
    typedef ortcv::VGG16Age _VGG16Age;
    typedef ortcv::VGG16Gender _VGG16Gender;
    typedef ortcv::SSRNet _SSRNet;
    typedef ortcv::FastStyleTransfer _FastStyleTransfer;
    typedef ortcv::ArcFaceResNet _ArcFaceResNet;
    typedef ortcv::Colorizer _Colorizer;
    typedef ortcv::SubPixelCNN _SubPixelCNN;
    typedef ortcv::YoloV4 _YoloV4;
    typedef ortcv::YoloV3 _YoloV3;
    typedef ortcv::YoloV5 _YoloV5;
    typedef ortcv::EfficientNetLite4 _EfficientNetLite4;
    typedef ortcv::ShuffleNetV2 _ShuffleNetV2;
    typedef ortcv::TinyYoloV3 _TinyYoloV3;
    typedef ortcv::SSD _SSD;
    typedef ortcv::SSDMobileNetV1 _SSDMobileNetV1;
    typedef ortcv::DeepLabV3ResNet101 _DeepLabV3ResNet101;
    typedef ortcv::DenseNet _DenseNet;
    typedef ortcv::FCNResNet101 _FCNResNet101;
    typedef ortcv::GhostNet _GhostNet;
    typedef ortcv::HdrDNet _HdrDNet;
    typedef ortcv::IBNNet _IBNNet;
    typedef ortcv::MobileNetV2 _MobileNetV2;
    typedef ortcv::ResNet _ResNet;
    typedef ortcv::ResNeXt _ResNeXt;
#endif

    // 1. classification
    namespace classification
    {
#ifdef BACKEND_ONNXRUNTIME
      typedef _EfficientNetLite4 EfficientNetLite4;
      typedef _ShuffleNetV2 ShuffleNetV2;
      typedef _DenseNet DenseNet;
      typedef _GhostNet GhostNet;
      typedef _HdrDNet HdrDNet;
      typedef _IBNNet IBNNet;
      typedef _MobileNetV2 MobileNetV2;
      typedef _ResNet ResNet;
      typedef _ResNeXt ResNeXt;
#endif
    }

    // 2. general object detection
    namespace detection
    {
#ifdef BACKEND_ONNXRUNTIME
      typedef _YoloV3 YoloV3;
      typedef _YoloV4 YoloV4;
      typedef _YoloV5 YoloV5;
      typedef _TinyYoloV3 TinyYoloV3;
      typedef _SSD SSD;
      typedef _SSDMobileNetV1 SSDMobileNetV1;
#endif
    }
    // 3. face detection & facial attributes detection
    namespace face
    {
#ifdef BACKEND_ONNXRUNTIME
      typedef _FSANet FSANet; // head pose estimation.
      typedef _UltraFace UltraFace;  // face detection.
      typedef _PFLD PFLD; // facial landmarks detection.
      typedef _AgeGoogleNet AgeGoogleNet; // age estimation
      typedef _GenderGoogleNet GenderGoogleNet; // gender estimation
      typedef _VGG16Age VGG16Age; // age estimation
      typedef _VGG16Gender VGG16Gender; // gender estimation
      typedef _EmotionFerPlus EmotionFerPlus; // emotion detection
      typedef _SSRNet SSRNet; // age estimation
#endif
    }
    // 4. face recognition
    namespace faceid
    {
#ifdef BACKEND_ONNXRUNTIME
      typedef _ArcFaceResNet ArcFaceResNet; // test failed ! don't use!
#endif

    }
    // 5. segmentation
    namespace segmentation
    {
#ifdef BACKEND_ONNXRUNTIME
      typedef _DeepLabV3ResNet101 DeepLabV3ResNet101;
      typedef _FCNResNet101 FCNResNet101;
#endif

    }
    // 6. reid
    namespace reid
    {
#ifdef BACKEND_ONNXRUNTIME
#endif
    }

    // 7. ocr
    namespace ocr
    {
#ifdef BACKEND_ONNXRUNTIME
#endif
    }
    // 8. neural rendering
    namespace render
    {
#ifdef BACKEND_ONNXRUNTIME
#endif
    }
    // 9. style transfer
    namespace style
    {
#ifdef BACKEND_ONNXRUNTIME
      typedef _FastStyleTransfer FastStyleTransfer;
#endif
    }

    // 10. colorization
    namespace colorization
    {
#ifdef BACKEND_ONNXRUNTIME
      typedef _Colorizer Colorizer;
#endif
    }
    // 11. super resolution
    namespace resolution
    {
#ifdef BACKEND_ONNXRUNTIME
      typedef _SubPixelCNN SubPixelCNN;
#endif
    }

  }

  namespace asr
  {
#ifdef BACKEND_ONNXRUNTIME
#endif
  }

  namespace nlp
  {
#ifdef BACKEND_ONNXRUNTIME
#endif
  }
}

#endif //LITEHUB_LITE_H
