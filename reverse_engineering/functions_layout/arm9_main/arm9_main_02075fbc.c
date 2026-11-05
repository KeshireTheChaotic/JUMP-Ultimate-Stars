
/* JUS-GAME ComicDeck::ComicDeckCreate [source-string] __FILE__="ComicDeck.cpp"
   __FUNCTION__="ComicDeckCreate" lines=[152, 197, 219, 220] passed to 4 source-location call(s) */

int * ComicDeck::ComicDeckCreate
                (int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  
                    /* JUS-TAG
                       strings=["ComicDeck.cpp","ComicDeckCreate","bin/ability.bin","bin/ability_t.bin","bin/chr_b.bin","bin/chr_b_t.bin","bin/chr_s.bin","bin/chr_s_t.bin","bin/kshape.bin"]
                        */
  uStack_1c = param_4;
  DAT_0214bd80 = (int *)thunk_FUN_0201a228(0x1914,s_ComicDeck_cpp_0209f5b4,
                                           s_ComicDeckCreate_0209f584,0x98);
  if (DAT_0214bd80 != (int *)0x0) {
    piVar1 = DAT_0214bd80 + 0x19;
    do {
      piVar1[0x156] = 0;
      piVar1[0x157] = 0;
      piVar1[0x158] = 0;
      piVar1[0x159] = 0;
      piVar1 = piVar1 + 0x187;
    } while (piVar1 < DAT_0214bd80 + 0x635);
    DAT_0214bd80[0x635] = 0;
    DAT_0214bd80[0x636] = 0;
    DAT_0214bd80[0x637] = 0;
    DAT_0214bd80[0x638] = 0;
  }
  FUN_020517fc(DAT_0214bd80,0,0x1914);
  iVar2 = 4;
  piVar1 = DAT_0214bd80 + 0x19;
  do {
    FUN_02037b98(DAT_0214bd80 + 0x637,piVar1);
    iVar2 = iVar2 + -1;
    piVar1 = piVar1 + 0x187;
  } while (0 < iVar2);
  DAT_0214bd80[0x639] = param_1;
  *(undefined1 *)((int)DAT_0214bd80 + 0x1911) = param_2;
  iVar2 = FUN_02075f08(DAT_0214bd80 + 0xc,DAT_0214bd80 + 0x63b);
  DAT_0214bd80[1] = iVar2;
  iVar2 = ALStreamImp::Create(s_bin_kshape_bin_0209f5c4);
  DAT_0214bd80[2] = iVar2;
  iVar2 = (**(code **)(**(int **)(DAT_0214bd80[2] + 4) + 0x2c))(*(int **)(DAT_0214bd80[2] + 4),0);
  DAT_0214bd80[0xe] = iVar2;
  iVar2 = ALStreamImp::Create(s_bin_chr_b_bin_0209f5d4);
  DAT_0214bd80[3] = iVar2;
  iVar2 = (**(code **)(**(int **)(DAT_0214bd80[3] + 4) + 0x2c))(*(int **)(DAT_0214bd80[3] + 4),0);
  DAT_0214bd80[0x10] = iVar2;
  iVar2 = ALStreamImp::Create(s_bin_chr_s_bin_0209f5e4);
  DAT_0214bd80[4] = iVar2;
  iVar2 = (**(code **)(**(int **)(DAT_0214bd80[4] + 4) + 0x2c))(*(int **)(DAT_0214bd80[4] + 4),0);
  DAT_0214bd80[0x12] = iVar2;
  iVar2 = ALStreamImp::Create(s_bin_ability_bin_0209f5f4);
  DAT_0214bd80[6] = iVar2;
  iVar2 = (**(code **)(**(int **)(DAT_0214bd80[6] + 4) + 0x2c))(*(int **)(DAT_0214bd80[6] + 4),0);
  DAT_0214bd80[0x14] = iVar2;
  if (param_1 == 0) {
    iVar2 = FUN_02026f94();
    *DAT_0214bd80 = iVar2;
    local_20 = 0x81000;
    (**(code **)(**(int **)(*DAT_0214bd80 + 4) + 0xa0))(*(int **)(*DAT_0214bd80 + 4),&local_20);
    FUN_02028384(*(undefined4 *)(*DAT_0214bd80 + 4),FUN_02076510);
    (**(code **)(**(int **)(*DAT_0214bd80 + 4) + 0x24))();
  }
  else {
    if (param_1 != 1) {
      if (param_1 != 2) {
        return DAT_0214bd80;
      }
      iVar2 = thunk_FUN_0201a228(0xe8,s_ComicDeck_cpp_0209f5b4,s_ComicDeckCreate_0209f584,0xc5);
      DAT_0214bd80[0x18] = iVar2;
      FUN_020517fc(DAT_0214bd80[0x18],0,0xe8);
    }
    iVar2 = FUN_02075f60(DAT_0214bd80 + 0xd);
    DAT_0214bd80[7] = iVar2;
    iVar2 = FUN_02070b30(s_bin_chr_b_t_bin_0209f604,0,0);
    DAT_0214bd80[8] = iVar2;
    iVar2 = (**(code **)(**(int **)(DAT_0214bd80[8] + 4) + 0x2c))(*(int **)(DAT_0214bd80[8] + 4),0);
    DAT_0214bd80[0x11] = iVar2;
    iVar2 = FUN_02070b30(s_bin_chr_s_t_bin_0209f614,0,0);
    DAT_0214bd80[9] = iVar2;
    iVar2 = (**(code **)(**(int **)(DAT_0214bd80[9] + 4) + 0x2c))(*(int **)(DAT_0214bd80[9] + 4),0);
    DAT_0214bd80[0x13] = iVar2;
    iVar2 = FUN_02070b30(s_bin_ability_t_bin_0209f624,0,0);
    DAT_0214bd80[0xb] = iVar2;
    iVar2 = (**(code **)(**(int **)(DAT_0214bd80[0xb] + 4) + 0x2c))
                      (*(int **)(DAT_0214bd80[0xb] + 4),0);
    DAT_0214bd80[0x15] = iVar2;
    iVar2 = thunk_FUN_0201a228(DAT_0214bd80[0x63b] << 3,s_ComicDeck_cpp_0209f5b4,
                               s_ComicDeckCreate_0209f584,0xdb);
    DAT_0214bd80[0x16] = iVar2;
    iVar2 = thunk_FUN_0201a228(DAT_0214bd80[0x63b] << 3,s_ComicDeck_cpp_0209f5b4,
                               s_ComicDeckCreate_0209f584,0xdc);
    DAT_0214bd80[0x17] = iVar2;
  }
  return DAT_0214bd80;
}

