
void FUN_03805f00(void)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  
  if (DAT_0380aaa8 == 0) {
    iVar1 = FUN_03804588(3,0x66,1,1);
    if (iVar1 != 0) {
      FUN_03805edc(1);
    }
  }
  else if ((int)DAT_0380aaa8 < 4) {
    if (DAT_0380aaa8 != DAT_038081ac) {
      FUN_03804588(3,0x66,1);
    }
  }
  else {
    iVar1 = (DAT_0380aaa8 - 4) * 0xc;
    uVar2 = FUN_03807acc(DAT_0380aaa4,*(undefined2 *)(&DAT_038081ba + iVar1));
    bVar3 = (*(uint *)(&DAT_038081b4 + iVar1) & 0x80000000U >> (uVar2 & 0xff)) == 0;
    bVar4 = (*(uint *)(&DAT_038081b0 + iVar1) &
            (0U >> (uVar2 & 0xff) | -0x80000000 << (0x20 - uVar2 & 0xff) |
            0x80000000U >> (uVar2 - 0x20 & 0xff))) != 0;
    uVar2 = (uint)(!bVar3 || bVar4);
    if (bVar3 && !bVar4) {
      uVar2 = 2;
    }
    DAT_0380aaa4 = DAT_0380aaa4 + 1;
    if ((uint)*(ushort *)(&DAT_038081b8 + iVar1) * (uint)*(ushort *)(&DAT_038081ba + iVar1) <=
        DAT_0380aaa4) {
      DAT_0380aaa4 = 0;
    }
    if (uVar2 != DAT_038081ac) {
      FUN_03804588(3,0x66,1);
    }
  }
  return;
}

