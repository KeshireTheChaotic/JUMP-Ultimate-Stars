
void FUN_021567a4(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_20 [12];
  
  *(undefined1 *)(DAT_0216e6e0 + 0x60) = 0;
  iVar1 = FUN_02166cd8(&DAT_0216af00);
  if (iVar1 != 0) {
    iVar1 = 0;
    puVar3 = &DAT_0216a800;
    do {
      FUN_02166868(puVar3,&DAT_0216a798,auStack_20);
      iVar2 = FUN_02166cd8(auStack_20);
      if (iVar2 != 0) {
        if (*(char *)(DAT_0216e6e0 + 0x61) == iVar1) {
          *(char *)(DAT_0216e6e0 + 0x60) = s_7894561230_0216a7d8[iVar1];
          *(char *)(DAT_0216e6e0 + 99) = (char)iVar1;
          FUN_02156268();
          return;
        }
        return;
      }
      puVar3 = puVar3 + 4;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 10);
    iVar1 = 0;
    puVar4 = &DAT_0216a7c8;
    do {
      FUN_02166868(puVar4,&DAT_0216a7a0,auStack_20);
      iVar2 = FUN_02166cd8(auStack_20);
      if (iVar2 != 0) {
        if ((int)*(char *)(DAT_0216e6e0 + 0x61) == iVar1 + 10) {
          *(undefined1 *)(DAT_0216e6e0 + 0x60) = (&DAT_0216a794)[iVar1];
          *(char *)(DAT_0216e6e0 + 99) = (char)(iVar1 + 10);
          FUN_02156268();
          return;
        }
        return;
      }
      puVar4 = puVar4 + 2;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    iVar1 = 0;
    puVar4 = &DAT_0216a7d0;
    do {
      FUN_02166868(puVar4,&DAT_0216a7a4,auStack_20);
      iVar2 = FUN_02166cd8(auStack_20);
      if (iVar2 != 0) {
        if ((int)*(char *)(DAT_0216e6e0 + 0x61) == iVar1 + 0xc) {
          *(undefined1 *)(DAT_0216e6e0 + 0x60) = (&DAT_0216a790)[iVar1];
          *(char *)(DAT_0216e6e0 + 99) = (char)(iVar1 + 0xc);
          FUN_02156268();
          return;
        }
        return;
      }
      puVar4 = puVar4 + 2;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
  }
  return;
}

