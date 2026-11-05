
undefined4 FUN_021be160(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  uint extraout_r1;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 local_30 [2];
  undefined2 local_2e;
  char acStack_2a [22];
  
  uVar6 = 0;
  iVar7 = -1;
  FUN_020517fc(acStack_2a,0,0x10);
  iVar2 = DAT_021d525c;
  uVar5 = 1;
  do {
    if (*(int *)(DAT_021d525c + (uVar5 - 1) * 4 + 0x14e8) == 5) {
      cVar1 = *(char *)(DAT_021d525c + (uVar5 - 1) + 0x1526);
      acStack_2a[cVar1] = acStack_2a[cVar1] + '\x01';
    }
    uVar5 = uVar5 + 1 & 0xffff;
  } while (uVar5 < 0x10);
  uVar5 = (uint)DAT_021d4364;
  bVar4 = 0;
  while( true ) {
    FUN_0200d12c(uVar5 + 1,0x10);
    uVar5 = extraout_r1 & 0xff;
    if ((*(char *)(iVar2 + uVar5 * 0x5d4 + 0x1d52) != '\0') && (acStack_2a[uVar5] != '\0')) break;
    bVar4 = bVar4 + 1;
    if (0xf < bVar4) {
LAB_021be1de:
      if (iVar7 == -1) {
        return 0x15;
      }
      DAT_021d4364 = (byte)iVar7;
      uVar5 = 1;
      do {
        if ((*(int *)(iVar2 + (uVar5 - 1) * 4 + 0x14e8) == 5) &&
           (iVar7 == *(char *)(iVar2 + (uVar5 - 1) + 0x1526))) {
          uVar6 = uVar6 | 1 << (uVar5 & 0xff) & 0xffffU;
        }
        uVar5 = uVar5 + 1 & 0xffff;
      } while (uVar5 < 0x10);
      local_30[0] = 3;
      local_2e = (undefined2)iVar7;
      iVar2 = FUN_021c15a0(local_30,iVar2);
      if (iVar2 != 0) {
        FUN_02051890(DAT_021d525c + 0x1788 + iVar7 * 0x5d4,iVar2,0xe4);
      }
      uVar3 = FUN_021bf534(0xea,uVar6,DAT_021d525c);
      return uVar3;
    }
  }
  iVar7 = (int)(char)extraout_r1;
  goto LAB_021be1de;
}

