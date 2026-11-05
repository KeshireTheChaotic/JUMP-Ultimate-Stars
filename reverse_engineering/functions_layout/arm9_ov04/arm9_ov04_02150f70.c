
void FUN_02150f70(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int extraout_r1;
  
  if (99 < param_3) {
    param_3 = 99;
  }
  iVar1 = FUN_0200d338(param_3,10);
  FUN_02023894(*(undefined4 *)(*(int *)(param_1 + param_2 * 4 + 8) + 4),
               *(uint *)(param_1 + 0x3c) | *(int *)(param_1 + 0x40) + iVar1,0);
  FUN_0200d338(param_3,10);
  FUN_02023894(*(undefined4 *)(*(int *)(param_1 + (param_2 + 1) * 4 + 8) + 4),
               *(uint *)(param_1 + 0x3c) | *(int *)(param_1 + 0x40) + extraout_r1,0);
  return;
}

