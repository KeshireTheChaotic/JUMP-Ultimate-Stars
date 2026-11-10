
/* JUS-CLASS jus_HwBgLayerMain::jus_HwBgLayerMain [class-hardware-role] stores vtable 0209ab18 into
   *this (constructor) */

int * jus_HwBgLayerMain::jus_HwBgLayerMain(int *param_1,int param_2)

{
  jus_HwBgLayer::jus_HwBgLayer();
  *param_1 = (int)&vftable;
  (**(code **)(*param_1 + 0x8c))();
  param_1[0x12] = (param_2 + 0x30) * 0x10000 | 0x4d004742;
  return param_1;
}

