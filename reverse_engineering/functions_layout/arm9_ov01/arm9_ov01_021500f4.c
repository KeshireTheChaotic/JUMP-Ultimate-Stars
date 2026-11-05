
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021500f4(int param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
                    /* JUS-TAG source_file_inferred="JArenaMissionTry.cpp" */
  pcVar3 = *(char **)(*(int *)(param_1 + 4) + 0x10);
  iVar2 = FUN_0207382c();
  if (iVar2 != 0) {
    DAT_020afcb8 = (uint)CONCAT11(*pcVar3,pcVar3[0x158]);
    if (*(int *)(pcVar3 + 0x13c) != 0) {
      FUN_0206ae98();
      pcVar3[0x13c] = '\0';
      pcVar3[0x13d] = '\0';
      pcVar3[0x13e] = '\0';
      pcVar3[0x13f] = '\0';
    }
    _DAT_021d5154 = 0;
    func_0x021b526c(1);
    if (*(int *)(pcVar3 + 0x138) != 0) {
      (**(code **)(**(int **)(*(int *)(pcVar3 + 0x138) + 4) + 0xc))();
      pcVar3[0x138] = '\0';
      pcVar3[0x139] = '\0';
      pcVar3[0x13a] = '\0';
      pcVar3[0x13b] = '\0';
    }
    if (*(int *)(pcVar3 + 0x14c) != 0) {
      FUN_0201b268();
      pcVar3[0x14c] = '\0';
      pcVar3[0x14d] = '\0';
      pcVar3[0x14e] = '\0';
      pcVar3[0x14f] = '\0';
    }
    if (*(int *)(pcVar3 + 0x140) != 0) {
      FUN_0207535c();
      pcVar3[0x140] = '\0';
      pcVar3[0x141] = '\0';
      pcVar3[0x142] = '\0';
      pcVar3[0x143] = '\0';
    }
    if (*(int *)(pcVar3 + 0x148) != 0) {
      FUN_02074504();
      pcVar3[0x148] = '\0';
      pcVar3[0x149] = '\0';
      pcVar3[0x14a] = '\0';
      pcVar3[0x14b] = '\0';
    }
    if (*(int *)(pcVar3 + 0x144) != 0) {
      FUN_0216442c();
      pcVar3[0x144] = '\0';
      pcVar3[0x145] = '\0';
      pcVar3[0x146] = '\0';
      pcVar3[0x147] = '\0';
    }
    if (*(int *)(pcVar3 + 0x44) != 0) {
      FUN_02034d7c();
      pcVar3[0x44] = '\0';
      pcVar3[0x45] = '\0';
      pcVar3[0x46] = '\0';
      pcVar3[0x47] = '\0';
    }
    iVar2 = 0;
    do {
      if (*(int **)(pcVar3 + iVar2 * 4 + 0x48) != (int *)0x0) {
        (**(code **)(**(int **)(pcVar3 + iVar2 * 4 + 0x48) + 8))();
        pcVar1 = pcVar3 + iVar2 * 4 + 0x48;
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    iVar2 = 0;
    do {
      if (*(int **)(pcVar3 + iVar2 * 4 + 0x14) != (int *)0x0) {
        (**(code **)(**(int **)(pcVar3 + iVar2 * 4 + 0x14) + 0xc))();
        pcVar1 = pcVar3 + iVar2 * 4 + 0x14;
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 7);
    if (*(int **)(pcVar3 + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(pcVar3 + 0xc) + 8))();
      pcVar3[0xc] = '\0';
      pcVar3[0xd] = '\0';
      pcVar3[0xe] = '\0';
      pcVar3[0xf] = '\0';
    }
    if (*(int **)(pcVar3 + 8) != (int *)0x0) {
      (**(code **)(**(int **)(pcVar3 + 8) + 8))();
      pcVar3[8] = '\0';
      pcVar3[9] = '\0';
      pcVar3[10] = '\0';
      pcVar3[0xb] = '\0';
    }
    _DAT_021d514c = 0;
    func_0x021b7260(1);
    func_0x021b7260(2,0);
    func_0x021b7260(8,0);
    func_0x021b7260(4,0);
    func_0x021b7260(0x10000,0);
    func_0x021b7260(0x10,0);
    func_0x021b7260(0x20,0);
    func_0x021b7260(0x10000,0);
    func_0x021b7260(0x20000,0);
    func_0x021b65cc();
    iVar2 = FUN_0203b3e4();
    FUN_021500b0(*(undefined4 *)(iVar2 + 0x88),0,0);
    if (*pcVar3 == '\x01') {
      FUN_0207367c(8);
      FUN_0207372c(8);
      FUN_020735e4();
    }
    iVar2 = DAT_02093c04 + 1;
    DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
    DAT_02093c04 = iVar2;
    if (*(int *)(pcVar3 + 4) != 0) {
      (**(code **)(**(int **)(*(int *)(pcVar3 + 4) + 4) + 0xc))();
      pcVar3[4] = '\0';
      pcVar3[5] = '\0';
      pcVar3[6] = '\0';
      pcVar3[7] = '\0';
    }
    FUN_0201b244(pcVar3);
  }
  return;
}

