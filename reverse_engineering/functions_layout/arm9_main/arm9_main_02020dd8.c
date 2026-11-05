
/* JUS-CLASS jus_Class_020955c0::jus_Class_020955c0 [class-default] stores vtable 020955c0 into
   *this (constructor) */

undefined4 * jus_Class_020955c0::jus_Class_020955c0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0201a228(0x6c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = ALWidgetBase_0209c1e0::ALWidgetBase_0209c1e0(iVar1,FUN_02021ff4,0);
  }
  jus_Class_020947e4::jus_Class_020947e4(param_1,uVar2);
  *param_1 = &vftable;
  return param_1;
}

