
undefined4 FUN_021752f0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  pcVar3 = (code *)*param_1;
  if (DAT_021a7364 != 0) {
    return 4;
  }
  DAT_021a7364 = (*pcVar3)(s_ALLOC_DWCnetcheck_021a3d68,0x11f4);
  if (DAT_021a7364 == 0) {
    return 4;
  }
  FUN_020517fc(DAT_021a7364,0,0x11f4);
  *(undefined4 *)(DAT_021a7364 + 0x1004) = 0xfffe7961;
  iVar1 = DAT_021a7364;
  uVar2 = param_1[1];
  *(undefined4 *)(DAT_021a7364 + 0x1108) = *param_1;
  *(undefined4 *)(iVar1 + 0x110c) = uVar2;
  *(undefined4 *)(iVar1 + 0x1110) = param_1[2];
  if (DAT_021a7370 != 0) {
    return 4;
  }
  DAT_021a7370 = (*pcVar3)(s_ALLOC_DWChttp_021a3d7c,0x1c10);
  if (DAT_021a7370 == 0) {
    return 4;
  }
  DAT_021a736c = 0;
  FUN_02053f5c(DAT_021a7364 + 0x11dc);
  FUN_02175164();
  return 0;
}

