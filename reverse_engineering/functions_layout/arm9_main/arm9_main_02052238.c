
void FUN_02052238(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_02052108();
  if (iVar1 < 1) {
    return;
  }
  do {
    SVC_WaitByLoop(0x400);
    iVar1 = FUN_02052108(param_1,param_2,param_3,param_4);
  } while (0 < iVar1);
  return;
}

