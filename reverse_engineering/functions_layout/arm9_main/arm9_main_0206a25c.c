
bool FUN_0206a25c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint local_18;
  uint local_14 [2];
  
  iVar1 = FUN_0206a23c();
  if (iVar1 == 0) {
    return false;
  }
  FUN_02051890(param_1,&local_18,4);
  FUN_02051890(param_2,local_14,4);
  if ((local_18 | local_14[0]) == 0xfffffffe) {
    return false;
  }
  return (local_18 & ~local_14[0]) != 0;
}

