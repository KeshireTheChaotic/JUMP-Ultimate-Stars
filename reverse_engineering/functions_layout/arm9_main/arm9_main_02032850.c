
/* JUS-CLASS ALWidgetBase_0209c1e0_Derived_0209bad8::ALWidgetBase_0209c1e0_Derived_0209bad8
   [class-derived] stores vtable 0209bad8 into *this (constructor) */

int * ALWidgetBase_0209c1e0_Derived_0209bad8::ALWidgetBase_0209c1e0_Derived_0209bad8
                (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  
  ALWidgetBase_0209c1e0::ALWidgetBase_0209c1e0();
  *param_1 = (int)&vftable;
  DAT_020a0d74 = DAT_020a0d74 + 1;
  (**(code **)(*(int *)param_1[5] + 0xc))();
  piVar1 = DAT_020a0fc0;
  param_1[5] = (int)DAT_020a0fc0;
  (**(code **)(*piVar1 + 8))();
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

