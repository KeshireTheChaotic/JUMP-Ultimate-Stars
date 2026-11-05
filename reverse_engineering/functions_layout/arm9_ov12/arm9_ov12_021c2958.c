
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
FUN_021c2958(int param_1,int *param_2,int param_3,int param_4,undefined4 *param_5,int param_6)

{
  undefined2 uVar1;
  bool bVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_44;
  int local_3c;
  short local_18;
  short local_16;
  
  iVar6 = 0;
  local_44 = 0;
  iVar3 = param_5[1];
  psVar4 = (short *)*param_5;
  bVar2 = true;
  iVar5 = 0;
  do {
    if ((iVar3 <= iVar5) || (param_3 <= iVar6)) goto LAB_021c2a36;
    uVar1 = (undefined2)iVar5;
    if (*psVar4 == -1) {
      if (!bVar2) {
        if (iVar5 - 1U != (uint)*(ushort *)(param_1 + (iVar6 + -1) * 2)) {
          *(short *)(param_1 + iVar6 * 2) = (short)(iVar5 - 1U);
          iVar6 = iVar6 + 1;
          if (param_3 <= iVar6) goto LAB_021c2a36;
        }
        *(undefined2 *)(param_1 + iVar6 * 2) = uVar1;
        iVar6 = iVar6 + 1;
        bVar2 = true;
        local_44 = local_44 + 1;
        if (param_4 <= local_44) {
          iVar5 = iVar5 + 1;
LAB_021c2a36:
          *param_2 = iVar6;
          if (!bVar2) {
            if (((0 < iVar6) && (iVar5 - 1U != (uint)*(ushort *)(param_1 + (iVar6 + -1) * 2))) &&
               (iVar6 < param_3)) {
              *(short *)(param_1 + *param_2 * 2) = (short)(iVar5 - 1U);
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
    else {
      if (bVar2) {
        *(undefined2 *)(param_1 + iVar6 * 2) = uVar1;
        iVar6 = iVar6 + 1;
        bVar2 = false;
        local_3c = 0;
      }
      else {
        iVar8 = (int)psVar4[1] - (int)local_16;
        if (iVar8 < 0) {
          iVar8 = -iVar8;
        }
        iVar7 = (int)*psVar4 - (int)local_18;
        if (iVar7 < 0) {
          iVar7 = -iVar7;
        }
        local_3c = local_3c + iVar7 + iVar8;
        if (param_6 <= local_3c) {
          *(undefined2 *)(param_1 + iVar6 * 2) = uVar1;
          iVar6 = iVar6 + 1;
          local_3c = 0;
        }
      }
      local_18 = *psVar4;
      local_16 = psVar4[1];
    }
    iVar5 = iVar5 + 1;
    psVar4 = psVar4 + 2;
  } while( true );
}

