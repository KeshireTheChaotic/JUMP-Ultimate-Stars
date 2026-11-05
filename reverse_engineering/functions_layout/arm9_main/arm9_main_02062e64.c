
void FUN_02062e64(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_020557c8(0xd,param_1,0);
  while (iVar1 != 0) {
    SVC_WaitByLoop(1);
    iVar1 = FUN_020557c8(0xd,param_1,0);
  }
  return;
}

