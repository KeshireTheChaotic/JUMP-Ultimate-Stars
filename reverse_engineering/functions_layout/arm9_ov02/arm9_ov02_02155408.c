
/* JUS-GAME JGalaxyWarp::JGalaxyWarp_CreatePlanetIn [source-string] __FILE__="JGalaxyWarp.cpp"
   __FUNCTION__="JGalaxyWarp_CreatePlanetIn" lines=[98] passed to 1 source-location call(s) */

undefined4 *
JGalaxyWarp::JGalaxyWarp_CreatePlanetIn
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  iVar1 = thunk_FUN_0201a228(0x20,s_JGalaxyWarp_cpp_0215c3d4,s_JGalaxyWarp_CreatePlanetIn_0215c3b8,
                             0x62);
  puVar2 = (undefined4 *)0x0;
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_021553f4();
  }
  FUN_020517fc(puVar2,0,0x20);
  *puVar2 = param_1;
  FUN_0215559c();
  iVar1 = FUN_02026f94();
  (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),puVar2);
  FUN_02028384(*(undefined4 *)(iVar1 + 4),FUN_021558bc);
  FUN_020282f4(*(undefined4 *)(iVar1 + 4));
  iVar3 = FUN_0203b414(3);
  uVar4 = FUN_02156d08(s_jgalaxy_warp00_0215c3e4,*(undefined4 *)(iVar3 + 0x88));
  local_24 = 0x60000;
  local_28 = 0x80000;
  FUN_0214d4c0(uVar4,&local_28,&local_24);
  uStack_1c = 0x60000;
  uStack_20 = 0x80000;
  FUN_02155884(uVar4,&uStack_20,&uStack_1c);
  uStack_18 = 0x28;
  FUN_02151858(uVar4,&uStack_18);
  puVar2[3] = uVar4;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[1] = iVar1;
  *(undefined1 *)(puVar2 + 7) = 2;
  return puVar2;
}

