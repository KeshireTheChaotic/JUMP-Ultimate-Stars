
/* JUS-CLASS jus_Class_02095620::jus_Class_02095620 [class-default] stores vtable 02095620 into
   *this (constructor) */

undefined4 * jus_Class_02095620::jus_Class_02095620(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  jus_Class_02095684::jus_Class_02095684();
  *param_1 = &vftable;
  param_1[3] = FUN_02025cc4;
  iVar1 = 1;
  do {
    iVar2 = iVar1 + 1;
    param_1[iVar1 + 3] = param_1[3];
    iVar1 = iVar2;
  } while (iVar2 < 0xe);
  return param_1;
}

