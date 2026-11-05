
void FUN_0217a608(int param_1)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  undefined4 uVar8;
  uint uVar9;
  bool bVar10;
  char local_b0 [16];
  int local_a0 [16];
  int local_60 [16];
  
  (*(code *)(&PTR_FUN_02181980)[*(byte *)(param_1 + 0x39)])();
  switch(*(char *)(param_1 + 0x40)) {
  case '\0':
    break;
  case '\x01':
    if (*(char *)(param_1 + 0x39) == '\x05') {
      iVar5 = FUN_02179130(*(undefined4 *)(param_1 + 0x2c),0x1d);
      if (iVar5 == 0) {
        *(undefined1 *)(param_1 + 0x40) = 0;
      }
      else if (*(char *)(*(int *)(param_1 + 0x24) + 0x36) == '\0') {
        *(undefined1 *)(param_1 + 0x40) = 0;
      }
      else {
        iVar5 = FUN_02179130(*(undefined4 *)(param_1 + 0x2c),0x1a);
        if (iVar5 == 0) {
          iVar5 = FUN_0217ab28(*(undefined4 *)(param_1 + 0x2c),0x12);
          if (iVar5 == 0) {
            uVar9 = 0;
            puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x24) + 0x1c);
            while (puVar4 != (undefined4 *)0x0) {
              iVar5 = puVar4[2];
              cVar3 = FUN_02174f4c(iVar5);
              puVar4 = (undefined4 *)*puVar4;
              if ((*(uint *)(iVar5 + 0x68) &
                  (1 << (uint)(byte)(cVar3 + 0xd) | 1 << (uint)(byte)(cVar3 + 0xb) |
                  1 << (uint)(byte)(cVar3 + 0xf))) == 0) {
                local_a0[uVar9] = iVar5;
                local_b0[uVar9] = cVar3;
                uVar9 = uVar9 + 1 & 0xff;
              }
            }
            if (uVar9 != 0) {
              uVar8 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
              FUN_0200d338(uVar8,uVar9);
              iVar5 = local_a0[extraout_r1 & 0xff];
              FUN_02028330(*(undefined4 *)(*(int *)(iVar5 + 0x30) + 4));
              FUN_02174ebc(iVar5,local_b0[extraout_r1 & 0xff],0);
            }
          }
          *(char *)(param_1 + 0x40) = *(char *)(param_1 + 0x40) + '\x01';
        }
        else {
          *(undefined1 *)(param_1 + 0x40) = 0;
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x40) = 0;
    }
    break;
  case '\x02':
    goto LAB_0217a7bc;
  case '\x03':
    goto LAB_0217a7bc;
  case '\x04':
LAB_0217a7bc:
    iVar5 = 0;
    iVar6 = 0;
    if (*(char *)(param_1 + 0x38) < '\0') {
      *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_1 + 0x107);
    }
    do {
      local_60[iVar6] = 0;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x10);
    puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x24) + 0x1c);
    while (puVar4 != (undefined4 *)0x0) {
      piVar1 = puVar4 + 2;
      puVar4 = (undefined4 *)*puVar4;
      if ((*(uint *)(*piVar1 + 0x6c) & 1 << (uint)*(byte *)(param_1 + 0x38)) != 0) {
        local_60[iVar5] = *piVar1;
        iVar5 = (iVar5 + 1) * 0x10000 >> 0x10;
      }
    }
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      FUN_0200d338(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x38));
      iVar5 = local_60[extraout_r1_00];
    }
    if (iVar5 == 0) {
      *(char *)(param_1 + 0x40) = *(char *)(param_1 + 0x40) + '\x01';
    }
    else {
      bVar2 = *(byte *)(iVar5 + 0xc3);
      iVar6 = *(int *)(param_1 + 0x18);
      *(ushort *)(iVar6 + 0xc) = (ushort)*(byte *)(iVar5 + 0xc2);
      *(ushort *)(iVar6 + 0xe) = (ushort)bVar2;
      *(undefined1 *)(iVar6 + 0x10) = 1;
      *(undefined1 *)(iVar6 + 0x11) = 4;
      *(undefined2 *)(param_1 + 0x3c) = 0;
      *(undefined1 *)(param_1 + 0x40) = 5;
    }
    break;
  case '\x05':
    for (puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x24) + 0x1c); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)*puVar4) {
      iVar5 = puVar4[2];
      FUN_020282f4(*(undefined4 *)(*(int *)(iVar5 + 0x30) + 4));
      FUN_02174f24(iVar5);
    }
    *(undefined1 *)(param_1 + 0x40) = 0;
    break;
  case '\x06':
    break;
  case '\a':
    break;
  case '\b':
    break;
  case '\t':
    break;
  case '\n':
    break;
  case '\v':
    break;
  case '\f':
    break;
  case '\r':
    break;
  case '\x0e':
    break;
  case '\x0f':
    break;
  case '\x10':
    if (*(char *)(*(int *)(param_1 + 0x24) + 0x36) == '\0') {
      *(undefined1 *)(param_1 + 0x40) = 0;
    }
    else {
      *(char *)(param_1 + 0x40) = *(char *)(param_1 + 0x40) + '\x01';
    }
    break;
  case '\x11':
    iVar6 = *(int *)(param_1 + 0x24);
    iVar5 = 0;
    FUN_0200d338(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x38),*(undefined1 *)(iVar6 + 0x39));
    for (puVar4 = *(undefined4 **)(iVar6 + 0x1c); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)*puVar4) {
      if (extraout_r1_01 == 0) {
        iVar5 = puVar4[2];
        break;
      }
    }
    if (iVar5 != 0) {
      bVar2 = *(byte *)(iVar5 + 0xc3);
      iVar6 = *(int *)(param_1 + 0x18);
      *(ushort *)(iVar6 + 0xc) = (ushort)*(byte *)(iVar5 + 0xc2);
      *(ushort *)(iVar6 + 0xe) = (ushort)bVar2;
      *(undefined1 *)(iVar6 + 0x10) = 1;
      *(undefined1 *)(iVar6 + 0x11) = 4;
      *(undefined2 *)(param_1 + 0x3c) = 0;
    }
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  iVar5 = FUN_0217bfe0(param_1);
  if (iVar5 != 0) {
    iVar5 = (int)*(char *)(param_1 + 0x3a);
    uVar8 = *(undefined4 *)(**(int **)(param_1 + 0x24) + 0xc);
    if ((0xc < iVar5) && (((iVar5 + -0xd) * 0x1000000 >> 0x18 & 0xffU) < 2)) {
      iVar6 = FUN_02174f4c();
      iVar5 = (iVar5 + (iVar6 + -3) * 2) * 0x1000000 >> 0x18;
    }
    if ((iVar5 < 1) || (0x17 < iVar5)) {
      bVar10 = false;
    }
    else {
      uVar7 = FUN_021733b4(iVar5);
      iVar5 = FUN_0217b7cc(uVar8,uVar7);
      if (iVar5 == 0) {
        bVar10 = false;
      }
      else if (*(char *)(iVar5 + 0x94) == '\0') {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
    }
    cVar3 = '\0';
    if (bVar10) {
      cVar3 = *(char *)(param_1 + 0x39);
    }
    if (bVar10 && cVar3 != '\t') {
      *(undefined1 *)(param_1 + 0x39) = 9;
      *(undefined1 *)(param_1 + 0x3e) = 0;
    }
    else {
      bVar10 = *(short *)(*(int *)(param_1 + 0x20) + 0xcc) != 0;
      cVar3 = '\0';
      if (bVar10) {
        cVar3 = *(char *)(param_1 + 0x39);
      }
      if (bVar10 && cVar3 != '\n') {
        *(undefined1 *)(param_1 + 0x39) = 10;
        *(undefined1 *)(param_1 + 0x3e) = 0;
      }
    }
  }
  return;
}

