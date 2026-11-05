
uint FUN_02192294(int param_1,undefined4 param_2,uint param_3,undefined2 *param_4,int *param_5,
                 uint param_6)

{
  ushort uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint local_24;
  uint local_18;
  
  iVar5 = *(int *)(param_1 + 100);
  uVar3 = OS_DisableInterrupts(*(undefined4 *)(iVar5 + 0x104));
  piVar6 = *(int **)(iVar5 + 0x104);
  if (piVar6 == (int *)0x0) {
    do {
      if ((param_6 & 1) == 0) {
        local_18 = 0xfffffffa;
        break;
      }
      FUN_02053290(iVar5 + 0x10c);
      iVar4 = FUN_0219346c(param_1);
      if (iVar4 != 0) {
LAB_021922f0:
        local_18 = 0xffffffc8;
        break;
      }
      bVar2 = false;
      if ((param_1 != 0) && ((*(ushort *)(param_1 + 0x70) & 1) != 0)) {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_021922f0;
      piVar6 = *(int **)(iVar5 + 0x104);
    } while (piVar6 == (int *)0x0);
  }
  if (piVar6 != (int *)0x0) {
    local_24 = param_3;
    if ((int)(uint)*(ushort *)(piVar6 + 1) < (int)param_3) {
      local_24 = (uint)*(ushort *)(piVar6 + 1);
    }
    FUN_02051890(piVar6 + 3,param_2,local_24);
    if (param_4 != (undefined2 *)0x0) {
      *param_4 = *(undefined2 *)((int)piVar6 + 6);
    }
    if (param_5 != (int *)0x0) {
      *param_5 = piVar6[2];
    }
    uVar1 = *(ushort *)(piVar6 + 1);
    local_18 = (uint)uVar1;
    if (*(char *)(iVar5 + 0xfe) == '\0') {
      *(int *)(iVar5 + 0x104) = *piVar6;
      if (*piVar6 == 0) {
        *(undefined4 *)(iVar5 + 0x100) = 0;
      }
      (**(code **)(DAT_021a9d20 + 0x1c))(piVar6);
      *(short *)(iVar5 + 0x108) = *(short *)(iVar5 + 0x108) - uVar1;
    }
  }
  OS_RestoreInterrupts(uVar3);
  return local_18;
}

