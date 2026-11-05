
int * FUN_02035db0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  uVar1 = (**(code **)(*param_1 + 0x2c))(param_1,0);
  for (iVar5 = 0; iVar5 < DAT_020a0cfc; iVar5 = iVar5 + 1) {
    iVar2 = (*(code *)**(undefined4 **)(&DAT_020a19e4)[iVar5])
                      ((undefined4 *)(&DAT_020a19e4)[iVar5],uVar1);
    if (iVar2 != 0) {
      piVar3 = (int *)(**(code **)(*(int *)(&DAT_020a19e4)[iVar5] + 4))
                                ((int *)(&DAT_020a19e4)[iVar5],param_1);
      return piVar3;
    }
  }
  piVar3 = (int *)FUN_02016628(param_1,0);
  if (piVar3 == (int *)0x0) {
    return DAT_020a1054;
  }
  piVar4 = (int *)(**(code **)(*DAT_020a0dfc + 8))();
  (**(code **)(*piVar4 + 0x28))(piVar4,piVar3);
  (**(code **)(*piVar3 + 0xc))();
  return piVar4;
}

