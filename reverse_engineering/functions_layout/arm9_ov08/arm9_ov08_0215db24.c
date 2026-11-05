
void FUN_0215db24(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_021622d4();
  if (*(byte *)(iVar1 + 0xf5) != param_1) {
    if (param_1 == 0) {
      *(undefined1 *)(DAT_0216e794 + 0x43) = *(undefined1 *)(iVar1 + 0xf6);
      uVar2 = 0;
    }
    else if (*(char *)(DAT_0216e794 + 0x43) == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    FUN_021622c0(param_1);
    FUN_021622ac(uVar2);
    FUN_0215d660();
  }
  return;
}

