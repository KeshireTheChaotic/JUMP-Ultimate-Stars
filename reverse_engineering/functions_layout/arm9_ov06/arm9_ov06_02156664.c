
void FUN_02156664(int param_1,int param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  
  if (*(short *)(param_2 + 2) != 0) {
    *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 0x800000;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x7c) + 0x10);
  if (*(short *)(param_2 + 2) == 0) {
    *(uint *)(iVar1 + 0x78) = *(uint *)(iVar1 + 0x78) & 0xfffdffff;
    return;
  }
  if ((*(uint *)(iVar1 + 0x78) & 0x20000) != 0) {
    return;
  }
  iVar4 = 0;
  puVar2 = (undefined2 *)(iVar1 + 0x90);
  puVar3 = (undefined2 *)(iVar1 + 0x98);
  do {
    iVar4 = iVar4 + 1;
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar4 < 2);
  *(uint *)(iVar1 + 0x78) = *(uint *)(iVar1 + 0x78) | 0x20000;
  return;
}

