
undefined4 FUN_02029730(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar1 = (**(code **)(*param_1 + 0x2c))(param_1,0,*(code **)(*param_1 + 0x2c),param_4,param_4);
  iVar2 = (**(code **)(*param_1 + 0x28))();
  uVar5 = 0;
  while( true ) {
    if (DAT_020a1034 <= uVar5) {
      return 0;
    }
    iVar3 = (*(code *)**(undefined4 **)(&DAT_020a1690)[uVar5])
                      ((undefined4 *)(&DAT_020a1690)[uVar5],param_2 + iVar1 + iVar2);
    if (iVar3 != 0) break;
    uVar5 = uVar5 + 1;
  }
  iVar1 = (**(code **)(*param_1 + 0x28))();
  (**(code **)(*param_1 + 0x24))(param_1,iVar1 + param_2);
  uVar4 = (**(code **)(*(int *)(&DAT_020a1690)[uVar5] + 4))((int *)(&DAT_020a1690)[uVar5],param_1);
  (**(code **)(*param_1 + 0x24))(param_1,iVar1);
  return uVar4;
}

