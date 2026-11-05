
void FUN_02061910(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int local_20;
  int local_1c [2];
  
  FUN_0205529c(0x996a00);
  iVar1 = FUN_020615ec();
  if (iVar1 != 1) {
    FUN_02061864(&local_20,local_1c);
    if (local_20 != 0) {
      FUN_02061980(0,0);
    }
    if (local_1c[0] != 0) {
      FUN_02061980(1,0);
    }
    iVar1 = FUN_02061600(1);
    while (iVar1 == 0) {
      FUN_0205529c(0x996a00);
      iVar1 = FUN_02061600(1);
    }
  }
  FUN_02061b28(0xe,param_1,param_2);
  return;
}

