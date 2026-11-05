
undefined4
FUN_0217d5b0(undefined4 param_1,undefined4 param_2,uint param_3,char *param_4,int param_5)

{
  char cVar1;
  int iVar2;
  undefined1 uStack_18;
  undefined1 local_17;
  ushort local_16;
  undefined4 local_14;
  
  if ((param_5 == 0) || (param_4 == (char *)0x0)) {
    return 0;
  }
  MIi_CpuClear32(0,&uStack_18,8);
  local_17 = 2;
  local_16 = (ushort)(param_3 >> 8) & 0xff | (ushort)((param_3 & 0xff) << 8);
  cVar1 = *param_4;
  local_14 = param_2;
  if (((cVar1 == -2) && (param_4[1] == -3)) || (cVar1 == '\\')) {
    iVar2 = FUN_02178448();
    if (*(int *)(iVar2 + 0x10) != 0) {
      iVar2 = FUN_02178448();
      FUN_0218d048(*(undefined4 *)(iVar2 + 0x10),param_4,param_5,&uStack_18);
    }
  }
  else {
    iVar2 = FUN_020024cc(param_4,&DAT_021a6710,6);
    if (iVar2 != 0) {
      if (cVar1 == -2) {
        return 0;
      }
      return 0;
    }
    FUN_0218c48c(param_4,param_5,&uStack_18);
  }
  return 1;
}

