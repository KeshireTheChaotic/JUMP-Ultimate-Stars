
int FUN_0201a3ec(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0x40c);
  uVar3 = *(uint *)(iVar2 + 0xc);
  while (iVar2 != 0) {
    puVar1 = (uint *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 4);
    if (uVar3 <= *puVar1) {
      uVar3 = *puVar1;
    }
  }
  return uVar3 - 0x20;
}

