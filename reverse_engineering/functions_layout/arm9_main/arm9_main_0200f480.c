
undefined4 FUN_0200f480(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = *(int *)(param_1 + 0x60);
  uVar2 = 0xf;
  if (*(char *)(param_1 + 0x6a) == '\0') {
    iVar1 = 0;
  }
  else {
    iVar1 = 0x10;
  }
  puVar4 = (undefined4 *)((*(int *)(param_1 + 0x18) + iVar3) - iVar1);
  do {
    if (((uint)*(ushort *)(param_1 + 0x68) & 1 << (uVar2 & 0xff)) != 0) {
      puVar4 = puVar4 + -1;
      *(undefined4 *)(param_1 + uVar2 * 4 + 0x1c) = *puVar4;
    }
    uVar2 = uVar2 - 1;
  } while (-1 < (int)uVar2);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x18) + iVar3;
  return *(undefined4 *)(param_1 + 0x54);
}

