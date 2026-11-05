
int * FUN_02033524(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  undefined1 auStack_40 [32];
  
  if (DAT_020a1288 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x28))();
    (**(code **)(*param_1 + 0x14))(param_1,auStack_40,0x20);
    uVar1 = DAT_020a1288;
    for (uVar9 = 0; uVar9 < uVar1; uVar9 = uVar9 + 1) {
      puVar3 = *(undefined4 **)(DAT_020a1284 + uVar9 * 4);
      iVar4 = (**(code **)*puVar3)(puVar3,auStack_40);
      if (iVar4 != 0) {
        iVar5 = jus_AllocDebug(0x30);
        piVar6 = (int *)0x0;
        if (iVar5 != 0) {
          piVar6 = (int *)ALStreamImp::ALStreamImp(iVar5,iVar4);
        }
        uVar2 = (**(code **)(*param_1 + 0x1c))();
        iVar5 = jus_AllocDebug(uVar2);
        MIi_CpuCopy32(auStack_40,iVar5,0x20);
        iVar4 = (**(code **)(*param_1 + 0x1c))();
        (**(code **)(*param_1 + 0x14))(param_1,iVar5 + 0x20,iVar4 + -0x20);
        iVar4 = DAT_020a1284;
        uVar2 = (**(code **)(*piVar6 + 0x2c))(piVar6,0);
        uVar7 = (**(code **)(*param_1 + 0x1c))();
        piVar8 = *(int **)(iVar4 + uVar9 * 4);
        (**(code **)(*piVar8 + 4))(piVar8,uVar2,iVar5,uVar7);
        if (param_1[4] != 0) {
          (**(code **)(*piVar6 + 0x34))();
        }
        (**(code **)(*param_1 + 0xc))();
        iVar4 = FUN_0201a9ec(iVar5);
        if (iVar4 == 0) {
          FUN_0201a958(iVar5,1);
        }
        return piVar6;
      }
    }
    (**(code **)(*param_1 + 0x24))(param_1,uVar2);
  }
  return param_1;
}

