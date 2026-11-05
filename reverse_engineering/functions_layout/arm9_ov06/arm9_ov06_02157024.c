
void FUN_02157024(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x10);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x1c8);
    piVar4 = *(int **)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 8) + 4) + 0x50);
    piVar4[3] = *(int *)(param_1 + 0x1c4) << 4;
    piVar4[4] = iVar1 << 4;
    piVar4[5] = 0;
    if (*(byte *)(piVar4 + 9) != (*(byte *)(piVar4 + 9) | 1)) {
      (**(code **)(*piVar4 + 0x18))();
    }
    *(byte *)(piVar4 + 9) = *(byte *)(piVar4 + 9) | 0x31;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x5c);
    *(undefined2 *)(iVar1 + 0x24) = 0;
    *(undefined2 *)(iVar1 + 0x26) = 0;
    iVar3 = *(int *)(param_1 + 0x1a8);
    uVar2 = *(undefined4 *)(param_1 + 0x1c8);
    iVar1 = *(int *)(*(int *)(iVar3 + 0x10) + 0x5c);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x1c4);
    *(undefined4 *)(iVar1 + 0x10) = uVar2;
    uVar2 = *(undefined4 *)(param_1 + 0x1c8);
    iVar1 = *(int *)(*(int *)(iVar3 + 0x10) + 0x5c);
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1 + 0x1c4);
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
  }
  FUN_02083950(*(undefined4 *)(param_1 + 0x1a8),*(undefined1 *)(param_1 + 0x1ea));
  return;
}

