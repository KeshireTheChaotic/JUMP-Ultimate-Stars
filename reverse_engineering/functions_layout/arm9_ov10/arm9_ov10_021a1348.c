
void FUN_021a1348(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  int local_38 [4];
  undefined4 uStack_28;
  
  iVar7 = *(int *)(param_1 + 0x1c);
  uStack_28 = param_4;
  iVar3 = thunk_FUN_02176714();
  if (iVar3 < 2) {
    cVar2 = param_1[0x36];
  }
  else {
    cVar2 = thunk_FUN_02176714();
    cVar2 = param_1[0x36] * (cVar2 + -1);
  }
  param_1[0x38] = cVar2;
  bVar10 = false;
  bVar9 = false;
  if (param_1[0x38] < '\x04') {
    param_1[0x38] = '\x04';
  }
  iVar3 = 0;
  *param_1 = '\x01';
  do {
    if (param_1[0x34] <= iVar3) {
LAB_021a13fc:
      if ((!bVar10) && (iVar3 = FUN_021a12f8(param_1), param_1[0x34] <= iVar3)) {
        *param_1 = '\0';
      }
      if (!bVar9) {
        *(uint *)(param_1 + 0x1c) = (*(int *)(param_1 + 0x18) + (int)param_1[0x34]) - 1U & 0x7fff;
        param_1[6] = '\0';
      }
      if (iVar7 == *(int *)(param_1 + 0x1c)) {
        iVar3 = *(int *)(param_1 + 0x20) + 1;
      }
      else {
        iVar3 = 0;
      }
      *(int *)(param_1 + 0x20) = iVar3;
      if (*param_1 == '\0') {
        if ('\0' < param_1[7]) {
          param_1[7] = '\0';
        }
        if (-0x40 < param_1[7]) {
          param_1[7] = param_1[7] + -1;
        }
      }
      else {
        if (param_1[7] < '\0') {
          param_1[7] = '\0';
        }
        if (param_1[7] < '@') {
          param_1[7] = param_1[7] + '\x01';
        }
      }
      cVar2 = param_1[1];
      bVar10 = cVar2 == '\0';
      if (bVar10) {
        cVar2 = param_1[2];
      }
      if (bVar10 && cVar2 == '\0') {
        if (param_1[7] < '\x01') {
          if (param_1[7] < '\0') {
            if (((*(int *)(param_1 + 0x24) == 0) ||
                (*(int *)(param_1 + 0xb00) <= (int)param_1[0x34])) &&
               (*(int *)(param_1 + 0x24) < 0x1e)) {
              *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
            }
            if ((0x1d < *(int *)(param_1 + 0x24)) && (param_1[0x38] < param_1[0x34])) {
              param_1[0x34] = param_1[0x34] + -1;
              param_1[0x24] = '\0';
              param_1[0x25] = '\0';
              param_1[0x26] = '\0';
              param_1[0x27] = '\0';
              if (*(int *)(param_1 + 0x2c) != (int)param_1[0x35]) {
                *(int *)(param_1 + 0x2c) = (int)param_1[0x34];
              }
            }
          }
        }
        else if (*(int *)(param_1 + 0x24) != 0) {
          cVar2 = param_1[0x34];
          iVar3 = FUN_021a12f8(param_1);
          if (((cVar2 < iVar3) && (cVar2 < 0xb)) &&
             (param_1[0x34] = param_1[0x34] + '\x01', *(int *)(param_1 + 0x2c) != (int)param_1[0x35]
             )) {
            *(int *)(param_1 + 0x2c) = (int)param_1[0x34];
          }
          param_1[0x24] = '\0';
          param_1[0x25] = '\0';
          param_1[0x26] = '\0';
          param_1[0x27] = '\0';
        }
      }
      iVar3 = FUN_021a117c(param_1);
      bVar10 = iVar3 == 0;
      if (bVar10) {
        iVar3 = (int)param_1[2];
      }
      if (bVar10 && iVar3 == 0) {
        if (*param_1 == '\0') {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
      }
      else {
        bVar10 = true;
      }
      if (!bVar10) {
        iVar3 = FUN_021766fc();
        iVar7 = FUN_021a1bf8(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x18));
        if (iVar7 == 0) {
          uVar5 = 0;
        }
        else if (param_1[0x8a1] == '\0') {
          uVar5 = *(undefined4 *)(iVar7 + 4);
        }
        else {
          uVar5 = 0;
        }
        uVar8 = 0;
        *(undefined4 *)(param_1 + iVar3 * 4 + 0x870) = uVar5;
        do {
          iVar3 = FUN_02199e24(uVar8 & 0xff);
          if (iVar3 < 0) {
            uVar4 = FUN_021766fc();
            if (uVar8 != uVar4) {
              pcVar1 = param_1 + uVar8 * 4 + 0x870;
              pcVar1[0] = '\0';
              pcVar1[1] = '\0';
              pcVar1[2] = '\0';
              pcVar1[3] = '\0';
            }
          }
          else {
            iVar7 = FUN_021a1bf8(param_1 + iVar3 * 0x20c + 0x40,*(undefined4 *)(param_1 + 0x18));
            if (iVar7 == 0) {
              pcVar1 = param_1 + uVar8 * 4 + 0x870;
              pcVar1[0] = '\0';
              pcVar1[1] = '\0';
              pcVar1[2] = '\0';
              pcVar1[3] = '\0';
            }
            else {
              if (param_1[0x8a1] == '\0') {
                uVar5 = *(undefined4 *)(iVar7 + 4);
              }
              else {
                uVar5 = 0;
              }
              *(undefined4 *)(param_1 + uVar8 * 4 + 0x870) = uVar5;
            }
            FUN_021a1acc(param_1 + iVar3 * 0x20c + 0x40,*(int *)(param_1 + 0x18) - 0x1eU & 0x7fff);
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < 4);
        uVar5 = FUN_021a12f8(param_1);
        *(undefined4 *)(param_1 + 0xb00) = uVar5;
        FUN_021a1acc(param_1 + 0x8f0,*(undefined4 *)(param_1 + 0x18));
      }
      FUN_021a11c0(param_1);
      FUN_021a1acc(*(undefined4 *)(param_1 + 0x3c),*(int *)(param_1 + 0x18) - 0x1eU & 0x7fff);
      if ((!bVar10) &&
         (*(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1U & 0x7fff,
         *(int *)(param_1 + 0x2c) == (int)param_1[0x34])) {
        *(int *)(param_1 + 0x2c) = (int)param_1[0x35];
      }
      thunk_FUN_02002488(param_1 + 0xf60,0xff,0x10);
      param_1[0xf70] = '\0';
      param_1[0xf71] = '\0';
      param_1[0xf72] = '\0';
      param_1[0xf73] = '\0';
      bVar10 = true;
      thunk_FUN_02002488(local_38,0xff,0x10);
      uVar8 = 0;
      do {
        uVar4 = FUN_021766fc();
        if ((((uVar8 & 0xff) != uVar4) && (iVar3 = FUN_02176654(uVar8 & 0xff), iVar3 != 0)) &&
           (iVar3 = FUN_02199e24(uVar8 & 0xff), -1 < iVar3)) {
          iVar7 = (int)*(short *)(param_1 + iVar3 * 2 + 0x890);
          bVar9 = -1 < iVar7;
          if (bVar9) {
            iVar7 = (int)*(short *)(param_1 + iVar3 * 2 + 0x888);
          }
          if (bVar9 && -1 < iVar7) {
            iVar6 = *(int *)(param_1 + 0x14);
            if (iVar6 < iVar7) {
              iVar6 = iVar6 + 0x8000;
            }
            iVar6 = iVar6 - iVar7;
            local_38[uVar8] = iVar6;
            if (((iVar6 < 1) || (0x3ffe < iVar6)) ||
               (iVar6 <= *(short *)(param_1 + iVar3 * 2 + 0x898))) {
              bVar10 = false;
            }
          }
          else {
            bVar10 = false;
          }
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < 4);
      if ((param_1[0x8a0] == '\0') && ((int)param_1[0x34] < *(int *)(param_1 + 0xb00))) {
        if (bVar10) {
          cVar2 = thunk_FUN_02176714();
          param_1[0x8a0] = param_1[0x36] * (cVar2 + -1) * '\x02';
          if (param_1[0x8a0] == '\0') {
            param_1[0x8a0] = '\x02';
          }
        }
        else {
          iVar3 = FUN_021a12e0(param_1);
          if (iVar3 < 0xc) {
            *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1U & 0x7fff;
          }
        }
      }
      else {
        iVar3 = FUN_021a12e0(param_1);
        if (iVar3 < 0xc) {
          *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1U & 0x7fff;
        }
      }
      uVar8 = 0;
      if ('\0' < param_1[0x8a0]) {
        param_1[0x8a0] = param_1[0x8a0] + -1;
      }
      do {
        iVar3 = FUN_02199e24(uVar8 & 0xff);
        if ((-1 < iVar3) && (iVar7 = FUN_02176654(uVar8 & 0xff), iVar7 != 0)) {
          if (-1 < *(short *)(param_1 + iVar3 * 2 + 0x890)) {
            *(ushort *)(param_1 + iVar3 * 2 + 0x890) =
                 *(short *)(param_1 + iVar3 * 2 + 0x890) + 1U & 0x7fff;
          }
          if (-1 < *(short *)(param_1 + iVar3 * 2 + 0x888)) {
            *(ushort *)(param_1 + iVar3 * 2 + 0x888) =
                 *(short *)(param_1 + iVar3 * 2 + 0x888) + 1U & 0x7fff;
          }
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < 4);
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      iVar3 = FUN_021a117c(param_1);
      if ((iVar3 == 0) && (iVar3 = FUN_021a0664(param_1), iVar3 == 0)) {
        uVar8 = 0;
        do {
          iVar3 = *(int *)(param_1 + uVar8 * 4 + 0x8b4);
          if (*(int *)(param_1 + uVar8 * 4 + 0x8a4) != 0) {
            FUN_02028930();
          }
          if (iVar3 != 0) {
            FUN_02020b34(*(undefined4 *)(iVar3 + 4));
          }
          uVar8 = uVar8 + 1 & 0xff;
        } while (uVar8 < 4);
      }
      if (param_1[3] == '\0') {
        iVar3 = *(int *)(param_1 + 0xb0c);
        if (*(int *)(param_1 + 0xb08) != 0) {
          FUN_02028930();
        }
        if (iVar3 != 0) {
          FUN_02020b34(*(undefined4 *)(iVar3 + 4));
        }
      }
      return;
    }
    iVar6 = FUN_021a0a1c(param_1,*(int *)(param_1 + 0x18) + iVar3);
    if (iVar6 != 0) {
      *(uint *)(param_1 + 0x1c) = (*(int *)(param_1 + 0x18) + iVar3) - 1U & 0x7fff;
      bVar10 = iVar3 < *(int *)(param_1 + 0x2c);
      param_1[6] = (char)iVar6;
      bVar9 = true;
      goto LAB_021a13fc;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}

