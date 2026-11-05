
undefined4 FUN_0217fa50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  ushort uVar4;
  
  iVar1 = FUN_02004c2c(param_2,&DAT_021a4ca0);
  if (iVar1 == 0) {
    uVar2 = FUN_0217f760(param_1);
    return uVar2;
  }
  pbVar3 = (byte *)FUN_0217faa8(param_1,param_2,0);
  if (pbVar3 != (byte *)0x0) {
    if (*pbVar3 < 0x80) {
      uVar4 = *(ushort *)(&DAT_0208d520 + (uint)*pbVar3 * 2) & 8;
    }
    else {
      uVar4 = 0;
    }
    if (uVar4 != 0) {
      uVar2 = FUN_02005f14();
      return uVar2;
    }
  }
  return param_3;
}

