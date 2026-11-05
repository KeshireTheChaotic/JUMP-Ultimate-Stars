
/* JUS-SCENE jus_Scene32_CreateImpl [scene-map] called by scene 32 create wrapper 0206fbe8 while
   overlay 5 is resident */

int jus_Scene32_CreateImpl(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  piVar4 = (int *)jus_AllocDebug(0x44,PTR_s_Database_cpp_02166ee0,PTR_s_Database_Add_02166ee4,0x43);
  FUN_020517fc(piVar4,0,0x44);
  piVar4[6] = 0;
  piVar4[0xd] = (int)param_1 >> 0x10 & 0xffff;
  piVar4[0xc] = -1;
  iVar5 = FUN_02070cdc();
  iVar6 = FUN_02071f08();
  if (param_1 == 0) {
    FUN_02070cdc(0);
    FUN_020725a0();
    bVar1 = *(byte *)(iVar6 + 0x35);
  }
  else {
    bVar1 = *(byte *)(iVar5 + 0x35);
    iVar6 = iVar5;
  }
  piVar4[0xf] = (uint)bVar1;
  FUN_0207265c(iVar5,piVar4[0xf] & 0xff,0);
  FUN_0207260c(iVar5,iVar6 + 0x14,0);
  iVar6 = FUN_02026f94();
  piVar4[8] = iVar6;
  uStack_18 = 0x80000;
  (**(code **)(**(int **)(iVar6 + 4) + 0xa0))(*(int **)(iVar6 + 4),&uStack_18);
  FUN_02028384(*(undefined4 *)(piVar4[8] + 4),PTR_FUN_02166ee8);
  (**(code **)(**(int **)(piVar4[8] + 4) + 0x24))(*(int **)(piVar4[8] + 4),piVar4);
  iVar6 = FUN_020310f4();
  puVar2 = PTR_DAT_02166eec;
  piVar4[7] = iVar6;
  puVar3 = PTR_DAT_02166ef4;
  uVar7 = *(undefined4 *)PTR_DAT_02166ef0;
  iVar5 = *(int *)puVar2 + -1;
  *(int *)puVar2 = iVar5;
  *(undefined4 *)(puVar3 + iVar5 * 4) = uVar7;
  FUN_020314a0(*(undefined4 *)(iVar6 + 4));
  FUN_02043264(1);
  if (*piVar4 == 0) {
    iVar6 = func_0x021bcf1c(0x18,0xffffffff,1,0);
    *piVar4 = iVar6;
  }
  param_1 = param_1 & 0xffff;
  if (param_1 == 1) {
    piVar4[10] = 1;
    FUN_02167228(piVar4);
  }
  else if (param_1 == 2) {
    piVar4[10] = 4;
    piVar4[0xb] = 2;
    piVar4[0xc] = 2;
    FUN_02167470(piVar4);
  }
  else if (param_1 == 3) {
    piVar4[10] = 0;
    piVar4[0xe] = 3;
    FUN_02167380(piVar4);
  }
  else {
    FUN_02167228(piVar4);
  }
  FUN_020734e0(6);
  FUN_0207361c(6,0);
  FUN_02073ebc(2,1);
  return piVar4[7];
}

