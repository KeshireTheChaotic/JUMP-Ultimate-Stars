
undefined4 FUN_021730a4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_02004c2c(DAT_021a3720,s_https___nas_nintendowifi_net_ac_021a3810);
  if (iVar1 != 0) {
    DAT_021a3734 = 1;
  }
  DAT_021a372c = *(undefined4 *)(DAT_021a7348 + 0x120c);
  DAT_021a3730 = *(undefined4 *)(DAT_021a7348 + 0x1210);
  iVar1 = FUN_021745e0(*(undefined4 *)(DAT_021a7348 + 0x1314));
  if (iVar1 != 0) {
    return 4;
  }
  if (param_1 == 1) {
    FUN_0206a4f8(&DAT_021a734c);
  }
  uVar2 = FUN_02172a90(*(undefined4 *)(DAT_021a7348 + 0x1314),DAT_021a7348 + 0x1200,
                       DAT_021a7348 + 0x11cc);
  *(undefined4 *)(DAT_021a7348 + 0x1004) = uVar2;
  if (*(int *)(DAT_021a7348 + 0x1004) != 0) {
    return 4;
  }
  iVar1 = FUN_02174574(*(undefined4 *)(DAT_021a7348 + 0x1314));
  if (iVar1 == 0) {
    iVar1 = FUN_02052f4c(DAT_020aab78);
    FUN_021744e8(*(undefined4 *)(DAT_021a7348 + 0x1314),iVar1 + -1);
    return 0;
  }
  return 4;
}

