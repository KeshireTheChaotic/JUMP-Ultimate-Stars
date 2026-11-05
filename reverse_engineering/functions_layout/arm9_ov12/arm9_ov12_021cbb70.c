
int FUN_021cbb70(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_021cab0c(*(int *)(param_1 + 0x54) + (param_2 * -0x72594cbd >> 0x10 & 0xff) * 4,
                       param_2 & 0xffff,param_1,param_4,param_4);
  if (iVar1 == 0) {
    return -1;
  }
  FUN_021cb590(param_1,iVar1);
  return (iVar1 - *(int *)(param_1 + 0x40)) * 0x2000 >> 0x10;
}

