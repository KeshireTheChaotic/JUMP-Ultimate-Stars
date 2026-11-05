
/* JUS-CLASS jus_TagDLSE::vfunc_22 [class-virtual] slot 22 of vtable 0209ad30 (own slot, not
   inherited) */

void jus_TagDLSE::vfunc_22(int *param_1)

{
  int iVar1;
  
  param_1[0x10] = param_1[0x10] + 0x1000;
  iVar1 = FUN_02013a3c(param_1 + 0x10,param_1[0xf]);
  if (iVar1 == 0) {
    return;
  }
  (**(code **)(*(int *)param_1[0xb] + 0x24))((int *)param_1[0xb],param_1[0xc],param_1[0xd]);
  (**(code **)(*param_1 + 0x70))();
  if ((char)param_1[0xe] == '\0') {
    return;
  }
  (**(code **)(*param_1 + 0xc))();
  return;
}

