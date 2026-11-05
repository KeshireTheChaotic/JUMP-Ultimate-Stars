
void FUN_0201b078(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
  if (*(short *)(param_1 + 4) == 0) {
    iVar3 = *(int *)(param_1 + 0x1c);
    while (*(int *)(iVar3 + 0x10) != 0) {
      iVar3 = *(int *)(iVar3 + 0x10);
    }
    iVar1 = FUN_0201afa8(param_1);
    *(int *)(iVar3 + 0x10) = iVar1;
    *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + (short)*(undefined4 *)(iVar1 + 0x14);
    *(int *)(*(int *)(iVar3 + 0x10) + 0xc) = iVar3;
    iVar3 = *(int *)(iVar3 + 0x10);
  }
  else {
    for (iVar3 = *(int *)(param_1 + 0x1c); *(int *)(iVar3 + 0x14) == 0;
        iVar3 = *(int *)(iVar3 + 0x10)) {
    }
  }
  puVar2 = *(undefined4 **)(iVar3 + 0x18);
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -1;
  iVar1 = *(int *)(iVar3 + 0x14) + -1;
  *(int *)(iVar3 + 0x14) = iVar1;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar3 + 0x18) = *puVar2;
  }
  return;
}

