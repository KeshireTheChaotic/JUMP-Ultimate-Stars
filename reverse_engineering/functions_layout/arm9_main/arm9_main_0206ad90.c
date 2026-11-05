
/* JUS-GAME CommonPaletteAnime::CommonPaletteAnime_Create [source-string]
   __FILE__="CommonPaletteAnime.cpp" __FUNCTION__="CommonPaletteAnime_Create" lines=[106, 126]
   passed to 2 source-location call(s) */

int * CommonPaletteAnime::CommonPaletteAnime_Create
                (int param_1,int param_2,int param_3,int param_4,byte param_5)

{
  int *piVar1;
  int iVar2;
  int local_20;
  int iStack_1c;
  
                    /* JUS-TAG strings=["CommonPaletteAnime.cpp","CommonPaletteAnime_Create"] */
  iStack_1c = param_4;
  piVar1 = (int *)jus_AllocDebug(0x20,s_CommonPaletteAnime_cpp_0209de9c,
                                 s_CommonPaletteAnime_Create_0209de30,0x6a);
  FUN_020517fc(piVar1,0,0x20);
  piVar1[1] = param_1;
  *(char *)(piVar1 + 3) = (char)param_4;
  *(short *)((int)piVar1 + 0xe) = (short)param_2;
  *(char *)(piVar1 + 4) = (char)param_3;
  iVar2 = FUN_02026f94();
  *piVar1 = iVar2;
  local_20 = (uint)param_5 << 0xc;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_20);
  (**(code **)(**(int **)(*piVar1 + 4) + 0x24))(*(int **)(*piVar1 + 4),piVar1);
  FUN_02028384(*(undefined4 *)(*piVar1 + 4),(&PTR_FUN_0209de74)[param_4]);
  iVar2 = jus_AllocDebug(param_3 << 1,s_CommonPaletteAnime_cpp_0209de9c,
                         s_CommonPaletteAnime_Create_0209de30,0x7e);
  piVar1[2] = iVar2;
  FUN_02051890(*(int *)(*(int *)(param_1 + 4) + 0x10) + param_2 * 2,piVar1[2],param_3 << 1);
  return piVar1;
}

