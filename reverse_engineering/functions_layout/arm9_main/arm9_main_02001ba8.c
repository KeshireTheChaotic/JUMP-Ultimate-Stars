
int FUN_02001ba8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1;
  if (param_1 < 0) {
    iVar1 = param_2;
    DAT_020a06a0 = param_1;
  }
  return iVar1;
}

