
void FUN_0202f054(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5
                 )

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x58))(param_1,param_5);
  if (piVar1 == (int *)0x0) {
    return;
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x5c))(param_1,param_5);
  iVar3 = (**(code **)(*piVar2 + 0x28))();
  if ((iVar3 == 0 || piVar2 == param_5) ||
     ((iVar3 = (**(code **)(*param_5 + 0x30))(), iVar3 != 0 && ((int *)param_5[7] == piVar2)))) {
    uVar4 = (**(code **)(*piVar1 + 0x80))();
    FUN_02004b94(param_2,uVar4,param_3);
    return;
  }
  FUN_02038274(param_2,param_3,piVar2[0x15]);
  FUN_02004bf4(param_2,&DAT_0209d9c8,param_3);
  uVar4 = (**(code **)(*piVar1 + 0x80))();
  FUN_02004bf4(param_2,uVar4,param_3);
  return;
}

