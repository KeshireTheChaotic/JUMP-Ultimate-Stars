
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037fb040(void)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = _DAT_0380fff4;
  if (*(short *)(_DAT_0380fff4 + 0x468) != 0) {
    if (*(short *)(*(int *)(_DAT_0380fff4 + 0x4bc) + 0x10) !=
        *(short *)(*(int *)(_DAT_0380fff4 + 0x470) + 2)) {
      FUN_037fac68();
    }
    uVar1 = *(ushort *)(*(int *)(iVar2 + 0x470) + 4);
    if ((uVar1 & 0xff) == 0) {
      *(int *)(_DAT_0380fff4 + 0x5a0) = *(int *)(_DAT_0380fff4 + 0x5a0) + 1;
    }
    else {
      *(uint *)(_DAT_0380fff4 + 0x5a0) = *(int *)(_DAT_0380fff4 + 0x5a0) + (uVar1 & 0xff);
    }
    *(short *)(iVar2 + 0x46c) = *(short *)(iVar2 + 0x46c) + 1;
    *(ushort *)(*(int *)(iVar2 + 0x4bc) + 0x12) =
         *(ushort *)(*(int *)(iVar2 + 0x4bc) + 0x10) ^ *(ushort *)(*(int *)(iVar2 + 0x470) + 2);
    *(undefined2 *)(iVar2 + 0x4cc) = *(undefined2 *)(*(int *)(iVar2 + 0x4bc) + 0x10);
    *(undefined2 *)(iVar2 + 0x468) = 0;
    if (*(short *)(_DAT_0380fff4 + 0x3ea) != 0) {
      FUN_027ea318();
    }
    FUN_037f8e64(_DAT_0380fff4 + 0x188,*(undefined4 *)(iVar2 + 0x4bc));
  }
  return;
}

