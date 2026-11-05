
int FUN_0217fdc8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8,
                undefined4 param_9)

{
  int iVar1;
  
  if ((param_7 == 0) && (DAT_020a05c0 != 1)) {
    return 0;
  }
  iVar1 = FUN_0217583c(0x638);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 0x630) = param_8;
  *(undefined4 *)(iVar1 + 0x634) = param_9;
  *(undefined4 *)(iVar1 + 0x624) = 0;
  FUN_021815d0(iVar1 + 0x4c,param_1,param_2,param_3,param_4,param_7,0x217fed1,iVar1);
  FUN_0217f4cc(iVar1,param_5,param_6,param_7,0x217fe5d,iVar1);
  return iVar1;
}

