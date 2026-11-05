
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027ed04c(void)

{
  int iVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  
                    /* JUS-TAG hw={"WIRELESS":2} io=["04808040","0480819c"] */
  iVar1 = _DAT_0380fff4;
  psVar6 = (short *)(_DAT_0380fff4 + 0x404);
  switch(*(undefined2 *)(_DAT_0380fff4 + 0x404)) {
  case 0x80:
    *(undefined2 *)(_DAT_0380fff4 + 0x418) = 0;
    uVar2 = FUN_027e9ba0(0x13);
    *(undefined2 *)(iVar1 + 0x412) = uVar2;
    uVar2 = FUN_027e9ba0(0x35);
    *(undefined2 *)(iVar1 + 0x414) = uVar2;
    FUN_027eae9c(*(undefined2 *)(*(int *)(iVar1 + 0x41c) + 0x12),
                 *(undefined2 *)(*(int *)(iVar1 + 0x41c) + 0x14));
    *(undefined2 *)(iVar1 + 0x350) = 4;
    *(undefined2 *)(iVar1 + 0x41a) = 0;
    goto LAB_027ed0d4;
  case 0x81:
LAB_027ed0d4:
    *(undefined4 *)(iVar1 + 0x408) = 0;
    *(undefined4 *)(iVar1 + 0x40c) = 0;
    uVar5 = FUN_027e93b0(*(int *)(iVar1 + 0x41c) + 0x18 + (uint)*(ushort *)(iVar1 + 0x418));
    if ((uVar5 == 0) || (0xf < *(ushort *)(iVar1 + 0x418))) {
      *psVar6 = 0x84;
    }
    else {
      iVar4 = FUN_027f5914(0);
      if (iVar4 == 0) {
        if (*psVar6 == 0x80) {
          FUN_027ea66c(uVar5 & 0xffff,0);
          FUN_037f8ef4();
          *(undefined2 *)(iVar1 + 0x410) = _DAT_04808040;
          FUN_027ea4dc(0x8000);
        }
        else {
          FUN_027ea66c(uVar5 & 0xffff,0);
        }
        *psVar6 = 0x82;
        FUN_027e95dc(*(undefined2 *)(*(int *)(iVar1 + 0x41c) + 0x16),&LAB_027ed020);
LAB_027ed194:
        *(int *)(iVar1 + 0x408) = *(int *)(iVar1 + 0x408) + 1;
        if ((_DAT_0480819c & 1) != 0) {
          *(int *)(iVar1 + 0x40c) = *(int *)(iVar1 + 0x40c) + 100;
        }
      }
      else {
        *(undefined2 *)(iVar1 + 0x41a) = 0xe;
        *psVar6 = 0x84;
      }
    }
    break;
  case 0x82:
    goto LAB_027ed194;
  case 0x83:
    uVar3 = FUN_027e93b0(*(int *)(_DAT_0380fff4 + 0x41c) + 0x18 +
                         (uint)*(ushort *)(_DAT_0380fff4 + 0x418));
    uVar5 = 0;
    if ((*(int *)(iVar1 + 0x408) != 0) && (*(int *)(iVar1 + 0x40c) != 0)) {
      iVar4 = FUN_03807acc();
      uVar5 = iVar4 + 1;
      if (100 < uVar5) {
        uVar5 = 100;
      }
    }
    *(ushort *)(*(int *)(iVar1 + 0x420) + (uint)*(ushort *)(iVar1 + 0x418) * 2 + 8) =
         uVar3 | (ushort)(uVar5 << 8);
    *(short *)(iVar1 + 0x418) = *(short *)(iVar1 + 0x418) + 1;
    *psVar6 = 0x81;
    break;
  case 0x84:
    FUN_037f93b0();
    *(undefined2 *)(iVar1 + 0x350) = *(undefined2 *)(_DAT_0380fff4 + 0x32e);
    FUN_027e9b60(0x13,*(undefined2 *)(iVar1 + 0x412));
    FUN_027e9b60(0x35,*(undefined2 *)(iVar1 + 0x414));
    FUN_027ea4dc(*(undefined2 *)(iVar1 + 0x410));
    *(undefined2 *)(*(int *)(iVar1 + 0x420) + 4) = *(undefined2 *)(iVar1 + 0x41a);
    *psVar6 = 0;
    for (uVar5 = (uint)*(ushort *)(iVar1 + 0x418); uVar5 < 0x10; uVar5 = uVar5 + 1) {
      *(undefined2 *)(*(int *)(iVar1 + 0x420) + uVar5 * 2 + 8) = 0;
    }
    FUN_027ecfa4();
  }
  if (*psVar6 != 0) {
    FUN_037f85f8(2,5);
  }
  return;
}

