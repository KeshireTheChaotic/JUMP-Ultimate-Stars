
void FUN_0218f130(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar2 = *(int *)(DAT_020aab78 + 0xa4);
  if (iVar2 != 0) {
    if (*(char *)(iVar2 + 9) != '\0') {
      FUN_02193c84(iVar2);
    }
    uVar3 = FUN_02054b44();
    while ((iVar1 = (*DAT_021a8530)(), iVar1 != 0 && (*(char *)(iVar2 + 8) != '\0'))) {
      uVar4 = FUN_02054b44();
      if (0x26 < (int)(((uint)uVar4 >> 0x10 | (int)((ulonglong)uVar4 >> 0x20) << 0x10) -
                      ((uint)uVar3 >> 0x10 | (int)((ulonglong)uVar3 >> 0x20) << 0x10))) break;
      FUN_02191554();
    }
    *(undefined1 *)(iVar2 + 8) = 0;
  }
  return;
}

