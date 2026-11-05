
void FUN_0202cf8c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  uVar1 = FUN_0202d000(param_3,0);
  FUN_0200c9e4(0x45800000,uVar1);
  local_18 = FUN_0200c8e0();
  FUN_02018ac8(&local_18,param_1 + 0x18);
  uVar1 = FUN_0200c954(local_18);
  local_14 = FUN_0200c5ac(uVar1,0x45800000);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x24))(*(int **)(param_1 + 0x14),param_2,&local_14);
  return;
}

