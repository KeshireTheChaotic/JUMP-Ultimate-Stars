
undefined4 FUN_021649cc(undefined4 param_1,uint param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  do {
    if (param_3 <= iVar3) {
      return 0;
    }
    uVar1 = FUN_02165398(param_1,iVar3);
    for (iVar4 = 0; iVar4 < 5; iVar4 = iVar4 + 1) {
      for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
        iVar2 = FUN_021653ac(param_1,iVar3,iVar4,iVar5,param_4);
        if (param_2 == *(byte *)(iVar2 + 1)) {
          return uVar1;
        }
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
}

