
/* JUS-CLASS jus_HwDisplaySub::jus_HwDisplaySub [class-hardware-role] stores vtable 02097244 into
   *this (constructor) */

undefined4 * jus_HwDisplaySub::jus_HwDisplaySub(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  jus_Class_0209737c::jus_Class_0209737c();
  *param_1 = &vftable;
  param_1[299] = 0x7000400;
  param_1[0x12] = 0x534f4432;
  iVar1 = FUN_0201a228(8);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = jus_Class_02093cf4::jus_Class_02093cf4(iVar1,param_1);
  }
  param_1[0x22] = uVar2;
  return param_1;
}

