
void FUN_020604d0(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5,
                 undefined4 param_6)

{
  int local_24;
  int local_20;
  
  FUN_0205ed74(&local_24,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
               *(undefined4 *)(param_1 + 0xc),param_6);
  if ((param_5 & 0x10) == 0) {
    if ((param_5 & 0x20) != 0) {
      param_2 = param_2 - local_24;
    }
  }
  else {
    param_2 = param_2 - (local_24 + 1) / 2;
  }
  if ((param_5 & 2) == 0) {
    if ((param_5 & 4) != 0) {
      param_3 = param_3 - local_20;
    }
  }
  else {
    param_3 = param_3 - (local_20 + 1) / 2;
  }
  FUN_0206057c(param_1,param_2,param_3,local_24,param_4,param_5,param_6);
  return;
}

