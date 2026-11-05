
/* JUS-CLASS jus_Class_0209737c::vfunc_23 [class-virtual] slot 23 of vtable 0209737c (own slot, not
   inherited) */

void jus_Class_0209737c::vfunc_23(int *param_1)

{
  int iVar1;
  
  FUN_02041164(param_1 + 0x129);
  param_1[0x22d] = 0;
  if ((char)param_1[0x23f] == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x23f) = 0;
  iVar1 = (**(code **)(*param_1 + 0x7c))();
  if (iVar1 == 0) {
    DC_FlushRange(param_1 + 0x22e,2);
    FUN_02066f1c(param_1 + 0x22e,0,2);
    return;
  }
  DC_FlushRange(param_1 + 0x22e,2);
  FUN_02066f64(param_1 + 0x22e,0,2);
  return;
}

