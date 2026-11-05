
void FUN_0207b7f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  short *psVar6;
  short *psVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint local_4c;
  uint local_48;
  int local_40;
  int local_3c;
  int local_34;
  int local_30;
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  FUN_0201899c(&local_34);
  FUN_0201899c(&local_40);
  puVar9 = (undefined4 *)(param_1 + 0x10);
  local_4c = 0;
  do {
    for (puVar4 = (undefined4 *)*puVar9; puVar4 != (undefined4 *)0x0; puVar4 = (undefined4 *)*puVar4
        ) {
      iVar2 = puVar4[2];
      FUN_0207afdc(*(undefined4 *)(iVar2 + 8),&local_34);
      for (puVar5 = (undefined4 *)*puVar9; puVar5 != (undefined4 *)0x0;
          puVar5 = (undefined4 *)*puVar5) {
        iVar3 = puVar5[2];
        if ((iVar2 != iVar3) && ((*(uint *)(iVar2 + 0x14) & *(uint *)(iVar3 + 0x10)) == 0)) {
          FUN_0207afdc(*(undefined4 *)(iVar3 + 8),&local_40);
          iVar1 = ((int)*(short *)(iVar2 + 0x2c) +
                  ((int)((local_34 + ((uint)(local_34 >> 0xb) >> 0x14)) * 0x10) >> 0x10)) -
                  ((int)*(short *)(iVar3 + 0x2c) +
                  ((int)((local_40 + ((uint)(local_40 >> 0xb) >> 0x14)) * 0x10) >> 0x10));
          if (iVar1 < 0) {
            iVar1 = -iVar1;
          }
          if (iVar1 <= (int)*(short *)(iVar2 + 0x30) + (int)*(short *)(iVar3 + 0x30)) {
            iVar1 = ((int)*(short *)(iVar2 + 0x2e) +
                    ((int)((local_30 + ((uint)(local_30 >> 0xb) >> 0x14)) * 0x10) >> 0x10)) -
                    ((int)*(short *)(iVar3 + 0x2e) +
                    ((int)((local_3c + ((uint)(local_3c >> 0xb) >> 0x14)) * 0x10) >> 0x10));
            if (iVar1 < 0) {
              iVar1 = -iVar1;
            }
            if (iVar1 <= (int)*(short *)(iVar2 + 0x32) + (int)*(short *)(iVar3 + 0x32)) {
              psVar6 = (short *)(iVar2 + 0x3c);
              for (local_48 = 0; local_48 < *(ushort *)(iVar2 + 0xc); local_48 = local_48 + 1) {
                psVar7 = (short *)(iVar3 + 0x3c);
                for (uVar8 = 0; uVar8 < *(ushort *)(iVar3 + 0xc); uVar8 = uVar8 + 1) {
                  iVar1 = ((int)*psVar6 +
                          ((int)((local_34 + ((uint)(local_34 >> 0xb) >> 0x14)) * 0x10) >> 0x10)) -
                          ((int)*psVar7 +
                          ((int)((local_40 + ((uint)(local_40 >> 0xb) >> 0x14)) * 0x10) >> 0x10));
                  if (iVar1 < 0) {
                    iVar1 = -iVar1;
                  }
                  if (iVar1 <= (int)psVar6[2] + (int)psVar7[2]) {
                    iVar1 = ((int)psVar6[1] +
                            ((int)((local_30 + ((uint)(local_30 >> 0xb) >> 0x14)) * 0x10) >> 0x10))
                            - ((int)psVar7[1] +
                              ((int)((local_3c + ((uint)(local_3c >> 0xb) >> 0x14)) * 0x10) >> 0x10)
                              );
                    if (iVar1 < 0) {
                      iVar1 = -iVar1;
                    }
                    if ((iVar1 <= (int)psVar6[3] + (int)psVar7[3]) &&
                       (iVar1 = FUN_0207acb8(param_1,iVar2,iVar3), iVar1 != 0)) {
                      *(undefined1 *)(iVar1 + 0x10) = 2;
                      *(char *)(iVar1 + 0x11) = (char)local_48;
                      *(char *)(iVar1 + 0x12) = (char)uVar8;
                      if (((*(byte *)(iVar2 + 0x18) & 0x80) != 0) ||
                         ((*(byte *)(iVar3 + 0x18) & 0x80) != 0)) {
                        *(byte *)(iVar1 + 0x10) = *(byte *)(iVar1 + 0x10) | 0x10;
                      }
                    }
                  }
                  psVar7 = psVar7 + 4;
                }
                psVar6 = psVar6 + 4;
              }
              iVar1 = FUN_0207acb8(param_1,iVar2,iVar3);
              if (iVar1 != 0) {
                *(undefined1 *)(iVar1 + 0x10) = 6;
                *(undefined1 *)(iVar1 + 0x11) = 0xff;
                *(undefined1 *)(iVar1 + 0x12) = 0xff;
                if (((*(byte *)(iVar2 + 0x18) & 0x80) != 0) ||
                   ((*(byte *)(iVar3 + 0x18) & 0x80) != 0)) {
                  *(byte *)(iVar1 + 0x10) = *(byte *)(iVar1 + 0x10) | 0x10;
                }
              }
            }
          }
        }
      }
    }
    puVar9 = puVar9 + 2;
    local_4c = local_4c + 1;
  } while (local_4c < 0x10);
  return;
}

