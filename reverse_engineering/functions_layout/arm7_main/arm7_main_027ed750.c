
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027ed750(void)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  bool bVar6;
  
  iVar1 = _DAT_0380fff4;
  psVar5 = (short *)(_DAT_0380fff4 + 0x404);
  bVar6 = false;
  switch(*(undefined2 *)(_DAT_0380fff4 + 0x404)) {
  case 0x10:
    FUN_037f9468(0x20);
    *(undefined2 *)(iVar1 + 0x350) = 2;
    *(undefined2 *)(*(int *)(iVar1 + 0x420) + 8) = 0;
    *(undefined2 *)(*(int *)(iVar1 + 0x420) + 6) = 0;
    *(undefined2 *)(iVar1 + 0x40a) = 0;
    *(undefined2 *)(iVar1 + 0x40c) = 0;
    iVar4 = *(int *)(iVar1 + 0x41c);
    if (*(short *)(iVar4 + 0x38) == 0) {
      uVar2 = FUN_038078c0(*(ushort *)(iVar4 + 0x4a) + 3,4);
      *(undefined2 *)(iVar1 + 0x410) = uVar2;
      if (*(ushort *)(iVar1 + 0x410) < 10) {
        *(undefined2 *)(iVar1 + 0x410) = 10;
      }
    }
    else {
      *(undefined2 *)(iVar1 + 0x410) = *(undefined2 *)(iVar4 + 0x4a);
    }
    *(undefined2 *)(*(int *)(iVar1 + 0x420) + 4) = 0;
    goto LAB_027ed814;
  case 0x11:
LAB_027ed814:
    iVar4 = FUN_027e93b0(*(int *)(iVar1 + 0x41c) + 0x3a + (uint)*(ushort *)(iVar1 + 0x40a));
    bVar6 = iVar4 == 0;
    if (bVar6) {
      *psVar5 = 0x15;
      goto switchD_027ed77c_default;
    }
    *(short *)(iVar1 + 0x40a) = *(short *)(iVar1 + 0x40a) + 1;
    *(undefined2 *)(iVar1 + 0x40e) = 0;
    iVar3 = FUN_027f5914();
    if (iVar3 != 0) {
      *(undefined2 *)(*(int *)(iVar1 + 0x420) + 4) = 0xe;
      *psVar5 = 0x15;
      bVar6 = true;
      goto switchD_027ed77c_default;
    }
    if (*psVar5 == 0x10) {
      FUN_027ea66c(iVar4,0);
      FUN_037f8ef4();
    }
    else {
      FUN_027ea66c(iVar4,0);
    }
    *psVar5 = 0x12;
    break;
  case 0x12:
    break;
  case 0x13:
    break;
  case 0x14:
    goto switchD_027ed77c_default;
  case 0x15:
    *psVar5 = 0;
    FUN_037f93b0();
    *(undefined2 *)(iVar1 + 0x350) = *(undefined2 *)(_DAT_0380fff4 + 0x32e);
    FUN_027ecfa4();
  default:
    goto switchD_027ed77c_default;
  }
  *psVar5 = 0x13;
  if (*(short *)(*(int *)(iVar1 + 0x41c) + 0x38) == 0) {
    iVar4 = FUN_027f0a54(*(int *)(iVar1 + 0x41c) + 0x10);
    if (iVar4 == 0) {
      *(undefined2 *)(*(int *)(iVar1 + 0x420) + 4) = 8;
      *psVar5 = 0x15;
      bVar6 = true;
      goto switchD_027ed77c_default;
    }
    FUN_027f15ac();
  }
  FUN_027e95dc(*(undefined2 *)(iVar1 + 0x410),&LAB_027ed6e8);
switchD_027ed77c_default:
  if (bVar6) {
    FUN_037f85f8(2,0);
  }
  return;
}

