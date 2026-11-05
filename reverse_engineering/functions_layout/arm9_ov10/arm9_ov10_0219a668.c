
void FUN_0219a668(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_0219caf4();
  iVar2 = FUN_0219b580(uVar1,param_2);
  if (iVar2 == 0) {
    return;
  }
  uVar1 = FUN_02070cdc(param_1);
  iVar3 = thunk_FUN_020024cc(iVar2,uVar1,0x14);
  if (iVar3 == 0) {
    return;
  }
  FUN_020725e0(uVar1,iVar2,0);
  ALObjectImp::PostSyncMessage(param_1,param_3);
  return;
}

