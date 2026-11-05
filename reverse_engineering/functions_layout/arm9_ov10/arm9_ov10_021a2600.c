
int FUN_021a2600(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int local_1c;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  iVar1 = FUN_020698cc(param_4);
  if (iVar1 == 0) {
    iVar1 = -3;
  }
  else {
    iVar1 = thunk_FUN_02069c44(param_4);
    if (iVar1 == 3) {
      iVar1 = FUN_021a237c(param_1,param_2,param_3,param_4,&local_1c);
      if (iVar1 == 1) {
        iVar1 = thunk_FUN_02069c44(local_1c * 0xc + param_2);
        if (iVar1 == 2) {
          FUN_02051890(param_4,local_1c * 0xc + param_2);
          FUN_02071008(local_1c);
          if (param_5 != 0) {
            FUN_0207102c(local_1c);
            FUN_0207106c(local_1c,0,0,0,0,0,0);
          }
          thunk_FUN_0208c598();
          iVar1 = 0;
        }
        else {
          iVar1 = 1;
        }
      }
    }
    else {
      iVar1 = -3;
    }
  }
  return iVar1;
}

