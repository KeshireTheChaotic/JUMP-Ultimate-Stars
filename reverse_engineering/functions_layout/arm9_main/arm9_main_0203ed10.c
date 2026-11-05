
/* JUS-CLASS jus_Class_0209aa68::vfunc_04 [class-virtual] slot 4 of vtable 0209aa68 (own slot, not
   inherited) */

void jus_Class_0209aa68::vfunc_04(int param_1,uint *param_2)

{
  *(uint *)(param_1 + 0x96c) = *param_2 >> 0xc;
  switch(*(undefined4 *)(param_1 + 0x8c4)) {
  case 0:
    FUN_0203eda0((int)(*param_2 + ((uint)((int)*param_2 >> 0xb) >> 0x14)) >> 0xc);
    return;
  case 1:
    FUN_0203edbc((int)(*param_2 + ((uint)((int)*param_2 >> 0xb) >> 0x14)) >> 0xc);
    return;
  case 2:
    FUN_0203edd8((int)(*param_2 + ((uint)((int)*param_2 >> 0xb) >> 0x14)) >> 0xc);
    return;
  case 3:
    FUN_0203edf4((int)(*param_2 + ((uint)((int)*param_2 >> 0xb) >> 0x14)) >> 0xc);
    return;
  default:
    return;
  }
}

