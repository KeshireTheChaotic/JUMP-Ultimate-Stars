
void FUN_02060420(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,uint param_7,undefined4 param_8)

{
  int iVar1;
  
  if ((param_7 & 0x100) == 0) {
    if ((param_7 & 0x80) != 0) {
      iVar1 = FUN_0205ee0c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc),param_8);
      param_3 = param_3 + ((param_5 + 1) / 2 - (iVar1 + 1) / 2);
    }
  }
  else {
    iVar1 = FUN_0205ee0c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc),param_8);
    param_3 = param_3 + (param_5 - iVar1);
  }
  FUN_0206057c(param_1,param_2,param_3,param_4,param_6,param_7,param_8);
  return;
}

