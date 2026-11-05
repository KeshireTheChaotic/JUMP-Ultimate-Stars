
/* JUS-CLASS jus_TagIPCT::vfunc_22 [class-virtual] slot 22 of vtable 0209aea0 (own slot, not
   inherited) */

void jus_TagIPCT::vfunc_22(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_10;
  undefined4 uStack_c;
  
  local_10 = param_1[0xd];
  uStack_c = param_4;
  if ((char)param_1[0x11] == '\0') {
    iVar1 = param_1[0xf] + -0x1000;
    param_1[0xf] = iVar1;
    if (iVar1 < 1) {
      iVar1 = (**(code **)(*param_1 + 0xa8))();
      if ((iVar1 == 0) && (((param_1[0x10] & 2U) != 0 || ((param_1[0x10] & 4U) == 0)))) {
        param_1[0xf] = 0;
        (**(code **)param_1[0x12])(param_1[0xc],param_1,param_1[0xb],&local_10);
        if ((param_1[0x10] & 8U) == 0) {
          (**(code **)(*param_1 + 0x70))();
          return;
        }
        (**(code **)(*param_1 + 0x70))();
        (**(code **)(*param_1 + 0xc))();
        return;
      }
      if ((param_1[0x10] & 2U) == 0) {
        *(undefined1 *)(param_1 + 0x11) = 1;
        param_1[0xf] = -param_1[0xf];
      }
      else {
        param_1[0xf] = param_1[0xf] + param_1[0xe] * 0x1000;
      }
    }
  }
  else {
    param_1[0xf] = param_1[0xf] + 0x1000;
    iVar1 = FUN_02013a3c(param_1 + 0xf,param_1[0xe]);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*param_1 + 0xa8))();
      if ((iVar1 == 0) && (((param_1[0x10] & 2U) != 0 || ((param_1[0x10] & 4U) != 0)))) {
        param_1[0xf] = param_1[0xe] << 0xc;
        (**(code **)param_1[0x12])(param_1[0xc],param_1,param_1[0xb],&local_10);
        if ((param_1[0x10] & 8U) == 0) {
          (**(code **)(*param_1 + 0x70))();
          return;
        }
        (**(code **)(*param_1 + 0x70))();
        (**(code **)(*param_1 + 0xc))();
        return;
      }
      if ((param_1[0x10] & 2U) == 0) {
        *(undefined1 *)(param_1 + 0x11) = 0;
        param_1[0xf] = param_1[0xe] * 0x1000;
      }
      else {
        param_1[0xf] = param_1[0xf] + param_1[0xe] * -0x1000;
      }
    }
  }
  (**(code **)param_1[0x12])(param_1[0xc],param_1,param_1[0xb],&local_10);
  return;
}

