
undefined4 FUN_02010990(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (**(code **)(*param_2 + 0x2c))(param_2,0,*(code **)(*param_2 + 0x2c),param_4,param_4);
  uVar3 = 0;
  while( true ) {
    if (DAT_020a0ccc <= uVar3) {
      return 0;
    }
    iVar2 = (*(code *)**(undefined4 **)(&DAT_0209443c)[uVar3])
                      ((undefined4 *)(&DAT_0209443c)[uVar3],uVar1);
    if (iVar2 != 0) break;
    uVar3 = uVar3 + 1;
  }
  uVar1 = (**(code **)(*(int *)(&DAT_0209443c)[uVar3] + 4))
                    ((int *)(&DAT_0209443c)[uVar3],param_1,param_2,0,1);
  return uVar1;
}

