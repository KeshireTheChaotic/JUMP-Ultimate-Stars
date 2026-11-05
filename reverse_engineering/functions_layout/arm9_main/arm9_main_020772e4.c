
undefined4 FUN_020772e4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_30 [12];
  
  puVar2 = *(undefined4 **)(param_1 + 0x558);
  uVar3 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
      iVar1 = FUN_02077178(param_1,puVar2,auStack_30);
      if (iVar1 != 0) {
        uVar3 = 1;
      }
      if (*(char *)(puVar2 + 0x10) == '\0') {
        if ((*(byte *)((int)puVar2 + 0xf) & 0x10) != 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = (int)(((uint)*(byte *)((uint)*(byte *)((int)puVar2 + 0x41) * 0x3c +
                                       *(int *)(DAT_0214bd80 + 0x40) +
                                       (*(char *)(puVar2[0xd] + 8) + -3) * 4 + 0x10) + iVar1 * 8) *
                     0x400000) >> 0x10;
        if (0x4000 < iVar1) {
          iVar1 = 0x4000;
        }
        *(short *)((int)puVar2 + 0x16) = (short)iVar1;
        *(undefined2 *)(puVar2 + 6) = *(undefined2 *)((int)puVar2 + 0x16);
      }
    }
  }
  return uVar3;
}

