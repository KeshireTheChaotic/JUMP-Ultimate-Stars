
bool FUN_0216ed30(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  uVar1 = 0;
  uVar2 = 0;
  for (puVar5 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x10) + 0x60) + 0x10);
      puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)*puVar5) {
    if ((*(byte *)(puVar5 + 4) & 0x20) == 0) {
      iVar4 = puVar5[3];
      uVar3 = *(uint *)(iVar4 + 0x10);
      if (((((*(byte *)(puVar5 + 4) & 1) == 0) && ((*(uint *)(puVar5[2] + 0x10) & 0x10000000) != 0))
          && ((uVar3 & 0xf) != 0)) &&
         ((((uVar3 & 0xfffff0) == 0 && ((uVar3 & 0x20000000) != 0)) &&
          (((*(uint *)(*(int *)(*(int *)(iVar4 + 0x1c) + 0xc) + 0x40) & 0x18000080) == 0 &&
           ((*(uint *)(iVar4 + 0x14) & 0x10000000) == 0)))))) {
        uVar1 = uVar1 | uVar3 & 0xf;
      }
      if ((uVar3 & 0x40000000) != 0) {
        uVar2 = uVar2 | uVar3 & 0xf;
      }
    }
  }
  return (uVar1 & ~uVar2) != 0;
}

