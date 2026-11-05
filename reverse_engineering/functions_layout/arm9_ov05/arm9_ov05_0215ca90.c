
void FUN_0215ca90(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar3 = 0x15;
  iVar4 = 5;
  iVar5 = *(int *)(&DAT_0216d66c + ((int)(uint)*(byte *)(iVar2 + 0x4e5) >> 5 & 1U) * 4);
  iVar6 = iVar5 + 0x20;
  do {
    piVar1 = *(int **)(*(int *)(*(int *)(iVar2 + 0x48) + 4) + 100);
    (**(code **)(*piVar1 + 0x60))(piVar1,iVar3,0x2e,iVar5,2,0,0);
    piVar1 = *(int **)(*(int *)(*(int *)(iVar2 + 0x48) + 4) + 100);
    iVar5 = iVar5 + 1;
    (**(code **)(*piVar1 + 0x60))(piVar1,iVar3,0x2f,iVar6,2,0,0);
    iVar4 = iVar4 + -1;
    iVar6 = iVar6 + 1;
    iVar3 = iVar3 + 1;
  } while (0 < iVar4);
  *(char *)(iVar2 + 0x4e5) = *(char *)(iVar2 + 0x4e5) + '\x01';
  return;
}

