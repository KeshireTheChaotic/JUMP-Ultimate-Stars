
int FUN_020382fc(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  bVar1 = *param_1;
  iVar3 = 0;
  if (bVar1 == 0x24) {
    param_1 = param_1 + 1;
  }
  else {
    bVar4 = bVar1 == 0x30;
    if (bVar4) {
      bVar1 = param_1[1] | 0x20;
    }
    if (bVar4 && bVar1 == 0x78) {
      param_1 = param_1 + 2;
    }
  }
  do {
    uVar2 = (uint)(char)*param_1;
    if (uVar2 == 0) {
      return iVar3;
    }
    if (((int)uVar2 < 0x30) || (0x39 < (int)uVar2)) {
      uVar2 = uVar2 | 0x20;
      if (((int)uVar2 < 0x61) || (0x66 < (int)uVar2)) {
        return 0;
      }
      iVar3 = uVar2 + iVar3 * 0x10 + -0x57;
    }
    else {
      iVar3 = uVar2 + iVar3 * 0x10 + -0x30;
    }
    param_1 = param_1 + 1;
  } while( true );
}

