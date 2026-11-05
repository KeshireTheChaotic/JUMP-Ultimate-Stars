
void FUN_0214f404(int param_1,int *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  int iVar4;
  int iVar5;
  int aiStack_38 [5];
  
  if (9999 < param_1) {
    param_1 = 9999;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  FUN_0200d12c(param_1,10);
  aiStack_38[1] = extraout_r1;
  uVar2 = FUN_0200d12c(param_1,10);
  FUN_0200d12c(uVar2,10);
  aiStack_38[2] = extraout_r1_00;
  uVar2 = FUN_0200d12c(uVar2,10);
  FUN_0200d12c(uVar2,10);
  aiStack_38[3] = extraout_r1_01;
  uVar2 = FUN_0200d12c(uVar2,10);
  FUN_0200d12c(uVar2,10);
  bVar1 = false;
  aiStack_38[4] = extraout_r1_02;
  iVar4 = 4;
  do {
    iVar5 = aiStack_38[iVar4];
    if (iVar4 == 1 || (bVar1 || iVar5 != 0)) {
      piVar3 = *(int **)(*param_2 + 4);
      (**(code **)(*piVar3 + 0xd8))(piVar3,1);
      FUN_02023894(*(undefined4 *)(*param_2 + 4),iVar5 + 0x52001d,0);
      bVar1 = true;
    }
    else {
      piVar3 = *(int **)(*param_2 + 4);
      (**(code **)(*piVar3 + 0xd8))(piVar3,0);
    }
    iVar4 = iVar4 + -1;
    param_2 = param_2 + 1;
  } while (0 < iVar4);
  return;
}

