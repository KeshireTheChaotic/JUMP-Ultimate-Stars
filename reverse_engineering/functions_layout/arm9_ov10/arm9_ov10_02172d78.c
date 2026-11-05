
undefined4 FUN_02172d78(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(DAT_021a7348 + 0x120c);
  pcVar3 = *(code **)(DAT_021a7348 + 0x1210);
  iVar1 = FUN_02173964(*(undefined4 *)(DAT_021a7348 + 0x1314),0);
  if (iVar1 != 1) {
    *(undefined4 *)(DAT_021a7348 + 0x1008) = 0x4e84;
    return 0xe;
  }
  iVar1 = FUN_02172ba0();
  if (iVar1 != 0) {
    return 0xe;
  }
  iVar1 = *(int *)(DAT_021a7348 + 0x1008);
  if (0x4e83 < iVar1) {
    if (iVar1 == 0x4e88) {
      FUN_0206a9a4(&DAT_021a734c);
      *(undefined4 *)(DAT_021a7348 + 0x1008) = 0x4e88;
      return 0x10;
    }
    if (iVar1 != 0x4e8c) {
      return 0x12;
    }
    iVar1 = (*pcVar4)(s_ALLOC_bmwork_021a37f4,0x700);
    if (iVar1 == 0) {
      *(undefined4 *)(DAT_021a7348 + 0x1008) = 0x4e8c;
      return 0x11;
    }
    FUN_0206aaf4(iVar1 + 0x1fU & 0xffffffe0);
    (*pcVar3)(s_FREE_bmwork_021a3804,iVar1,0);
    *(undefined4 *)(DAT_021a7348 + 0x1008) = 0x4e8c;
    return 0x11;
  }
  if (iVar1 == 0x4e22) {
    iVar1 = (*pcVar4)(s_ALLOC_bmwork_021a37f4,0x71f);
    if (iVar1 == 0) {
      *(undefined4 *)(DAT_021a7348 + 0x1008) = 0x4e84;
      return 2;
    }
    iVar2 = FUN_0206aabc(&DAT_021a734c,iVar1 + 0x1fU & 0xffffffe0);
    if (iVar2 != 1) {
      (*pcVar3)(s_FREE_bmwork_021a3804,iVar1,0);
      *(undefined4 *)(DAT_021a7348 + 0x1008) = 0x4e84;
      return 0xf;
    }
    (*pcVar3)(s_FREE_bmwork_021a3804,iVar1,0);
  }
  return 0x15;
}

