
void FUN_02155a8c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int local_10 [2];
  
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  *(char *)((int)piVar3 + 0xd) = *(char *)((int)piVar3 + 0xd) + '\x01';
  if (*(char *)((int)piVar3 + 0xd) < 8) {
    iVar2 = *(char *)((int)piVar3 + 0xd) * 0x1000;
    local_10[0] = (int)(iVar2 + ((uint)(iVar2 >> 2) >> 0x1d)) >> 3;
    uVar1 = FUN_02155a3c(piVar3);
    FUN_02155970(uVar1,local_10);
  }
  else {
    local_10[1] = 0x1000;
    uVar1 = FUN_02155a3c(piVar3);
    FUN_02155970(uVar1,local_10 + 1);
    *(undefined1 *)(piVar3 + 3) = 1;
    FUN_02028384(*(undefined4 *)(*piVar3 + 4),FUN_02155a88);
  }
  return;
}

