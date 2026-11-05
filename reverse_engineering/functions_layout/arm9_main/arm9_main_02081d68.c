
void FUN_02081d68(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0x40); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    iVar4 = *(int *)(*(int *)(puVar1[2] + 8) + 0x1c);
    iVar3 = *(int *)(*(int *)(puVar1[2] + 0xc) + 0x1c);
    uVar2 = *(uint *)(iVar4 + 0x14) & 0xff;
    if (((*(ushort *)(iVar3 + 0x20) & uVar2) == 0) && ((*(ushort *)(iVar3 + 0x24) & uVar2) == 0)) {
      *(byte *)(iVar4 + 0x2a) = *(byte *)(iVar4 + 0x2a) | 4;
      *(byte *)(iVar3 + 0x2a) = *(byte *)(iVar3 + 0x2a) | 2;
      *(uint *)(*(int *)(iVar4 + 0xc) + 0x40) = *(uint *)(*(int *)(iVar4 + 0xc) + 0x40) | 0x10000;
    }
  }
  return;
}

