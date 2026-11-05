
int FUN_0205d420(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0205c45c();
  if (iVar1 == 0) {
    return 0;
  }
  if (param_5 == 0) {
    return 0;
  }
  iVar2 = FUN_0205cc44(param_5,iVar1 + 0x20,param_2,param_3);
  if (iVar2 == 0) {
    return 0;
  }
  iVar3 = FUN_0205c3e4(param_1,iVar2,iVar1,0);
  if (iVar1 == iVar3) {
    DC_StoreRange(iVar2,iVar1);
    return iVar2;
  }
  return 0;
}

