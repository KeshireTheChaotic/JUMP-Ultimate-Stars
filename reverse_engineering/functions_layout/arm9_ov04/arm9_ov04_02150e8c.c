
void FUN_02150e8c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  int extraout_r1_00;
  int iVar2;
  
  if (param_1 == 0) {
    return;
  }
  if ((param_2 != 0) || (*(int *)(param_1 + 0x44) < 0)) {
    uVar1 = FUN_0200d338(param_2,0xe10);
    FUN_0200d338(param_2,0xe10);
    FUN_02150f70(param_1,0,uVar1);
    uVar1 = FUN_0200d338(extraout_r1,0x3c);
    FUN_02150f70(param_1,3,uVar1);
    FUN_0200d338(extraout_r1,0x3c);
    uVar1 = FUN_0200d338(extraout_r1_00 * 100,0x3c);
    FUN_02150f70(param_1,6,uVar1);
    return;
  }
  iVar2 = 0;
  do {
    if (iVar2 != 2 && iVar2 != 5) {
      FUN_02023894(*(undefined4 *)(*(int *)(param_1 + iVar2 * 4 + 8) + 4),
                   *(uint *)(param_1 + 0x3c) | *(uint *)(param_1 + 0x44),0);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  return;
}

