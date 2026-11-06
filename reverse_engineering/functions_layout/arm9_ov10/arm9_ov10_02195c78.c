
undefined4
FUN_02195c78(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *local_18;
  
  local_18 = (byte *)*param_2 + 1;
  uVar1 = (uint)*(byte *)*param_2;
  iVar2 = FUN_021960d8(&local_18);
  if ((iVar2 < 0) || (2000 < iVar2)) {
    return 1;
  }
  uVar4 = uVar1 & 0x1f;
  if (uVar4 < 0x19) {
    uVar3 = (*(code *)((int)&switchD_02195cc8::switchdataD_02195cca +
                      (int)(short)(&switchD_02195cc8::switchdataD_02195cca)[uVar4]))();
    return uVar3;
  }
  if (uVar1 == 0xa0) {
    pbVar5 = local_18 + iVar2;
    while (local_18 < pbVar5) {
      iVar2 = FUN_02195c78(param_1,&local_18,param_3 + 1,0,param_5,param_2,param_4);
      if (iVar2 != 0) {
        return 1;
      }
    }
  }
  else {
    local_18 = local_18 + iVar2;
  }
  *param_2 = local_18;
  return 0;
}

