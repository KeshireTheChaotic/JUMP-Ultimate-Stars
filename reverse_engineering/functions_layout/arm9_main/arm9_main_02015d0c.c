
/* JUS-CLASS CommonEffect_0209c30c::CommonEffect_0209c30c [class-source-file] stores vtable 0209c30c
   into *this (constructor) */

undefined4 * CommonEffect_0209c30c::CommonEffect_0209c30c(undefined4 *param_1)

{
  int *piVar1;
  
  jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4();
  *param_1 = &vftable;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  DAT_020a0c80 = DAT_020a0c80 + 1;
  (**(code **)(*(int *)param_1[5] + 0xc))();
  piVar1 = DAT_020a0c7c;
  param_1[5] = DAT_020a0c7c;
  (**(code **)(*piVar1 + 8))();
  return param_1;
}

