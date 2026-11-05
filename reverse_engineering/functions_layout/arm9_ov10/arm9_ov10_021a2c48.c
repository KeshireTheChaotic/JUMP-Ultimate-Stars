
void FUN_021a2c48(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  FUN_021a2f1c();
  if (*(int *)(param_1 + 0x28) == 0) {
    FUN_021a3024(param_1);
    return;
  }
  uVar3 = 0;
  do {
    uVar1 = thunk_FUN_021766fc();
    if ((((uVar3 != uVar1) && (iVar2 = FUN_02176654(uVar3 & 0xff), iVar2 != 0)) &&
        (((uint)*(byte *)(param_1 + 0x32) & 1 << (uVar3 & 0xff)) == 0)) &&
       ((iVar2 = FUN_0217ef04(uVar3 & 0xff), iVar2 != 0 &&
        (iVar2 = FUN_0217ee90(uVar3 & 0xff,*(undefined4 *)(param_1 + 0x28),
                              *(undefined4 *)(param_1 + 0x2c)), iVar2 != 0)))) {
      *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) | (byte)(1 << (uVar3 & 0xff));
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 4);
  return;
}

