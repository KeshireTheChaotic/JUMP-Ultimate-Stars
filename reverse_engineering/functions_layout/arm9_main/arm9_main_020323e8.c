
/* JUS-CLASS jus_Class_020941f0::jus_Class_020941f0 [class-default] stores vtable 020941f0 into
   *this (constructor) */

undefined4 * jus_Class_020941f0::jus_Class_020941f0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &vftable;
  iVar2 = param_1[3];
  if (iVar2 != 0) {
    iVar1 = FUN_0201a9ec(iVar2);
    if (iVar1 == 0) {
      FUN_0201a958(iVar2,1);
    }
    param_1[3] = 0;
  }
  return param_1;
}

