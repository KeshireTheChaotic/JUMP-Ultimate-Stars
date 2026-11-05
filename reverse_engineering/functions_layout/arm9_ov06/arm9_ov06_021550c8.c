
void FUN_021550c8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int extraout_r1;
  int extraout_r1_00;
  int iVar5;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x10);
    if (iVar5 != -1) {
      iVar5 = FUN_0200d12c(iVar5,0x90,param_3,param_4,param_4);
    }
  }
  cVar1 = *(char *)(param_1 + 0xc4);
  cVar2 = (char)iVar5;
  if ((int)cVar1 != (int)cVar2) {
    *(char *)(param_1 + 0xc4) = cVar2;
    if (iVar5 == -1) {
      piVar3 = *(int **)(*(int *)(param_1 + 0x30) + 4);
      (**(code **)(*piVar3 + 0xd8))(piVar3,0);
      return;
    }
    if (iVar5 < 100) {
      if (iVar5 < 0) {
        iVar5 = 0;
      }
    }
    else {
      iVar5 = 99;
    }
    FUN_0200d12c(iVar5,10,(int)cVar2,(int)cVar1,param_4);
    FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0x34) + 4),extraout_r1 + 0x5f001e,0);
    uVar4 = FUN_0200d12c(iVar5,10);
    FUN_0200d12c(uVar4,10);
    FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0x30) + 4),extraout_r1_00 + 0x5f001e,0);
  }
  return;
}

