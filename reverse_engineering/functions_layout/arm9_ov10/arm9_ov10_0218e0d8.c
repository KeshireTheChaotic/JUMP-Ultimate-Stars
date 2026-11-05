
int FUN_0218e0d8(byte *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  
  *param_2 = param_1;
  iVar2 = 0;
  while (uVar1 = *param_1 - 0x30 & 0xff, uVar1 < 10) {
    iVar2 = uVar1 + iVar2 * 10;
    param_1 = param_1 + 1;
    *param_2 = param_1;
  }
  return iVar2;
}

