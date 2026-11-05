
int * FUN_0204583c(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
                    /* JUS-TAG strings=["3DVRamTable"] */
  param_1[6] = param_3;
  iVar1 = FUN_0200d338(param_2,param_3,param_3,param_4,param_4);
  param_1[2] = iVar1;
  iVar1 = FUN_0201a228(iVar1 << 2);
  param_1[4] = iVar1;
  FUN_0201ac08(iVar1,s_3DVRamTable_0209da68);
  FUN_02002488(param_1[4],0,param_1[2] << 2);
  *(ushort *)(param_1[4] + 2) = *(ushort *)(param_1[4] + 2) | 0x8000;
  *(undefined2 *)param_1[4] = 0x7fff;
  *(ushort *)(param_1[4] + 2) = *(ushort *)(param_1[4] + 2) & 0x8000 | (ushort)param_1[2] & 0x7fff;
  for (uVar2 = 0; uVar2 < (uint)param_1[2]; uVar2 = uVar2 + 1) {
    iVar1 = param_1[4] + uVar2 * 4;
    *(ushort *)(iVar1 + 2) = *(ushort *)(iVar1 + 2) | 0x8000;
  }
  param_1[5] = param_1[4];
  param_1[3] = param_1[2];
  puVar3 = (undefined4 *)FUN_0201a228(0x14);
  if (puVar3 != (undefined4 *)0x0) {
    FUN_0203a880();
    *puVar3 = &jus_Class_02094130::vftable;
  }
  *param_1 = (int)puVar3;
  puVar3 = (undefined4 *)FUN_0201a228(0x14);
  if (puVar3 != (undefined4 *)0x0) {
    FUN_0203a880();
    *puVar3 = &jus_Class_02094130::vftable;
  }
  param_1[1] = (int)puVar3;
  *(undefined4 **)(*param_1 + 8) = puVar3;
  *(undefined4 *)(*param_1 + 4) = 0;
  *(undefined4 *)(param_1[1] + 8) = 0;
  *(int *)(param_1[1] + 4) = *param_1;
  return param_1;
}

