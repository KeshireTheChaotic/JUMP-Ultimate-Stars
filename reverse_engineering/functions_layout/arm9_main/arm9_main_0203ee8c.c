
/* JUS-CLASS jus_Class_02097124::jus_Class_02097124 [class-default] stores vtable 02097124 into
   *this (constructor) */

undefined4 * jus_Class_02097124::jus_Class_02097124(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  jus_Class_020971b4::jus_Class_020971b4();
  *param_1 = &vftable;
  FUN_0201cf08(param_1 + 0x129);
  FUN_0201cf08(param_1 + 300);
  param_1[0x12f] = 1;
  FUN_02010970(param_1 + 0x129,0x18);
  FUN_02010970(param_1 + 300,0x10);
  param_1[0x12] = 0x414d4433;
  iVar1 = FUN_0201a228(8);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = ScreenInstance_Derived_02093d14::ScreenInstance_Derived_02093d14(iVar1,param_1);
  }
  param_1[0x22] = uVar2;
  return param_1;
}

