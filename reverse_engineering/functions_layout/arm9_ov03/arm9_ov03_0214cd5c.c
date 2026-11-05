
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME JArena::JArena_AddJob [source-string] __FILE__="JArena.cpp" __FUNCTION__="JArena_AddJob"
   lines=[338] passed to 1 source-location call(s) */

int JArena::JArena_AddJob
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  piVar1 = (int *)thunk_FUN_0201a228(0xb0,s_JArena_cpp_0215dae8,s_JArena_AddJob_0215daa0,0x152);
  FUN_020517fc(piVar1,0,0xb0);
  iVar2 = FUN_020310f4();
  *piVar1 = iVar2;
  *(char *)(piVar1 + 7) = (char)param_1;
  *(char *)((int)piVar1 + 0x1d) = (char)((uint)param_1 >> 8);
  iVar2 = *piVar1;
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar2 + 4));
  if ((byte)((char)piVar1[7] - 5U) < 4) {
    FUN_0207367c(8);
  }
  if (-1 < *(int *)(&DAT_0215d334 + (uint)*(byte *)(piVar1 + 7) * 8)) {
    FUN_020734e0();
    FUN_0207361c(*(undefined4 *)(&DAT_0215d338 + (uint)*(byte *)(piVar1 + 7) * 8),0);
  }
  iVar2 = FUN_02020d90();
  uStack_10 = 0x80000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&uStack_10);
  FUN_02028384(*(undefined4 *)(iVar2 + 4),FUN_0214cff8);
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),piVar1);
  piVar1[1] = iVar2;
  piVar1[5] = 0;
  if ((DAT_020b0b90 & 0x40) != 0) {
    piVar1[6] = piVar1[6] | 1;
  }
  iVar2 = FUN_0203b404();
  FUN_0214cf8c(*(undefined4 *)(iVar2 + 0x88));
  iVar2 = func_0x021caa0c(s_font_jskfont_aft_0215daf4,0,0);
  piVar1[3] = iVar2;
  FUN_0214cfc8();
  iVar2 = FUN_020101f4(s_JArena_JArena_aar_0215db08,0);
  piVar1[4] = iVar2;
  FUN_0214d1dc(piVar1);
  _DAT_021d514c = FUN_0214d1b0;
  func_0x021b7260(1,0x30078);
  func_0x021b7260(2,0x30078);
  func_0x021b7260(8,0x30078);
  func_0x021b7260(4,0x30078);
  func_0x021b7260(0x10000,0x30078);
  func_0x021b7260(0x10,0xffffffff);
  func_0x021b7260(0x20,0x10078);
  func_0x021b7260(0x10000,0x30078);
  func_0x021b7260(0x20000,0xffffffff);
  return *piVar1;
}

