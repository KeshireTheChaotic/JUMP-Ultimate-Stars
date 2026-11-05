
void FUN_0217abbc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int extraout_r1;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 local_38 [24];
  undefined4 uStack_20;
  
  uStack_20 = param_4;
  if (*(char *)(param_1 + 0x38) < '\0') {
    FUN_0217aa58();
    *(undefined1 *)(param_1 + 0x105) = 1;
  }
  else {
    iVar2 = FUN_02175628(*(undefined4 *)(param_1 + 0x1c));
    iVar7 = *(char *)(param_1 + 0x38) * 0x10c + *(int *)(*(int *)(iVar2 + 4) + 0x10) + 0xa8;
    *(undefined1 *)(param_1 + 0x3a) = 0;
    iVar2 = FUN_0217335c(param_1);
    if (iVar2 != 0) {
      iVar2 = FUN_021733dc(iVar7);
      if (iVar2 == 0) {
        iVar2 = FUN_0217ab28(*(undefined4 *)(param_1 + 0x2c),6);
        bVar10 = iVar2 != 0;
        if (!bVar10) {
          iVar2 = (int)*(char *)(*(int *)(iVar7 + 0x20) + 0x18);
        }
        if (((bVar10 || iVar2 != 3) ||
            (0x50 < *(int *)(param_1 + *(char *)(param_1 + 0x38) * 4 + 0xdc))) ||
           (iVar2 = FUN_0217b078(*(undefined4 *)(param_1 + 0x2c),*(undefined1 *)(param_1 + 0x104)),
           iVar2 == 0)) {
          iVar2 = FUN_0217ab28(*(undefined4 *)(param_1 + 0x2c),8);
          if (iVar2 == 0) {
            bVar1 = *(byte *)(*(int *)(param_1 + 0x24) + 0x3c);
            bVar10 = 1 < bVar1;
            if (bVar10) {
              bVar1 = *(byte *)(*(int *)(param_1 + 0x24) + 0x36);
            }
            if (bVar10 && bVar1 != 0) {
              uVar5 = (int)((*(byte *)(param_1 + 0x104) - 5) * 0x1000000) >> 0x18;
              if ((int)uVar5 < 0) {
                uVar5 = 0;
              }
              iVar2 = FUN_0217b078(*(undefined4 *)(param_1 + 0x2c),uVar5 & 0xff);
              if (iVar2 != 0) {
                for (puVar6 = *(undefined4 **)(*(int *)(param_1 + 0x24) + 0x14);
                    puVar6 != (undefined4 *)0x0; puVar6 = (undefined4 *)*puVar6) {
                  *(uint *)(puVar6[2] + 0xa8) = *(uint *)(puVar6[2] + 0xa8) & 0xfffffbff;
                }
                *(undefined1 *)(param_1 + 0x3a) = 0xc;
                FUN_02174ebc(**(undefined4 **)(param_1 + 0x24),0xc,0);
                *(char *)(param_1 + 0x39) = *(char *)(param_1 + 0x39) + '\x01';
                return;
              }
            }
          }
          uVar5 = *(uint *)(*(int *)(param_1 + 0x2c) + 0x38);
          if ((uVar5 & 3) == 0) {
            *(undefined4 *)(param_1 + 0x48) = 0;
            if (*(byte *)(param_1 + 0x10a) < 0xa1) {
              if (*(byte *)(param_1 + 0x10a) < 0x51) {
                uVar5 = FUN_0217b0a8(*(undefined4 *)(param_1 + 0x24));
                *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | uVar5;
                uVar5 = FUN_0217b0c0(*(undefined4 *)(param_1 + 0x24),0);
                *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | uVar5;
                uVar9 = FUN_0217b0d8(*(undefined4 *)(param_1 + 0x24),0);
                uVar5 = 0;
                *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | uVar9;
              }
              else {
                uVar5 = FUN_0217b0a8(*(undefined4 *)(param_1 + 0x24),1);
                *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | uVar5;
                uVar5 = FUN_0217b0c0(*(undefined4 *)(param_1 + 0x24),1);
                *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | uVar5;
                uVar9 = FUN_0217b0d8(*(undefined4 *)(param_1 + 0x24),1);
                uVar5 = 1;
                *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | uVar9;
              }
            }
            else {
              uVar5 = FUN_0217b0a8(*(undefined4 *)(param_1 + 0x24),2);
              *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | uVar5;
              uVar5 = FUN_0217b0c0(*(undefined4 *)(param_1 + 0x24),2);
              *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | uVar5;
              uVar9 = FUN_0217b0d8(*(undefined4 *)(param_1 + 0x24),2);
              uVar5 = 2;
              *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | uVar9;
            }
            uVar9 = *(uint *)(param_1 + 0x48) & 0x7e;
            *(uint *)(param_1 + 0x48) = uVar9;
            if (uVar9 == 0) {
              uVar9 = 0;
              do {
                uVar5 = uVar5 - 1;
                if (0x7fffffff < uVar5) break;
                uVar9 = FUN_0217b0a8(*(undefined4 *)(param_1 + 0x24),uVar5 & 0xff);
                *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | uVar9;
                uVar9 = FUN_0217b0c0(*(undefined4 *)(param_1 + 0x24),uVar5 & 0xff);
                *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | uVar9;
                uVar9 = FUN_0217b0d8(*(undefined4 *)(param_1 + 0x24),uVar5 & 0xff);
                uVar9 = (*(uint *)(param_1 + 0x48) | uVar9) & 0x7e;
                *(uint *)(param_1 + 0x48) = uVar9;
              } while (uVar9 == 0);
              if (uVar9 == 0) {
                FUN_0217aa58(param_1);
                *(undefined1 *)(param_1 + 0x105) = 1;
                return;
              }
            }
            iVar2 = FUN_0217ab28(*(undefined4 *)(param_1 + 0x2c),0);
            if (iVar2 != 0) {
              *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xffffffd5;
            }
            iVar2 = FUN_0217ab28(*(undefined4 *)(param_1 + 0x2c),1);
            if (iVar2 != 0) {
              *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xffffffab;
            }
            uVar5 = *(uint *)(param_1 + 0x48);
            if (uVar5 == 0) {
              FUN_0217aa58(param_1);
              *(undefined1 *)(param_1 + 0x105) = 1;
              return;
            }
            uVar8 = 0;
            uVar9 = 0;
            do {
              if ((uVar5 & 1 << (uVar9 & 0xff)) != 0) {
                local_38[uVar8] = (char)uVar9;
                uVar8 = uVar8 + 1 & 0xff;
              }
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < 0x18);
            if (uVar8 != 0) {
              uVar4 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
              FUN_0200d338(uVar4,uVar8);
              FUN_02174ebc(**(undefined4 **)(param_1 + 0x24),local_38[extraout_r1],0);
            }
          }
          else {
            uVar9 = 0;
            for (iVar2 = 0; iVar7 = iVar2 * 3, -1 < (char)(&DAT_02181438)[iVar7]; iVar2 = iVar2 + 1)
            {
              uVar9 = uVar9 + *(byte *)(*(int *)(param_1 + 0x2c) + (int)(char)(&DAT_0218143a)[iVar7]
                                       + 8);
              iVar3 = FUN_0217ab28(*(int *)(param_1 + 0x2c),(int)(char)(&DAT_02181439)[iVar7]);
              if ((iVar3 == 0) && ((uVar5 >> 1 & 0xff) <= uVar9)) {
                if ((&DAT_02181438)[iVar7] == '\x7f') {
                  *(undefined1 *)(param_1 + 0x40) = 0x10;
                  *(undefined1 *)(param_1 + 0x3a) = 0;
                }
                else {
                  *(undefined1 *)(param_1 + 0x3a) = (&DAT_02181438)[iVar7];
                }
                break;
              }
            }
            if (*(char *)(param_1 + 0x3a) != '\0') {
              FUN_02174ebc(**(undefined4 **)(param_1 + 0x24),*(char *)(param_1 + 0x3a),0);
            }
          }
          *(char *)(param_1 + 0x39) = *(char *)(param_1 + 0x39) + '\x01';
          *(undefined1 *)(param_1 + 0x3e) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x3a) = 8;
          FUN_02174ebc(**(undefined4 **)(param_1 + 0x24),8,0);
          *(char *)(param_1 + 0x39) = *(char *)(param_1 + 0x39) + '\x01';
        }
      }
      else {
        FUN_0217aa58(param_1);
        *(undefined1 *)(param_1 + 0x105) = 1;
      }
    }
  }
  return;
}

