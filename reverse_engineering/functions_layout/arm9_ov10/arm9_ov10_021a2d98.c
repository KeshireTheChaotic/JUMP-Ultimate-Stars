
void FUN_021a2d98(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = thunk_FUN_021766fc();
  if (param_2 == uVar1) {
    return;
  }
  iVar2 = FUN_02176654(param_2);
  if (iVar2 == 0) {
    return;
  }
  if (((uint)*(byte *)(param_1 + 0x30) & 1 << (param_2 & 0xff)) == 0) {
    return;
  }
  if (((uint)*(byte *)(param_1 + 0x31) & 1 << (param_2 & 0xff)) != 0) {
    return;
  }
  iVar2 = FUN_0217ef04(param_2);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = FUN_0217ee90(param_2,s_JUpiJUdMJUpsJU1wJUReJUPn_021a36f0 + 0x10,4);
  if (iVar2 != 0) {
    *(byte *)(param_1 + 0x31) = *(byte *)(param_1 + 0x31) | (byte)(1 << (param_2 & 0xff));
  }
  return;
}

