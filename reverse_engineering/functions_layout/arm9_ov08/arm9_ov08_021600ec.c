
void FUN_021600ec(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_021622d4();
  DAT_0216e7c0 = 0;
  if (DAT_0216e7b8 == '\0') {
    DAT_0216e7b8 = '\x01';
  }
  iVar2 = FUN_0215702c();
  if (iVar2 != 0) {
    if (DAT_0216e7bc == '\x02') {
      DAT_0216e7bc = '\0';
    }
    if (DAT_0216e7b8 == '\x02') {
      DAT_0216e7b8 = '\x01';
    }
  }
  FUN_0216004c();
  FUN_02154960();
  iVar2 = FUN_0215702c();
  FUN_02154588(0x32,(int)(char)(&DAT_0216ac58)[iVar2],*(byte *)(iVar1 + 0xf4) + 1);
  FUN_02154724(1);
  iVar1 = FUN_02157004(1);
  iVar2 = FUN_02157004(1);
  iVar3 = FUN_02157004(1);
  iVar4 = FUN_02157004(1);
  iVar5 = DAT_0216e7bc * 8;
  FUN_021547e4(*(undefined2 *)(&DAT_0216acd8 + iVar5 + iVar1 * 0x20),
               *(undefined2 *)(&DAT_0216acdc + iVar5 + iVar2 * 0x20),
               *(undefined2 *)(&DAT_0216acda + iVar5 + iVar3 * 0x20),
               *(undefined2 *)(&DAT_0216acde + iVar5 + iVar4 * 0x20));
  FUN_02157088(0x2160011);
  return;
}

