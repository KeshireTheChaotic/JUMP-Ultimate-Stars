
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
FUN_021c2744(int param_1,int *param_2,int param_3,int param_4,undefined4 *param_5,int param_6)

{
  undefined2 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  int local_6c;
  int local_60;
  int local_5c;
  short local_1c;
  short local_1a;
  
  iVar9 = 0;
  local_6c = 0;
  iVar3 = param_5[1];
  psVar8 = (short *)*param_5;
  bVar2 = true;
  iVar10 = 0;
  do {
    if ((iVar3 <= iVar10) || (param_3 <= iVar9)) goto LAB_021c28fe;
    uVar1 = (undefined2)iVar10;
    if (*psVar8 == -1) {
      if (!bVar2) {
        if (iVar10 - 1U != (uint)*(ushort *)(param_1 + (iVar9 + -1) * 2)) {
          *(short *)(param_1 + iVar9 * 2) = (short)(iVar10 - 1U);
          iVar9 = iVar9 + 1;
          if (param_3 <= iVar9) goto LAB_021c28fe;
        }
        *(undefined2 *)(param_1 + iVar9 * 2) = uVar1;
        iVar9 = iVar9 + 1;
        bVar2 = true;
        local_6c = local_6c + 1;
        if (param_4 <= local_6c) {
          iVar10 = iVar10 + 1;
LAB_021c28fe:
          *param_2 = iVar9;
          if (!bVar2) {
            if (((0 < iVar9) && (iVar10 - 1U != (uint)*(ushort *)(param_1 + (iVar9 + -1) * 2))) &&
               (iVar9 < param_3)) {
              *(short *)(param_1 + *param_2 * 2) = (short)(iVar10 - 1U);
              *param_2 = *param_2 + 1;
            }
            FUN_021c2ae8(param_1,param_2,param_3,param_5);
          }
          if (*param_2 < 1) {
            return 0;
          }
          return 1;
        }
      }
    }
    else if (bVar2) {
      *(undefined2 *)(param_1 + iVar9 * 2) = uVar1;
      iVar9 = iVar9 + 1;
      local_1c = *psVar8;
      local_1a = psVar8[1];
      bVar2 = false;
      local_5c = 1;
      if (iVar10 + 1 < iVar3) {
        local_60 = FUN_02050bac(((int)psVar8[3] - (int)psVar8[1]) * 0x1000,
                                ((int)psVar8[2] - (int)*psVar8) * 0x1000);
      }
    }
    else {
      iVar4 = (int)psVar8[1] - (int)local_1a;
      if (iVar4 < 0) {
        iVar5 = -iVar4;
      }
      else {
        iVar5 = iVar4;
      }
      iVar6 = (int)*psVar8 - (int)local_1c;
      if (iVar6 < 0) {
        iVar7 = -iVar6;
      }
      else {
        iVar7 = iVar6;
      }
      if (5 < iVar7 + iVar5) {
        if (local_5c == 0) {
          iVar5 = FUN_02050bac(iVar4 * 0x1000,iVar6 * 0x1000);
          iVar4 = (local_60 - iVar5) * 0x10000 >> 0x10;
          if (iVar4 < 0) {
            iVar4 = -iVar4;
          }
          if (param_6 <= iVar4) {
            *(undefined2 *)(param_1 + iVar9 * 2) = uVar1;
            iVar9 = iVar9 + 1;
            local_60 = iVar5;
          }
        }
        else {
          if ((iVar10 + 1 < iVar3) && (psVar8[2] != -1)) {
            iVar4 = FUN_02050bac(((int)psVar8[3] - (int)psVar8[1]) * 0x1000,
                                 ((int)psVar8[2] - (int)*psVar8) * 0x1000);
            iVar4 = (local_60 - iVar4) * 0x10000 >> 0x10;
            if (iVar4 < 0) {
              iVar4 = -iVar4;
            }
            if (param_6 <= iVar4) {
              local_60 = FUN_02050bac(((int)psVar8[1] - (int)local_1a) * 0x1000,
                                      ((int)*psVar8 - (int)local_1c) * 0x1000);
              *(undefined2 *)(param_1 + iVar9 * 2) = uVar1;
              iVar9 = iVar9 + 1;
            }
          }
          local_5c = 0;
        }
        local_1c = *psVar8;
        local_1a = psVar8[1];
      }
    }
    iVar10 = iVar10 + 1;
    psVar8 = psVar8 + 2;
  } while( true );
}

