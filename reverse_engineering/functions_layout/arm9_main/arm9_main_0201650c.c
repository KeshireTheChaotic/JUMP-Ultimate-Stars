
undefined4 FUN_0201650c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  while( true ) {
    if (DAT_020a0d5c <= uVar3) {
      return 0;
    }
    iVar1 = (*(code *)**(undefined4 **)(&DAT_020a1b84)[uVar3])
                      ((undefined4 *)(&DAT_020a1b84)[uVar3],param_1);
    if (iVar1 != 0) break;
    uVar3 = uVar3 + 1;
  }
  uVar2 = (**(code **)(*(int *)(&DAT_020a1b84)[uVar3] + 4))
                    ((int *)(&DAT_020a1b84)[uVar3],param_1,param_2,param_3,0);
  return uVar2;
}

