
/* JUS-CLASS jus_Class_020974b8::~jus_Class_020974b8 [class-default] slot 0/1 of vtable 020974b8;
   resets vtables (destructor) */

undefined4 * jus_Class_020974b8::~jus_Class_020974b8(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &vftable;
  if (param_1[0x10] != 0) {
    FUN_02012318();
    (*(code *)param_1[0x10])();
  }
  jus_Class_02097558::jus_Class_02097558(param_1);
  iVar1 = FUN_0201a9ec(param_1);
  if (iVar1 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

