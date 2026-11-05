
void FUN_0214d14c(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 1;
  uVar3 = 0;
  do {
    if (((uint)DAT_0216acf2 & 1 << (uVar2 & 0xff)) != 0) {
      iVar1 = func_0x021be9f0(uVar2,3);
      if (iVar1 == 0) {
        FUN_0214d5d0(uVar2);
        func_0x021bfd64(uVar2);
      }
      else {
        uVar3 = uVar3 | 1 << (uVar2 & 0xff) & 0xffffU;
      }
    }
    uVar2 = uVar2 + 1 & 0xffff;
  } while (uVar2 < 0x10);
  if (uVar3 == 0) {
    DAT_0216ace8 = 7;
  }
  else {
    DAT_0216ace8 = 4;
  }
  return;
}

