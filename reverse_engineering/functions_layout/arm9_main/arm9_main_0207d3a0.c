
void FUN_0207d3a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (puVar3 = *(undefined4 **)(*piRam0207d404 + 0xd0); puVar3 != (undefined4 *)0x0;
      puVar3 = (undefined4 *)*puVar3) {
    iVar1 = puVar3[2];
    for (puVar2 = *(undefined4 **)(*(int *)(iVar1 + 0x60) + 0x10); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      if (((*(byte *)(puVar2 + 4) & 4) != 0) &&
         (*(int *)(*(int *)(puVar2[3] + 0x1c) + 0xc) == param_1)) {
        *(uint *)(iVar1 + 0x40) = *(uint *)(iVar1 + 0x40) | 0x80000000;
      }
    }
  }
  return;
}

