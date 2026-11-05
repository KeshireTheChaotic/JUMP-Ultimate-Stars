
/* WARNING: Removing unreachable block (ram,0x021c9c18) */
/* WARNING: Removing unreachable block (ram,0x021c9c38) */

void FUN_021c9b2c(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
                    /* JUS-TAG source_file_inferred="ALTextDS.cpp" */
  iVar4 = param_1[0xd];
  DAT_02093c08 = DAT_02093c08 + -1;
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  DAT_020a0dd0 = iVar4;
  if ((int *)param_1[0x5e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x5e] + 0xc))();
  }
  if ((int *)param_1[0x5f] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x5f] + 0xc))();
  }
  piVar2 = (int *)FUN_0201650c(0x3247434e,param_1[0x3f],param_1[0x40]);
  param_1[0x5e] = (int)piVar2;
  iVar4 = (**(code **)(*piVar2 + 100))();
  *(undefined2 *)(*(int *)(iVar4 + 0x10) + 2) = 0xffff;
  *(undefined1 *)(iVar4 + 0xf) = 0;
  (**(code **)(*(int *)param_1[0x5e] + 0x40))();
  (**(code **)(*(int *)param_1[0x5e] + 100))();
  FUN_02029dc4();
  iVar4 = FUN_02035f84(param_1[0x5e]);
  param_1[0x5f] = iVar4;
  uVar3 = (**(code **)(**(int **)(param_1[0x15] + 0x30) + 0x18))();
  if ((1 < uVar3) && (*(char *)((int)param_1 + 0x172) != '\0')) {
    *(undefined1 *)((int)param_1 + 0x172) = 0;
    (**(code **)(*param_1 + 0xa4))(param_1,1);
  }
  puVar1 = &DAT_020a16d0 + DAT_02093c08;
  DAT_02093c08 = DAT_02093c08 + 1;
  DAT_020a0dd0 = *puVar1;
  return;
}

