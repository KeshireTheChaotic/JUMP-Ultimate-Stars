
void FUN_0205c9b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  iVar1 = FUN_020645d8(param_1 + 0x7c);
  if (iVar1 == 0) {
    return;
  }
  FUN_02064744(param_1 + 0x34);
  iVar1 = FUN_02064550(param_1 + 0x34,*(undefined4 *)(param_1 + 0x7c),
                       *(undefined4 *)(param_1 + 0x80));
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x30) = 1;
  iVar1 = FUN_0205c7cc(param_1,param_3,param_4);
  if (iVar1 != 0) {
    DAT_020ae050 = param_1;
  }
  return;
}

