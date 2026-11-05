
void FUN_0217c508(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint extraout_r1;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int unaff_r4;
  int iVar9;
  int local_28 [4];
  
  switch(*(char *)(param_1 + 0x3e)) {
  case '\0':
    if (*(byte *)(param_1 + 0x42) < *(byte *)(*(int *)(param_1 + 0x2c) + 0xe)) {
      uVar7 = 0;
      *(uint *)(**(int **)(param_1 + 0x24) + 0xa8) =
           *(uint *)(**(int **)(param_1 + 0x24) + 0xa8) | 0x400;
      *(undefined1 *)(param_1 + 0x47) = 0;
      for (puVar8 = *(undefined4 **)(*(int *)(param_1 + 0x24) + 0x14); puVar8 != (undefined4 *)0x0;
          puVar8 = (undefined4 *)*puVar8) {
        uVar4 = *(uint *)(puVar8[2] + 0xa8);
        if (((uVar4 & 0x400) == 0) && ((uVar4 & 0x800) != 0)) {
          local_28[uVar7] = puVar8[2];
          uVar7 = uVar7 + 1 & 0xff;
        }
      }
      if (uVar7 != 0) {
        uVar2 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
        FUN_0200d338(uVar2,uVar7);
        iVar9 = local_28[extraout_r1 & 0xff];
        iVar6 = FUN_02174ebc(iVar9,0xc,0);
        if (iVar6 != 0) {
          FUN_02028330(*(undefined4 *)(*(int *)(iVar9 + 0x30) + 4));
          *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) | (byte)(1 << (extraout_r1 & 0xff));
        }
      }
      if (*(char *)(param_1 + 0x47) == '\0') {
        *(undefined1 *)(param_1 + 0x3e) = 10;
      }
      else {
        *(char *)(param_1 + 0x3e) = *(char *)(param_1 + 0x3e) + '\x01';
      }
    }
    else {
      FUN_0217aa58();
      *(undefined1 *)(param_1 + 0x105) = 1;
    }
    break;
  case '\x01':
    goto LAB_0217c668;
  case '\x02':
LAB_0217c668:
    uVar7 = 0;
    for (puVar8 = *(undefined4 **)(*(int *)(param_1 + 0x24) + 0x14); puVar8 != (undefined4 *)0x0;
        puVar8 = (undefined4 *)*puVar8) {
      if ((((uint)*(byte *)(param_1 + 0x47) & 1 << (uVar7 & 0xff)) != 0) &&
         ((*(uint *)(puVar8[2] + 0x6c) & 1 << (uint)*(byte *)(param_1 + 0x38)) != 0)) {
        *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) | (byte)((1 << (uVar7 & 0xff)) << 4);
      }
      uVar7 = uVar7 + 1;
    }
    *(char *)(param_1 + 0x3e) = *(char *)(param_1 + 0x3e) + '\x01';
    break;
  case '\x03':
    uVar7 = 0;
    for (puVar8 = *(undefined4 **)(*(int *)(param_1 + 0x24) + 0x14); puVar8 != (undefined4 *)0x0;
        puVar8 = (undefined4 *)*puVar8) {
      if (((uint)*(byte *)(param_1 + 0x47) & 1 << (uVar7 & 0xff)) != 0) {
        iVar6 = puVar8[2];
        FUN_02174f24(iVar6);
        FUN_020282f4(*(undefined4 *)(*(int *)(iVar6 + 0x30) + 4));
      }
      uVar7 = uVar7 + 1;
    }
    if ((*(byte *)(param_1 + 0x47) & 0xf0) == 0) {
      FUN_0217aa58(param_1);
      *(undefined1 *)(param_1 + 0x105) = 1;
    }
    else {
      *(char *)(param_1 + 0x3e) = *(char *)(param_1 + 0x3e) + '\x01';
    }
    break;
  case '\x04':
    if (*(char *)(*(int *)(param_1 + 0x20) + 0xf3) != '\0') {
      uVar7 = *(uint *)(*(int *)(param_1 + 0x2c) + 0x38) & 3;
      while (((uint)*(byte *)(param_1 + 0x47) & (1 << uVar7) << 4) == 0) {
        uVar7 = uVar7 + 1 & 0xff;
        if (3 < uVar7) {
          uVar7 = uVar7 - 4 & 0xff;
        }
      }
      uVar4 = 0;
      for (puVar8 = *(undefined4 **)(*(int *)(param_1 + 0x24) + 0x14); puVar8 != (undefined4 *)0x0;
          puVar8 = (undefined4 *)*puVar8) {
        if (uVar7 == (uVar4 & 0xff)) {
          unaff_r4 = puVar8[2];
          break;
        }
        uVar4 = uVar4 + 1;
      }
      bVar1 = *(byte *)(unaff_r4 + 0xc3);
      iVar6 = *(int *)(param_1 + 0x18);
      *(ushort *)(iVar6 + 0xc) = (ushort)*(byte *)(unaff_r4 + 0xc2);
      *(ushort *)(iVar6 + 0xe) = (ushort)bVar1;
      *(undefined1 *)(iVar6 + 0x10) = 1;
      *(undefined1 *)(iVar6 + 0x11) = 4;
      *(char *)(param_1 + 0x42) = *(char *)(param_1 + 0x42) + '\x01';
      *(char *)(param_1 + 0x3e) = *(char *)(param_1 + 0x3e) + '\x01';
    }
    break;
  case '\x05':
    goto LAB_0217c7f4;
  case '\x06':
    goto LAB_0217c7f4;
  case '\a':
LAB_0217c7f4:
    *(char *)(param_1 + 0x3e) = *(char *)(param_1 + 0x3e) + '\x01';
    break;
  case '\b':
    *(undefined1 *)(param_1 + 0x3e) = 0;
    break;
  case '\t':
    break;
  case '\n':
    iVar6 = 0;
    for (puVar8 = *(undefined4 **)(*(int *)(param_1 + 0x24) + 0x14); puVar8 != (undefined4 *)0x0;
        puVar8 = (undefined4 *)*puVar8) {
      if (*(char *)(param_1 + 0x51) == iVar6) {
        unaff_r4 = puVar8[2];
        FUN_02028330(*(undefined4 *)(*(int *)(unaff_r4 + 0x30) + 4));
        break;
      }
      iVar6 = (iVar6 + 1) * 0x1000000 >> 0x18;
    }
    iVar6 = FUN_02174f4c(unaff_r4);
    iVar9 = 0;
    do {
      iVar5 = unaff_r4 + iVar9 * 0x10;
      iVar3 = *(int *)(iVar5 + 0x44);
      if (iVar3 < 1) {
        iVar3 = *(int *)(iVar5 + 0x48);
      }
      if (0 < iVar3) {
        FUN_02174ebc(unaff_r4,(iVar6 + -3) * 2 + 0xd + iVar9,iVar9);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 2);
    *(char *)(param_1 + 0x3e) = *(char *)(param_1 + 0x3e) + '\x01';
    break;
  case '\v':
    goto LAB_0217c8b0;
  case '\f':
LAB_0217c8b0:
    iVar6 = 0;
    puVar8 = *(undefined4 **)(*(int *)(param_1 + 0x24) + 0x14);
    while( true ) {
      if (puVar8 == (undefined4 *)0x0) goto LAB_0217c920;
      if (*(char *)(param_1 + 0x51) == iVar6) break;
      puVar8 = (undefined4 *)*puVar8;
      iVar6 = (iVar6 + 1) * 0x1000000 >> 0x18;
    }
    iVar6 = puVar8[2];
    uVar7 = 0;
    do {
      if ((*(uint *)(iVar6 + uVar7 * 4 + 0x6c) & 1 << (uint)*(byte *)(param_1 + 0x38)) != 0) {
        *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) | (byte)((1 << (uVar7 & 0xff)) << 4);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < 2);
LAB_0217c920:
    *(char *)(param_1 + 0x3e) = *(char *)(param_1 + 0x3e) + '\x01';
    return;
  case '\r':
    if ((*(byte *)(param_1 + 0x47) & 0xf0) == 0) {
      FUN_0217aa58();
      *(undefined1 *)(param_1 + 0x105) = 1;
    }
    else {
      iVar6 = 0;
      for (puVar8 = *(undefined4 **)(*(int *)(param_1 + 0x24) + 0x14); puVar8 != (undefined4 *)0x0;
          puVar8 = (undefined4 *)*puVar8) {
        if (*(char *)(param_1 + 0x51) == iVar6) {
          iVar6 = puVar8[2];
          FUN_02174f24(iVar6);
          FUN_020282f4(*(undefined4 *)(*(int *)(iVar6 + 0x30) + 4));
          break;
        }
        iVar6 = (iVar6 + 1) * 0x1000000 >> 0x18;
      }
      *(char *)(param_1 + 0x3e) = *(char *)(param_1 + 0x3e) + '\x01';
    }
    break;
  case '\x0e':
    if (*(char *)(*(int *)(param_1 + 0x20) + 0xf3) != '\0') {
      uVar7 = *(uint *)(*(int *)(param_1 + 0x2c) + 0x38) & 1;
      while (((uint)*(byte *)(param_1 + 0x47) & (1 << uVar7) << 4) == 0) {
        uVar7 = uVar7 + 1 & 0xff;
        if (1 < uVar7) {
          uVar7 = uVar7 - 2 & 0xff;
        }
      }
      iVar6 = 0;
      for (puVar8 = *(undefined4 **)(*(int *)(param_1 + 0x24) + 0x14); puVar8 != (undefined4 *)0x0;
          puVar8 = (undefined4 *)*puVar8) {
        if (*(char *)(param_1 + 0x51) == iVar6) {
          unaff_r4 = puVar8[2];
          break;
        }
        iVar6 = (iVar6 + 1) * 0x1000000 >> 0x18;
      }
      if (uVar7 != 0) {
        *(uint *)(**(int **)(param_1 + 0x14) + 0xe4) =
             *(uint *)(**(int **)(param_1 + 0x14) + 0xe4) | 1;
      }
      bVar1 = *(byte *)(unaff_r4 + 0xc3);
      iVar6 = *(int *)(param_1 + 0x18);
      *(ushort *)(iVar6 + 0xc) = (ushort)*(byte *)(unaff_r4 + 0xc2);
      *(ushort *)(iVar6 + 0xe) = (ushort)bVar1;
      *(undefined1 *)(iVar6 + 0x10) = 1;
      *(undefined1 *)(iVar6 + 0x11) = 4;
      *(char *)(param_1 + 0x3e) = *(char *)(param_1 + 0x3e) + '\x01';
    }
    break;
  case '\x0f':
    goto LAB_0217ca78;
  case '\x10':
LAB_0217ca78:
    *(uint *)(**(int **)(param_1 + 0x14) + 0xe4) =
         *(uint *)(**(int **)(param_1 + 0x14) + 0xe4) & 0xfffffffe;
    *(char *)(param_1 + 0x3e) = *(char *)(param_1 + 0x3e) + '\x01';
    break;
  case '\x11':
    FUN_0217aa58();
    *(undefined1 *)(param_1 + 0x105) = 1;
  }
  return;
}

