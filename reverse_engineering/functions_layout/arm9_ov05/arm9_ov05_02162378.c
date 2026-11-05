
undefined4 FUN_02162378(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    if (4 < iVar2) {
      return 0;
    }
    for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
      FUN_021653ac(param_1,param_2,iVar2,iVar3);
      iVar1 = FUN_02164234();
      if ((iVar1 == 0) &&
         (iVar1 = FUN_0216458c(param_1,param_2,iVar2,iVar3,param_3,param_4), iVar1 != 0)) {
        return 1;
      }
    }
    iVar2 = iVar2 + 1;
  } while( true );
}

