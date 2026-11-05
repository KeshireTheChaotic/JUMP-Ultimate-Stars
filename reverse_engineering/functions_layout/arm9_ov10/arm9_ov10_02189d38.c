
undefined4 FUN_02189d38(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = 1;
  uVar1 = (uint)*param_1;
  while (((uVar3 = uVar1 & 1 ^ uVar3 ^ (uVar2 ^ param_1[uVar2 - 1]) & 1 ^ (uint)(uVar1 < 0x4f) ^
                   (uint)(param_1[uVar2 - 1] < uVar1), uVar3 == 0 || ((param_1[uVar2] & 1) != 0)) &&
         ((uVar3 != 0 || ((param_1[uVar2] & 1) != 1))))) {
    uVar2 = uVar2 + 1;
    if (0x1f < (int)uVar2) {
      return 1;
    }
  }
  return 0;
}

