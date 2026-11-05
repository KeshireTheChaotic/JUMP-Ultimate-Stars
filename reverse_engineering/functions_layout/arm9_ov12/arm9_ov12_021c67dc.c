
void FUN_021c67dc(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  short *psVar6;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  
  if (*(short *)(param_1 + 0x104) < *(short *)(param_1 + 0xf0)) {
    *(short *)(param_1 + 0xf0) = *(short *)(param_1 + 0x104);
  }
  if (*(short *)(param_1 + 0x106) < *(short *)(param_1 + 0xf2)) {
    *(short *)(param_1 + 0xf2) = *(short *)(param_1 + 0x106);
  }
  if (param_2 == 0x20) {
    sVar1 = FUN_021cb320(*(undefined4 *)(param_1 + 0x54));
    *(short *)(param_1 + 0x104) = *(short *)(param_1 + 0x104) + sVar1;
  }
  else if (param_2 == 0x8140) {
    sVar1 = (**(code **)(**(int **)(param_1 + 0x54) + 0x30))();
    *(short *)(param_1 + 0x104) = *(short *)(param_1 + 0x104) + sVar1;
  }
  else {
    iVar4 = FUN_021cb830(param_1 + 0x40,param_2);
    psVar6 = (short *)0x0;
    if (iVar4 == -1) {
      iVar4 = FUN_021cb830(*(int *)(param_1 + 0x54) + 0x1c,param_2);
      if (iVar4 != -1) {
        psVar6 = (short *)(*(int *)(*(int *)(param_1 + 0x54) + 0x1c) +
                          iVar4 * *(int *)(*(int *)(param_1 + 0x54) + 0x20));
      }
    }
    else {
      psVar6 = (short *)(*(int *)(param_1 + 0x40) + iVar4 * *(int *)(param_1 + 0x44));
    }
    if (psVar6 == (short *)0x0) {
      local_14 = *(undefined2 *)(param_1 + 0x104);
      local_12 = *(undefined2 *)(param_1 + 0x106);
      local_16 = (undefined2)param_2;
      local_18 = (**(code **)(**(int **)(param_1 + 0x54) + 0x1c))(*(int **)(param_1 + 0x54),param_2)
      ;
      sVar1 = (**(code **)(**(int **)(param_1 + 0x54) + 0x34))(*(int **)(param_1 + 0x54),local_18);
      *(short *)(param_1 + 0x104) = *(short *)(param_1 + 0x104) + sVar1;
      if ((-1 < (int)((uint)*(byte *)(param_1 + 0x10) << 0x18)) ||
         (-1 < (int)((uint)*(byte *)(param_1 + 0x10) << 0x1e))) {
        (**(code **)(**(int **)(param_1 + 0x54) + 0x20))(*(int **)(param_1 + 0x54),local_18);
        local_18 = 0xffff;
      }
      FUN_021c6698(param_1,&local_18);
    }
    else {
      piVar2 = (int *)(**(code **)(**(int **)(psVar6 + 4) + 0x18))();
      FUN_02027db0(piVar2,*(undefined4 *)(*(int *)(param_1 + 0x38) + 0x34));
      (**(code **)(*piVar2 + 0xd4))(piVar2,*(undefined4 *)(param_1 + 0x38));
      if ((char)psVar6[7] == '\0') {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0x2c))();
        local_28 = ((int)*(short *)(param_1 + 0x106) + (uVar3 >> 1)) * 0x1000;
        uVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 0x30))();
        local_24 = ((int)*(short *)(param_1 + 0x104) + (uVar3 >> 1)) * 0x1000;
        FUN_021b8a58(piVar2,&local_24,&local_28);
        sVar1 = (**(code **)(**(int **)(param_1 + 0x54) + 0x30))();
        *(short *)(param_1 + 0x104) = *(short *)(param_1 + 0x104) + sVar1;
      }
      else {
        local_20 = ((int)*(short *)(param_1 + 0x106) - (int)psVar6[1]) * 0x1000;
        local_1c = ((int)*(short *)(param_1 + 0x104) - (int)*psVar6) * 0x1000;
        FUN_021b8a58(piVar2,&local_1c,&local_20);
        sVar1 = *psVar6;
        sVar5 = psVar6[2];
        if (sVar1 < sVar5) {
          sVar5 = sVar5 - sVar1;
        }
        else {
          sVar5 = sVar1 - sVar5;
        }
        *(short *)(param_1 + 0x104) = *(short *)(param_1 + 0x104) + sVar5;
      }
      (**(code **)(**(int **)(param_1 + 0x38) + 0xb4))(*(int **)(param_1 + 0x38),piVar2);
      (**(code **)(*piVar2 + 0xc))();
      (**(code **)(*piVar2 + 0xd8))(piVar2,1);
    }
  }
  if (*(short *)(param_1 + 0xf4) < *(short *)(param_1 + 0x104)) {
    *(short *)(param_1 + 0xf4) = *(short *)(param_1 + 0x104);
  }
  iVar4 = ((int)*(short *)(param_1 + 0x106) + *(int *)(param_1 + 0xe8)) * 0x10000;
  if ((int)*(short *)(param_1 + 0xf6) < iVar4 >> 0x10) {
    *(short *)(param_1 + 0xf6) = (short)((uint)iVar4 >> 0x10);
  }
  return;
}

