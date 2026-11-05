
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME JGalaxy::JGalaxy_Add [source-string] __FILE__="JGalaxy.cpp" __FUNCTION__="JGalaxy_Add"
   lines=[221] passed to 1 source-location call(s) */

int JGalaxy::JGalaxy_Add
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 local_18;
  
  local_18 = param_4;
  piVar3 = (int *)jus_AllocDebug(0x5c,s_JGalaxy_cpp_0215be4c,s_JGalaxy_Add_0215bbf0,0xdd);
  FUN_020517fc(piVar3,0,0x5c);
  iVar4 = FUN_02026f94();
  piVar3[1] = iVar4;
  local_18 = 0x80000;
  (**(code **)(**(int **)(iVar4 + 4) + 0xa0))(*(int **)(iVar4 + 4),&local_18);
  FUN_02028384(*(undefined4 *)(piVar3[1] + 4),FUN_0214d034);
  (**(code **)(**(int **)(piVar3[1] + 4) + 0x24))(*(int **)(piVar3[1] + 4),piVar3);
  iVar4 = FUN_020310f4();
  *piVar3 = iVar4;
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar4 + 4));
  *(char *)((int)piVar3 + 0x56) = (char)param_1;
  *(char *)((int)piVar3 + 0x59) = (char)((uint)param_1 >> 8);
  *(undefined1 *)((int)piVar3 + 0x55) = 0xff;
  iVar4 = 0;
  do {
    iVar5 = FUN_020101f4((&DAT_0215bd48)[iVar4],0);
    iVar7 = iVar4 + 1;
    piVar3[iVar4 + 3] = iVar5;
    iVar4 = iVar7;
  } while (iVar7 < 7);
  piVar6 = (int *)FUN_02033410(s_jgalaxy_jgalaxy_bin_0215be58,0,0);
  if (piVar6[7] == 0) {
    (**(code **)(*piVar6 + 0x10))();
  }
  iVar4 = piVar6[7];
  piVar3[10] = iVar4;
  piVar6 = *(int **)(iVar4 + 4);
  iVar4 = (**(code **)(*piVar6 + 0x2c))(piVar6,0);
  piVar3[0xb] = iVar4;
  iVar4 = (**(code **)(**(int **)(piVar3[10] + 4) + 0x2c))
                    (*(int **)(piVar3[10] + 4),*(undefined4 *)(piVar3[0xb] + 8));
  piVar3[0xc] = iVar4;
  iVar4 = (**(code **)(**(int **)(piVar3[10] + 4) + 0x2c))
                    (*(int **)(piVar3[10] + 4),*(undefined4 *)(piVar3[0xb] + 0xc));
  piVar3[0xd] = iVar4;
  iVar4 = (**(code **)(**(int **)(piVar3[10] + 4) + 0x2c))
                    (*(int **)(piVar3[10] + 4),*(undefined4 *)(piVar3[0xb] + 0x14));
  piVar3[0xf] = iVar4;
  iVar4 = (**(code **)(**(int **)(piVar3[10] + 4) + 0x2c))
                    (*(int **)(piVar3[10] + 4),*(undefined4 *)(piVar3[0xb] + 0x10));
  piVar3[0xe] = iVar4;
  iVar4 = MissionData::MissionData_Create(0);
  piVar3[0x10] = iVar4;
  iVar4 = MissionData::MissionData_Create(1);
  piVar3[0x11] = iVar4;
  iVar4 = DAT_020b4114;
  piVar3[0x13] = DAT_020b4114;
  bVar1 = *(byte *)(iVar4 * 0x88 + piVar3[0xf] + 10);
  *(byte *)((int)piVar3 + 0x53) = bVar1;
  bVar1 = *(byte *)(piVar3[0xe] + (uint)bVar1 * 0x40 + 0x2c);
  *(byte *)((int)piVar3 + 0x52) = bVar1;
  uVar2 = *(undefined1 *)((uint)bVar1 * 0x48 + piVar3[0xd] + 0x42);
  *(undefined1 *)((int)piVar3 + 0x51) = uVar2;
  *(undefined1 *)(piVar3 + 0x14) = uVar2;
  FUN_0214d394(piVar3);
  _DAT_021d514c = &LAB_0214d524;
  func_0x021b7260(1,0x30078);
  func_0x021b7260(2,0x30078);
  func_0x021b7260(8,0x30078);
  func_0x021b7260(4,0x30078);
  func_0x021b7260(0x10000,0x30078);
  (*(code *)(&PTR_FUN_0215bcf4)[*(byte *)((int)piVar3 + 0x56)])(piVar3);
  iVar4 = (*(code *)(&PTR_JGalaxyPlanet_Create_0215bd10)[*(byte *)((int)piVar3 + 0x56)])(piVar3);
  piVar3[2] = iVar4;
  (*(code *)(&PTR_FUN_0215bd80)[*(byte *)((int)piVar3 + 0x56)])();
  func_0x021b65bc();
  FUN_02073ebc(2,1);
  *(undefined1 *)(piVar3 + 0x15) = 1;
  return *piVar3;
}

