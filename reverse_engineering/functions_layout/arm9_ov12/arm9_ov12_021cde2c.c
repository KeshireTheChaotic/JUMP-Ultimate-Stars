
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_021cde2c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  
  iVar3 = DAT_021d579c;
  uVar4 = DAT_021d6684 - DAT_021d6680;
  if (1 < uVar4) {
    DAT_021d6680 = DAT_021d6684 - 1;
    uVar4 = 1;
  }
  if (uVar4 == 0) {
    return 0;
  }
  if ((DAT_021d6680 & 1) == 0) {
    iVar5 = 0x460;
  }
  else {
    iVar5 = 0;
  }
  puVar6 = &DAT_021d5dcc;
  if (1 < DAT_021d579c) {
    puVar6 = &DAT_021d5dd0;
  }
  puVar6 = puVar6 + iVar5;
  uVar2 = FUN_021cfd54(puVar6,DAT_021d57a4);
  uVar1 = _DAT_040002b4;
  _DAT_040002b0 = 0;
  _DAT_040002b8 = uVar2;
  if (DAT_021d5798 != 0) {
    FUN_021cfb00(puVar6,DAT_021d57a4,_DAT_040002b4);
  }
  (&DAT_021d5dc5)[iVar5] = (char)iVar3;
  if (DAT_021d50b8 != 0) {
    DAT_021d57a8 = FUN_021cf984(uVar2,uVar1,0);
    if (DAT_021d57a8 == 0) {
      DAT_021d6680 = DAT_021d6680 + 1;
      return 0;
    }
    if (DAT_021d57a8 == 1) {
      (&DAT_021d5dc5)[iVar5] = (&DAT_021d5dc5)[iVar5] | 0x80;
    }
    else if (DAT_021d57a8 == 3) {
      (&DAT_021d5dc4)[iVar5] = 0x41;
    }
  }
  if ((DAT_021d50b8 == 0) && (DAT_021d5788 != 0)) {
    (&DAT_021d5dc5)[iVar5] = (&DAT_021d5dc5)[iVar5] | 0x80;
    DAT_021d5788 = 0;
  }
  if (DAT_021d5794 != 0) {
    (&DAT_021d5dc5)[iVar5] = (&DAT_021d5dc5)[iVar5] | 0x80;
    DAT_021d5794 = 0;
  }
  if (iVar3 < 2) {
    if (iVar3 == 1) {
      FUN_021ce7b0(puVar6,puVar6,DAT_021d57a4 >> 1);
    }
    else if (iVar3 == 0) {
      FUN_021ce754(puVar6,puVar6,DAT_021d57a4 >> 1);
    }
  }
  else {
    if (((&DAT_021d5dc5)[iVar5] & 0x80) != 0) {
      DAT_021d5790 = 0;
      DAT_021d5792 = 0;
    }
    FUN_021cc9cc(puVar6 + -4,puVar6,DAT_021d57a4 >> 1,&DAT_021d5790,iVar3);
  }
  DAT_021d668c = DAT_021d5784 & ~(1 << (uint)DAT_021d7be0);
  iVar3 = FUN_02050dd0();
  DAT_021d6694 = iVar3 + -1;
  if (iVar3 + -1 < 8) {
    DAT_021d6690 = 0;
    return (int)&DAT_021d5dc0 + iVar5;
  }
  return 0;
}

