
/* JUS-CLASS ALWidgetBase_0209c1e0_Derived_0209bc04::ALWidgetBase_0209c1e0_Derived_0209bc04
   [class-derived] stores vtable 0209bc04 into *this (constructor) */

int * ALWidgetBase_0209c1e0_Derived_0209bc04::ALWidgetBase_0209c1e0_Derived_0209bc04
                (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  ALWidgetBase_0209c1e0::ALWidgetBase_0209c1e0();
  *param_1 = (int)&vftable;
  iVar3 = param_1[0x19];
  piVar1 = (int *)(iVar3 + 0x14);
  pcVar2 = *(code **)(*piVar1 + 0x40);
  (*pcVar2)(piVar1,1,0,pcVar2,param_4);
  *(undefined4 *)(iVar3 + 0x3c) = 0;
  (**(code **)(*param_1 + 0x108))();
  (**(code **)(*param_1 + 0x118))(param_1,0);
  FUN_0202b2f4(param_1,1);
  return param_1;
}

