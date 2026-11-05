
/* JUS-CLASS ALMotionDynamic_021d266c::vfunc_04 [class-virtual] slot 4 of vtable 021d266c (own slot,
   not inherited) */

void ALMotionDynamic_021d266c::vfunc_04
               (int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  if (*param_2 == (uint)*(ushort *)(param_1 + 6) * 0x10) {
    return;
  }
  if (*(char *)(param_1 + 0x29) == '\0') {
    *(short *)(param_1 + 6) = (short)(*param_2 >> 4);
    return;
  }
  if (DAT_020a0d28 == param_1) {
    DAT_020a0d28 = *(int *)(param_1 + 0xc);
  }
  FUN_0201cdb4(DAT_020a1094,param_1,param_3,param_4,param_4);
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(short *)(param_1 + 6) = (short)(*param_2 >> 4);
  if (*(char *)(param_1 + 0x29) == '\0') {
    FUN_0201cca0(DAT_020a1094,param_1);
    *(undefined1 *)(param_1 + 0x29) = 1;
    return;
  }
  return;
}

