
void FUN_02069e14(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  do {
    iVar1 = FUN_0205587c(4,1);
  } while (iVar1 == 0);
  FUN_020558a4(4,&LAB_02069d74_1);
  DC_StoreRange(param_3,param_2);
  while (iVar1 = FUN_02069ebc(2,param_1,param_2,param_3), iVar1 != 1) {
    SVC_WaitByLoop(0x40000);
  }
  return;
}

