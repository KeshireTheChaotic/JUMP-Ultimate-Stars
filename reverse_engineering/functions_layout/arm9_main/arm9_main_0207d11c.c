
void FUN_0207d11c(int param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) & 0xfffdffff;
    return;
  }
  if ((*(uint *)(param_1 + 0x78) & 0x20000) != 0) {
    return;
  }
  iVar3 = 0;
  puVar1 = (undefined2 *)(param_1 + 0x90);
  puVar2 = (undefined2 *)(param_1 + 0x98);
  do {
    iVar3 = iVar3 + 1;
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 < 2);
  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 0x20000;
  return;
}

