
void FUN_021b1760(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 local_118 [64];
  undefined4 uStack_18;
  
  iVar6 = *(int *)(param_2 + 4);
  iVar8 = 0;
  if ((*(char *)(iVar6 + 0x21) != '\0') &&
     (piVar1 = *(int **)(iVar6 + 0x1c), -1 < (int)((uint)*(byte *)((int)piVar1 + 0x29) << 0x18))) {
    uStack_18 = param_4;
    if (*(int *)(iVar6 + 0x40) != DAT_02093c24) {
      (**(code **)(*(int *)piVar1[0x14] + 0x50))();
      *(int *)(iVar6 + 0x40) = DAT_02093c24;
      *(undefined1 *)(iVar6 + 0x23) = 0;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar6 + 0x1c) + 0x50);
    puVar7 = (undefined4 *)*param_3;
    while (puVar7 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)*puVar7;
      iVar4 = FUN_021b1634(param_1,uVar2,param_2,puVar7 + -2,param_4);
      if (iVar4 != 0) {
        local_118[iVar8] = puVar7 + -2;
        iVar8 = iVar8 + 1;
        if ((*(char *)(iVar6 + 0x21) == '\0') ||
           ((int)((uint)*(byte *)((int)piVar1 + 0x29) << 0x18) < 0)) {
          param_2 = 0;
          break;
        }
      }
      puVar7 = puVar3;
    }
    if ((iVar8 != 0) && (param_2 != 0)) {
      (**(code **)(*piVar1 + 0x90))(piVar1,iVar6,local_118,iVar8);
      piVar5 = (int *)(**(code **)(**(int **)(iVar6 + 0x1c) + 0xec))();
      if (piVar1 != piVar5) {
        (**(code **)(*piVar5 + 0x90))(piVar5,iVar6,local_118,iVar8);
      }
      if (*(int *)(param_1 + 0x10) != 0) {
        uVar2 = FUN_021acab4(piVar5);
        (**(code **)(param_1 + 0x10))(uVar2,param_2,local_118,iVar8);
      }
    }
  }
  return;
}

