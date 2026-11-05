
undefined4 FUN_02058070(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_020581a0();
  if (iVar1 == 0) {
    return 8;
  }
  FUN_02051890(param_1,iVar1,param_2);
  DC_StoreRange(iVar1,param_2);
  iVar2 = FUN_020557c8(10,iVar1,0);
  FUN_02053c84(&DAT_020acaec,iVar1,1);
  if (iVar2 < 0) {
    uVar3 = 8;
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}

