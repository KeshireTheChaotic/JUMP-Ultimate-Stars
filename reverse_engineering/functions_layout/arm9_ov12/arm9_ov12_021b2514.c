
/* JUS-CLASS ALMotionDynamic_021d266c::vfunc_53 [class-virtual] slot 53 of vtable 021d266c (own
   slot, not inherited) */

void ALMotionDynamic_021d266c::vfunc_53(int *param_1,undefined2 param_2)

{
  int iVar1;
  
  *(undefined2 *)((int)param_1 + 0x2a) = param_2;
  iVar1 = (**(code **)(*(int *)param_1[0x11] + 0x28))();
  param_1[0x11] = iVar1;
  *(byte *)((int)param_1 + 0x32) =
       *(byte *)((int)param_1 + 0x32) & 0xfd | (*(byte *)(iVar1 + 0x30) & 1) << 1;
  param_1[0xd] = *(int *)(param_1[0x11] + 0x34);
  *(short *)(param_1 + 0xc) = (short)*(undefined4 *)(param_1[0x11] + 0x2c);
  if (param_1[0xd] < 0) {
    param_1[0xe] = (uint)*(ushort *)(param_1 + 0xc) << 0xc;
    iVar1 = (uint)*(ushort *)(param_1 + 0xc) << 0xc;
  }
  else {
    iVar1 = 0;
    param_1[0xe] = 0;
  }
  param_1[0xf] = iVar1;
  (**(code **)(*param_1 + 0xcc))();
  return;
}

