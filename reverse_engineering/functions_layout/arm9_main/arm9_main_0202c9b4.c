
undefined1 * FUN_0202c9b4(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(*param_1 + 0xa0))();
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_1 + 0x2c))(param_1,param_2);
    FUN_020380d0(&DAT_020a9aa4,0x50,uVar2);
  }
  else {
    DAT_020a9aa4 = 0x24;
    uVar2 = (**(code **)(*param_1 + 0x2c))(param_1,param_2);
    uVar3 = (**(code **)(*param_1 + 0xa0))();
    FUN_020381e4(&DAT_020a9aa5,0x4f,uVar2,uVar3,0);
  }
  return &DAT_020a9aa4;
}

