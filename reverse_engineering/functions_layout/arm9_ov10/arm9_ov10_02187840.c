
undefined4 FUN_02187840(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *param_1;
  if (0 < *(int *)(iVar5 + 0x210)) {
    piVar2 = (int *)FUN_0217583c(*(int *)(iVar5 + 0x210) << 2);
    if (piVar2 == (int *)0x0) {
      FUN_0218912c(param_1,s_Out_of_memory__021a5f98);
      return 1;
    }
    iVar1 = 0;
    for (piVar3 = *(int **)(iVar5 + 0x424); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[8]) {
      iVar4 = iVar1;
      if (((*piVar3 == 3) && (piVar3[5] != 5)) && (*(int *)(piVar3[1] + 0x13c) == 0)) {
        if (*(int *)(iVar5 + 0x210) <= iVar1) {
          FUN_02002068(s_num_<_iconnection_>numSearches_021a5fa8,s_gpiSearch_c_021a5fc8,0,0x563);
        }
        iVar4 = iVar1 + 1;
        piVar2[iVar1] = (int)piVar3;
        *(undefined4 *)(piVar3[1] + 0x13c) = 1;
      }
      iVar1 = iVar4;
    }
    iVar5 = 0;
    if (0 < iVar1) {
      piVar3 = piVar2;
      do {
        iVar4 = FUN_0218792c(param_1,*piVar3);
        if (iVar4 != 0) {
          *(int *)(*piVar3 + 0x1c) = iVar4;
        }
        piVar3 = piVar3 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
    iVar5 = 0;
    if (0 < iVar1) {
      piVar3 = piVar2;
      do {
        iVar4 = *(int *)(*piVar3 + 4);
        *(undefined4 *)(iVar4 + 0x13c) = 0;
        if (*(int *)(iVar4 + 0x140) != 0) {
          FUN_021865e4(param_1,*piVar3);
        }
        piVar3 = piVar3 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
    FUN_02175814(piVar2);
  }
  return 0;
}

