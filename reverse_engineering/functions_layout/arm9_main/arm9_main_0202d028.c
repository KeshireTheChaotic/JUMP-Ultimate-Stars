
/* JUS-CLASS ALCollision_02098318::vfunc_51 [class-virtual] slot 51 of vtable 02098318 (own slot,
   not inherited) */

void ALCollision_02098318::vfunc_51
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  (**(code **)(**(int **)(param_1 + 0x14) + 0x30))(&local_20,*(int **)(param_1 + 0x14),param_2);
  uVar1 = FUN_0202d000(param_3,0);
  FUN_0200c9e4(0x45800000,uVar1);
  local_1c = FUN_0200c8e0();
  FUN_02018ac8(&local_1c,param_1 + 0x18);
  uVar1 = FUN_0200c954(local_1c + local_20);
  local_18 = FUN_0200c5ac(uVar1,0x45800000);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x24))(*(int **)(param_1 + 0x14),param_2,&local_18);
  return;
}

