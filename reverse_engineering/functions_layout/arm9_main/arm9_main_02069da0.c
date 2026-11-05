
undefined4 FUN_02069da0(void)

{
  int iVar1;
  
  do {
    iVar1 = FUN_0205587c(4,1);
  } while (iVar1 == 0);
  FUN_020558a4(4,0x2069d75);
  while (iVar1 = FUN_02069ebc(7,0,0,0), iVar1 != 1) {
    SVC_WaitByLoop(0x40000);
  }
  return 1;
}

