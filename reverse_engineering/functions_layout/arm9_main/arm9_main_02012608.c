
void FUN_02012608(int *param_1,undefined1 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  uVar1 = (**(code **)(*DAT_020a101c + 0x2c))();
  *param_2 = 0;
  for (; uVar7 = (**(code **)(*param_1 + 0x34))(), uVar1 < uVar7; uVar1 = uVar1 + 1) {
    iVar2 = FUN_02004b04(param_2);
    piVar3 = (int *)(**(code **)(*param_1 + 0x38))(param_1,uVar1);
    piVar4 = (int *)(**(code **)(*param_1 + 0x38))(param_1,uVar1);
    uVar5 = (**(code **)(*piVar4 + 0x1c))(piVar4,param_1);
    (**(code **)(*piVar3 + 0x8c))(piVar3,param_2 + iVar2,param_3 - iVar2,uVar5,param_1);
    iVar6 = (**(code **)(*param_1 + 0x34))();
    if (uVar1 != iVar6 - 1U) {
      FUN_02004bf4(param_2 + iVar2,&DAT_0209d920,param_3 - iVar2);
    }
  }
  return;
}

