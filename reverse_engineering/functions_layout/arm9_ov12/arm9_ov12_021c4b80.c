
void FUN_021c4b80(int param_1,int *param_2,int param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  param_3 = param_3 + (int)*(short *)(param_4 + 4) * *(short *)(param_4 + 6) * 8;
  iVar4 = param_3 + (uint)*(ushort *)(param_4 + 0x2e) * 0x18 +
          *(short *)((int)param_2 + 0x16) * 0x14;
  iVar5 = *param_2;
  iVar8 = 0x44;
  iVar6 = param_2[1];
  iVar7 = param_2[2];
  iVar2 = param_2[3];
  sVar1 = *(short *)(iVar4 + 2);
  if (sVar1 < 1) {
    iVar8 = 0xe0;
  }
  else if (sVar1 < 100) {
    if (sVar1 < 0x1f) {
      iVar8 = 0xe8;
    }
    else if ((*(short *)(iVar4 + 8) == -1) ||
            (*(char *)(param_3 + *(short *)(iVar4 + 8) * 0x18 + 0x14) != '\x02')) {
      if ((*(short *)(iVar4 + 10) == -1) ||
         (*(char *)(param_3 + *(short *)(iVar4 + 10) * 0x18 + 0x14) != '\x02')) {
        if ((*(short *)(iVar4 + 4) == -1) ||
           (*(char *)(param_3 + *(short *)(iVar4 + 4) * 0x18 + 0x14) != '\x02')) {
          iVar8 = 0x40;
        }
        else if ((*(short *)(iVar4 + 6) == -1) ||
                (*(char *)(param_3 + *(short *)(iVar4 + 6) * 0x18 + 0x14) != '\x02')) {
          iVar8 = 0x48;
        }
      }
      else {
        iVar8 = 0x55;
      }
    }
    else if ((*(short *)(iVar4 + 10) == -1) ||
            (*(char *)(param_3 + *(short *)(iVar4 + 10) * 0x18 + 0x14) != '\x02')) {
      iVar8 = 0x4d;
    }
    else {
      iVar8 = 0x51;
    }
  }
  else {
    iVar8 = 0xe4;
  }
  for (iVar4 = 0; iVar4 <= iVar2 >> 0xc; iVar4 = iVar4 + 1) {
    for (iVar9 = 0; iVar9 <= iVar7 >> 0xc; iVar9 = iVar9 + 1) {
      piVar3 = *(int **)(*(int *)(param_1 + 4) + 100);
      (**(code **)(*piVar3 + 0x60))
                (piVar3,(iVar5 >> 0xc) + iVar9,(iVar6 >> 0xc) + iVar4,iVar8 + iVar9 + iVar4 * 0x20,
                 0xe,0,0);
    }
  }
  return;
}

