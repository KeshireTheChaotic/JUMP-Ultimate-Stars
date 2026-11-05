
void FUN_02062cc4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_020557c8(0xe,param_1,0);
  while (iVar1 != 0) {
    SVC_WaitByLoop(param_2);
    iVar1 = FUN_020557c8(0xe,param_1,0);
  }
  return;
}

