
undefined4 FUN_021540ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = (int)DAT_020afedc;
  if (iVar3 == -1) {
    return 0xffffffff;
  }
  iVar1 = FUN_02071d1c(iVar3,param_1,param_3,param_4,param_4);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_02071d00(iVar3,param_1);
  return uVar2;
}

