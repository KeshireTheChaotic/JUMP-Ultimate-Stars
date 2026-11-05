
undefined4 FUN_02172ba0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_10;
  
  local_10 = 0;
  local_10 = FUN_02173920(*(undefined4 *)(DAT_021a7348 + 0x1314),&DAT_021a37a0);
  if (local_10 != 0) {
    FUN_021753a4();
  }
  local_10 = 0;
  DAT_020a0c10 = 0;
  FUN_02173920(*(undefined4 *)(DAT_021a7348 + 0x1314),s_httpresult_021a37a8);
  iVar1 = FUN_02005f14();
  if (DAT_020a0c10 == 0x22) {
    *(undefined4 *)(DAT_021a7348 + 0x1008) = 0x4e85;
    return 0xc;
  }
  if (iVar1 != 200) {
    *(int *)(DAT_021a7348 + 0x1008) = iVar1 + 23000;
    return 0x12;
  }
  iVar1 = FUN_021738ec(*(undefined4 *)(DAT_021a7348 + 0x1314),s_returncd_021a37b4,
                       DAT_021a7348 + 0x100c,4);
  if (iVar1 < 1) {
    *(undefined4 *)(DAT_021a7348 + 0x1008) = 0x4e85;
    return 0xe;
  }
  iVar2 = FUN_02005e98(DAT_021a7348 + 0x100c,&local_10,10);
  iVar1 = DAT_021a7348;
  iVar3 = FUN_02004b04(DAT_021a7348 + 0x100c);
  if (local_10 != iVar1 + 0x100c + iVar3) {
    *(undefined4 *)(iVar1 + 0x1008) = 0x4e85;
    return 0xc;
  }
  *(int *)(iVar1 + 0x1008) = iVar2 + 20000;
  if (iVar2 < 100) {
    *(undefined1 *)(DAT_021a7348 + 0x1052) = 0;
    *(undefined1 *)(DAT_021a7348 + 0x101f) = 0;
    *(undefined1 *)(DAT_021a7348 + 0x117f) = 0;
    *(undefined1 *)(DAT_021a7348 + 0x1010) = 0;
    *(undefined1 *)(DAT_021a7348 + 0x1188) = 0;
    FUN_021738ec(*(undefined4 *)(DAT_021a7348 + 0x1314),s_token_021a37c0,DAT_021a7348 + 0x1052,0x12d
                );
    FUN_021738ec(*(undefined4 *)(DAT_021a7348 + 0x1314),s_locator_021a37c8,DAT_021a7348 + 0x101f,
                 0x33);
    FUN_021738ec(*(undefined4 *)(DAT_021a7348 + 0x1314),s_challenge_021a37d0,DAT_021a7348 + 0x117f,9
                );
    FUN_021738ec(*(undefined4 *)(DAT_021a7348 + 0x1314),s_datetime_021a37dc,DAT_021a7348 + 0x1010,
                 0xf);
    FUN_021738c0(*(undefined4 *)(DAT_021a7348 + 0x1314),s_Set_Cookie_021a37e8,DAT_021a7348 + 0x1188,
                 0x41);
    *(undefined1 *)(DAT_021a7348 + 0x11b3) = 0;
    if (iVar2 == 0x28) {
      DAT_021a7344 = 2;
    }
    else {
      DAT_021a7344 = 1;
    }
  }
  return 0;
}

