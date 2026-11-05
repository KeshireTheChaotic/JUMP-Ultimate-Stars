
undefined4 FUN_021c0ff8(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  bVar2 = false;
  bVar1 = false;
  if ((*(short *)(DAT_021d5258 + 0x528) == 1) && (*(char *)(DAT_021d5258 + 0x50c) == '\0')) {
    bVar1 = true;
  }
  if ((bVar1) && (*(short *)(DAT_021d5258 + 0x526) == 0)) {
    bVar2 = true;
  }
  if ((bVar2) && (*(short *)(DAT_021d5258 + 0x52a) != 0)) {
    uVar3 = 1;
  }
  return uVar3;
}

