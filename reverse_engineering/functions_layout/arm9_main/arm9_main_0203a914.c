
/* JUS-CLASS jus_HwTexPltt::~jus_HwTexPltt [class-hardware-role] slot 0/1 of vtable 020947a8; resets
   vtables (destructor) */

undefined4 * jus_HwTexPltt::~jus_HwTexPltt(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &vftable;
  param_1[9] = &DAT_020947d4;
  puVar1 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = param_1 + 9;
  }
  FUN_020461bc(DAT_020a0ed0,puVar1);
  jus_Class_02094538::jus_Class_02094538(param_1);
  return param_1;
}

