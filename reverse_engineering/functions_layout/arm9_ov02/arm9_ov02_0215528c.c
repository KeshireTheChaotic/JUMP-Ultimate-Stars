
/* JUS-GAME JGalaxyWarp::JGalaxyWarp_Create [source-string] __FILE__="JGalaxyWarp.cpp"
   __FUNCTION__="JGalaxyWarp_Create" lines=[71] passed to 1 source-location call(s) */

int * JGalaxyWarp::JGalaxyWarp_Create
                (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined *puVar5;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  iVar1 = jus_AllocDebug(0x20,s_JGalaxyWarp_cpp_0215c3d4,s_JGalaxyWarp_Create_0215c340,0x47);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_021553f4();
  }
  FUN_020517fc(piVar2,0,0x20);
  *piVar2 = param_1;
  FUN_0215559c();
  iVar1 = FUN_02026f94();
  (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),piVar2);
  FUN_020282f4(*(undefined4 *)(iVar1 + 4));
  piVar2[1] = iVar1;
  iVar3 = FUN_0203b414(3);
  iVar3 = FUN_02156d08(s_jgalaxy_warp00_0215c3e4,*(undefined4 *)(iVar3 + 0x88));
  local_24 = 0x60000;
  local_28 = 0x80000;
  FUN_0214d4c0(iVar3,&local_28,&local_24);
  local_1c = 0x60000;
  local_20 = 0x80000;
  FUN_02155884(iVar3,&local_20,&local_1c);
  local_18 = 0x28;
  FUN_02151858(iVar3,&local_18);
  piVar2[3] = iVar3;
  piVar4 = *(int **)(*(int *)(*(int *)(iVar3 + 4) + 100) + 0x20);
  if (piVar4[0xe] == 0) {
    (**(code **)(*piVar4 + 0x14))();
  }
  puVar5 = (&PTR_s_jgalaxy_warp00_ncl_0215c3a4)[*(byte *)(*piVar2 + 0x51)];
  iVar3 = FUN_02034db8(piVar4[0xe]);
  FUN_0201710c(*(undefined4 *)(iVar3 + 4),puVar5);
  piVar2[4] = 0x28;
  piVar2[5] = 0;
  *(undefined1 *)(piVar2 + 7) = 0;
  FUN_02028384(*(undefined4 *)(iVar1 + 4),FUN_021558bc);
  return piVar2;
}

