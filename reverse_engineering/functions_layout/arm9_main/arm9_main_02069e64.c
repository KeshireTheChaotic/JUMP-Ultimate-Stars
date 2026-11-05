
undefined4 FUN_02069e64(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  DC_InvalidateRange(param_3);
  do {
    iVar1 = FUN_0205587c(4,1);
  } while (iVar1 == 0);
  FUN_020558a4(4,0x2069d75);
  while (iVar1 = FUN_02069ebc(1,param_1,param_2 & 0xffff,param_3), iVar1 != 1) {
    SVC_WaitByLoop(0x40000);
  }
  DC_InvalidateRange(param_3,param_2);
  return 1;
}

