
/* JUS-CLASS jus_Class_020947a8::~jus_Class_020947a8 [class-default] slot 0/1 of vtable 020947a8;
   resets vtables (destructor) */

undefined4 * jus_Class_020947a8::~jus_Class_020947a8(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &vftable;
  param_1[9] = &DAT_020947d4;
  puVar2 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_1 + 9;
  }
  FUN_020461bc(DAT_020a0ed0,puVar2);
  jus_Class_02094538::jus_Class_02094538(param_1);
  iVar1 = FUN_0201a9ec(param_1);
  if (iVar1 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

