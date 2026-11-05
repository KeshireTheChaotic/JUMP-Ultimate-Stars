
/* JUS-CLASS jus_Class_02095c74::vfunc_33 [class-virtual] slot 33 of vtable 02095c74 (own slot, not
   inherited) */

void jus_Class_02095c74::vfunc_33(undefined4 param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  uVar1 = FUN_0200c954(*param_2);
  uVar1 = FUN_0200c5ac(uVar1,0x45800000);
  uVar2 = FUN_0200c954(param_2[1]);
  uVar2 = FUN_0200c5ac(uVar2,0x45800000);
  uVar3 = FUN_0200c954(param_2[2]);
  uVar3 = FUN_0200c5ac(uVar3,0x45800000);
  FUN_0200c9e4(0x45800000,uVar3);
  local_20 = FUN_0200c8e0();
  FUN_02018ac8(&local_20,param_3 + 4);
  FUN_0200c9e4(0x45800000,uVar2);
  local_1c = FUN_0200c8e0();
  FUN_02018ac8(&local_1c,param_3 + 8);
  *param_2 = local_1c - local_20;
  FUN_0200c9e4(0x45800000,uVar1);
  local_28 = FUN_0200c8e0();
  FUN_02018ac8(&local_28,param_3 + 8);
  FUN_0200c9e4(0x45800000,uVar3);
  local_24 = FUN_0200c8e0();
  FUN_02018ac8(&local_24,param_3);
  param_2[1] = local_24 - local_28;
  FUN_0200c9e4(0x45800000,uVar2);
  local_30 = FUN_0200c8e0();
  FUN_02018ac8(&local_30,param_3);
  FUN_0200c9e4(0x45800000,uVar1);
  local_2c = FUN_0200c8e0();
  FUN_02018ac8(&local_2c,param_3 + 4);
  param_2[2] = local_2c - local_30;
  return;
}

