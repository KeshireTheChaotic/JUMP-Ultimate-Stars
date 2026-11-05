
void FUN_021bcad4(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  sVar1 = *(short *)(param_1 + 0x5a);
  iVar4 = *(int *)(&DAT_021d0120 + ((int)(uint)*(byte *)(param_1 + 0x9b) >> 5 & 1U) * 4);
  if (iVar4 == 0x50) {
    iVar6 = 9;
  }
  else {
    iVar6 = 5;
  }
  iVar5 = iVar4 + 0x20;
  iVar3 = *(short *)(param_1 + 0x58) + -10;
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
    (**(code **)(*piVar2 + 0x60))(piVar2,iVar3,(int)sVar1,iVar4,0xf,0,0);
    piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
    iVar4 = iVar4 + 1;
    (**(code **)(*piVar2 + 0x60))(piVar2,iVar3,sVar1 + 1,iVar5,0xf,0,0);
    iVar5 = iVar5 + 1;
    iVar3 = iVar3 + 1;
  }
  *(char *)(param_1 + 0x9b) = *(char *)(param_1 + 0x9b) + '\x01';
  return;
}

