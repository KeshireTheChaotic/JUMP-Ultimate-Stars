
void FUN_020769cc(int param_1,int param_2,uint param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int in_r12;
  undefined8 uVar13;
  
  FUN_02076c18();
  uVar11 = 0;
  uVar9 = 0;
  do {
    iVar4 = FUN_02076c98(param_1,(int)*(short *)(param_2 + uVar9 * 4));
    if ((iVar4 != 0) && (*(char *)(iVar4 + 6) == '\0')) {
      iVar4 = param_2 + uVar9 * 4;
      bVar2 = *(byte *)(iVar4 + 3);
      if ((bVar2 & 0x10) != 0) {
        uVar8 = (uint)*(byte *)(iVar4 + 2);
        param_3 = uVar8 & 0xf;
        FUN_02076e38(param_1,(int)*(short *)(param_2 + uVar9 * 4),param_3,(int)(uVar8 & 0xf0) >> 4,
                     bVar2,0);
        uVar11 = uVar11 | 1 << (uVar9 & 0xff);
      }
    }
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0x10);
  uVar9 = 0;
  do {
    uVar8 = 0;
    do {
      uVar10 = 4;
      do {
        uVar12 = 0;
        do {
          if ((uVar11 & 1 << (uVar12 & 0xff)) == 0) {
            uVar13 = FUN_02076c98(param_1,(int)*(short *)(param_2 + uVar12 * 4));
            uVar6 = (uint)((ulonglong)uVar13 >> 0x20);
            if ((int)uVar13 != 0) {
              uVar5 = (uint)*(byte *)((int)uVar13 + 6);
              uVar3 = uVar5;
              if (uVar5 == uVar9) {
                param_3 = param_2 + uVar12 * 4;
                uVar6 = (uint)*(byte *)(param_3 + 2);
                in_r12 = uVar12 << 2;
                uVar3 = uVar10 & 0xf | (uVar8 & 0xf) << 4;
              }
              if (uVar5 == uVar9 && uVar6 == uVar3) {
                puVar1 = (undefined1 *)(param_3 + 3);
                param_3 = uVar6 & 0xf;
                FUN_02076e38(param_1,(int)*(short *)(param_2 + in_r12),param_3,
                             (int)(uVar6 & 0xf0) >> 4,*puVar1,0);
                uVar11 = uVar11 | 1 << (uVar12 & 0xff);
              }
            }
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < 0x10);
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < 4);
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 3);
  puVar7 = *(undefined4 **)(param_1 + 0x558);
  if (puVar7 != (undefined4 *)0x0) {
    for (; puVar7 != (undefined4 *)0x0; puVar7 = (undefined4 *)*puVar7) {
      if (*(char *)(puVar7 + 0x10) == '\0') {
        FUN_02077e70(param_1);
        break;
      }
    }
  }
  FUN_02077aa8(param_1);
  FUN_02077610(param_1);
  FUN_020772e4(param_1);
  FUN_02077768(param_1);
  FUN_02051890(param_2 + 0x40,param_1 + 0x5fe,0x1a);
  *(byte *)(param_1 + 0x5f2) = *(byte *)(param_1 + 0x5f2) | 0x10;
  *(undefined1 *)(param_1 + 0x5cd) = 0x10;
  if (*(char *)(param_1 + 0x5cc) < *(char *)(param_1 + 0x5cd)) {
    *(char *)(param_1 + 0x5cd) = *(char *)(param_1 + 0x5cc);
  }
  return;
}

