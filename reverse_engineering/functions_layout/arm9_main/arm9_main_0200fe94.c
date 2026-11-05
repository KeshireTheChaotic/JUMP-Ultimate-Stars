
/* JUS-CLASS jus_Class_02095e30::jus_Class_02095e30 [class-default] stores vtable 02095e30 into
   *this (constructor) */

undefined4 * jus_Class_02095e30::jus_Class_02095e30(undefined4 *param_1)

{
  int iVar1;
  
  jus_Class_02095ea0::jus_Class_02095ea0();
  *param_1 = &vftable;
  param_1[0xd] = 0;
  if (param_1[7] == 0) {
    param_1[10] = 0;
  }
  else {
    iVar1 = FUN_0200fe80(param_1);
    param_1[10] = (uint)*(ushort *)(iVar1 + 6);
  }
  return param_1;
}

