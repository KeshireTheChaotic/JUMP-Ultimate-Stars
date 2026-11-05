
void FUN_021586c4(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar1;
  int iVar2;
  int local_30 [4];
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 4);
    local_30[3] = param_4;
    FUN_02023894(*(undefined4 *)(iVar1 + 4),param_2 + 0x12U | 0x818000,0);
    (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
    if (999 < param_3) {
      param_3 = 999;
    }
    local_30[0] = FUN_0200d12c(param_3,100);
    FUN_0200d12c(param_3,100);
    local_30[1] = FUN_0200d12c(extraout_r1,10);
    FUN_0200d12c(extraout_r1,10);
    iVar1 = 0;
    local_30[2] = extraout_r1_00;
    do {
      iVar2 = *(int *)(param_1 + iVar1 * 4 + 0xc);
      FUN_02023894(*(undefined4 *)(iVar2 + 4),local_30[iVar1] + 0x16U | 0x818000,0);
      (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x68) + 0x6c))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < 3);
    *(undefined1 *)(param_1 + 0x18) = 1;
    *(short *)(param_1 + 0x1a) = (short)(param_2 << 4);
    *(short *)(param_1 + 0x1c) = (3 - (short)param_2) * 0x10 + 0x3c;
  }
  return;
}

