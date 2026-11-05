
void FUN_02157dc0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = 0;
  do {
    iVar4 = 0;
    do {
      if (piVar3[iVar1 * 0x137 + iVar4 + 0x78] != 0) {
        piVar2 = *(int **)(piVar3[iVar1 * 0x137 + iVar4 + 0x78] + 4);
        (**(code **)(*piVar2 + 0xd8))(piVar2,0);
        (**(code **)(*(int *)piVar3[iVar1 * 0x137 + iVar4 + 0x78] + 8))();
        piVar3[iVar1 * 0x137 + iVar4 + 0x78] = 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
    iVar4 = 0;
    do {
      if ((int *)piVar3[iVar1 * 0x137 + iVar4 + 0x7c] != (int *)0x0) {
        (**(code **)(*(int *)piVar3[iVar1 * 0x137 + iVar4 + 0x7c] + 8))();
        piVar3[iVar1 * 0x137 + iVar4 + 0x7c] = 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 10);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  if ((*(ushort *)(piVar3 + 0x2a2) & 1) != 0) {
    FUN_020735e4();
    FUN_0207367c(8);
  }
  while ((char)piVar3[0x279] != '\0') {
    (*DAT_020a0e18)();
  }
  iVar1 = piVar3[0x27a];
  if (iVar1 != 0) {
    for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)(piVar3 + 0x278); iVar4 = iVar4 + 1) {
      if (*(int *)(iVar1 + iVar4 * 4) != 0) {
        FUN_02034d7c();
        *(undefined4 *)(iVar1 + iVar4 * 4) = 0;
      }
    }
    FUN_0201b268(iVar1);
  }
  if ((int *)piVar3[0x276] != (int *)0x0) {
    (**(code **)(*(int *)piVar3[0x276] + 8))();
    piVar3[0x276] = 0;
  }
  DAT_020a10a8 = 0;
  FUN_020713f0((int)*(short *)((int)piVar3 + 0xa86));
  iVar1 = FUN_0203b424(0);
  *(undefined1 *)(*(int *)(*(int *)(iVar1 + 0x88) + 4) + 0x956) = 0;
  iVar1 = FUN_0203b414(1);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x94))(piVar2,0);
  iVar1 = FUN_0203b414(2);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x94))(piVar2,0);
  iVar1 = FUN_0203b414(3);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x94))(piVar2,0);
  iVar1 = FUN_0203b424(1);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x94))(piVar2,0);
  iVar1 = FUN_0203b424(2);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x94))(piVar2,0);
  iVar1 = FUN_0203b424(3);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x94))(piVar2,0);
  FUN_020737d4();
  FUN_02073800();
  iVar1 = 0;
  do {
    if ((int *)piVar3[iVar1 + 0x281] != (int *)0x0) {
      (**(code **)(*(int *)piVar3[iVar1 + 0x281] + 0xc))();
      piVar3[iVar1 + 0x281] = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  iVar1 = 0;
  do {
    if ((int *)piVar3[iVar1 * 0x137 + 0xda] != (int *)0x0) {
      (**(code **)(*(int *)piVar3[iVar1 * 0x137 + 0xda] + 8))();
      piVar3[iVar1 * 0x137 + 0xda] = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  if (piVar3[6] != 0) {
    (**(code **)(**(int **)(piVar3[6] + 4) + 0xc))();
    piVar3[6] = 0;
  }
  iVar1 = 0;
  do {
    iVar4 = 0;
    do {
      if ((int *)piVar3[iVar1 * 0x137 + iVar4 + 0x78] != (int *)0x0) {
        (**(code **)(*(int *)piVar3[iVar1 * 0x137 + iVar4 + 0x78] + 8))();
        piVar3[iVar1 * 0x137 + iVar4 + 0x78] = 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  if ((int *)piVar3[0x280] != (int *)0x0) {
    (**(code **)(*(int *)piVar3[0x280] + 0xc))();
  }
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  DAT_020afcb8 = (uint)*(byte *)(piVar3 + 5);
  (**(code **)(**(int **)(*piVar3 + 4) + 0xc))();
  (**(code **)(*(int *)piVar3[1] + 8))();
  FUN_0201b244(piVar3);
  return;
}

