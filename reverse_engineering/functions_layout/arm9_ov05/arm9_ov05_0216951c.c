
void FUN_0216951c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((*(char *)(param_1 + 0x70) != '\0') &&
     (iVar1 = *(int *)(param_1 + 0x6c) + 1, *(int *)(param_1 + 0x6c) = iVar1, 0x32 < iVar1)) {
    *(undefined1 *)(param_1 + 0x70) = 0;
    uVar2 = FUN_020758e0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x60));
    FUN_0207361c(uVar2,0);
  }
  iVar5 = *(int *)(&DAT_0216d7a0 + ((int)(uint)*(byte *)(param_1 + 0x71) >> 5 & 1U) * 4);
  iVar1 = 0x13;
  iVar4 = 5;
  iVar6 = iVar5 + 0x20;
  do {
    piVar3 = *(int **)(*(int *)(*(int *)(param_1 + 0x34) + 4) + 100);
    (**(code **)(*piVar3 + 0x60))(piVar3,iVar1,0xe,iVar5,8,0,0);
    piVar3 = *(int **)(*(int *)(*(int *)(param_1 + 0x34) + 4) + 100);
    iVar5 = iVar5 + 1;
    (**(code **)(*piVar3 + 0x60))(piVar3,iVar1,0xf,iVar6,8,0,0);
    iVar4 = iVar4 + -1;
    iVar6 = iVar6 + 1;
    iVar1 = iVar1 + 1;
  } while (0 < iVar4);
  *(char *)(param_1 + 0x71) = *(char *)(param_1 + 0x71) + '\x01';
  return;
}

