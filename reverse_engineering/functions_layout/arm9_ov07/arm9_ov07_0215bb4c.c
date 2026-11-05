
void FUN_0215bb4c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int iStack_38;
  int aiStack_34 [8];
  
  iVar4 = *(int *)(param_1 + 4);
  psVar5 = (short *)(iVar4 + 0xa0);
  aiStack_34[7] = param_4;
  iVar1 = FUN_0214f898(param_1,0x31305053);
  iVar2 = FUN_0215bad0(param_1);
  if (*(int *)(*(int *)(iVar2 + 4) + 0x124) == 0xef0000) {
    (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),0);
    return;
  }
  iVar2 = FUN_0214f45c(psVar5);
  iVar3 = FUN_0214f45c(&DAT_0216a208);
  if (iVar2 == iVar3) {
    iVar2 = FUN_0214f474(psVar5);
    iVar3 = FUN_0214f474(&DAT_0216a208);
    if (iVar2 == iVar3) {
      FUN_02023894(*(undefined4 *)(iVar1 + 4),0x8e0004,0);
      (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
      aiStack_34[5] = 0x8000;
      aiStack_34[6] = 0x54000;
      FUN_0214f218(iVar1,aiStack_34 + 6,aiStack_34 + 5);
      goto LAB_0215bc70;
    }
  }
  iVar2 = FUN_0214f45c(psVar5);
  iVar3 = FUN_0214f45c(&DAT_0216a200);
  if (iVar2 == iVar3) {
    iVar2 = FUN_0214f474(psVar5);
    iVar3 = FUN_0214f474(&DAT_0216a200);
    if (iVar2 == iVar3) {
      FUN_02023894(*(undefined4 *)(iVar1 + 4),0x8e0001,0);
      (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
      aiStack_34[3] = 0x8000;
      aiStack_34[4] = 0x42000;
      FUN_0214f218(iVar1,aiStack_34 + 4,aiStack_34 + 3);
      goto LAB_0215bc70;
    }
  }
  iVar2 = FUN_0214f45c(psVar5);
  iVar3 = FUN_0214f45c(&DAT_0216a210);
  if (iVar2 == iVar3) {
    iVar2 = FUN_0214f474(psVar5);
    iVar3 = FUN_0214f474(&DAT_0216a210);
    if (iVar2 == iVar3) {
      FUN_02023894(*(undefined4 *)(iVar1 + 4),0x8e0003,0);
      (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
      aiStack_34[1] = 0x8000;
      aiStack_34[2] = 0x95000;
      FUN_0214f218(iVar1,aiStack_34 + 2,aiStack_34 + 1);
    }
  }
LAB_0215bc70:
  iStack_38 = (int)*(short *)(iVar4 + 0xa2) << 0xc;
  aiStack_34[0] = (int)*psVar5 << 0xc;
  FUN_0214f218(param_1,aiStack_34,&iStack_38);
  return;
}

