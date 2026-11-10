
/* JUS-CLASS jus_HwBgLayerSub::jus_HwBgLayerSub [class-hardware-role] stores vtable 0209aa68 into
   *this (constructor) */

int * jus_HwBgLayerSub::jus_HwBgLayerSub(int *param_1,int param_2)

{
  jus_HwBgLayer::jus_HwBgLayer();
  *param_1 = (int)&vftable;
  (**(code **)(*param_1 + 0x8c))();
  param_1[0x12] = (param_2 + 0x30) * 0x10000 | 0x53004742;
  return param_1;
}

