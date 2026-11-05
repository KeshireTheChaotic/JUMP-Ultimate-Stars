
int FUN_0205ac6c(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_02057f40(2,7,9);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_2 == 0) {
    return 6;
  }
  if (0x70 < param_3) {
    return 6;
  }
  MIi_CpuCopy16(param_2,&DAT_020ad580,param_3);
  DC_StoreRange(&DAT_020ad580,param_3);
  FUN_02058214(0x18,param_1);
  iVar1 = FUN_020580e8(0x18,5,&DAT_020ad580,param_3);
  if (iVar1 == 0) {
    iVar1 = 2;
  }
  return iVar1;
}

