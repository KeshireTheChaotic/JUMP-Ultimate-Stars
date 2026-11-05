
void FUN_0215e244(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int local_18;
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  FUN_0203d0b4(*(undefined4 *)(param_1 + 4));
  FUN_0203d478(*(undefined4 *)(param_1 + 4),param_3);
  FUN_0203cfbc(*(undefined4 *)(param_1 + 4),param_6,param_7);
  (**(code **)(**(int **)(param_1 + 4) + 0x90))(*(int **)(param_1 + 4),param_4);
  local_18 = param_5 << 0xc;
  (**(code **)(**(int **)(param_1 + 4) + 0x10))(*(int **)(param_1 + 4),&local_18);
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x956) = 0;
  (**(code **)(**(int **)(param_1 + 4) + 0x94))();
  return;
}

