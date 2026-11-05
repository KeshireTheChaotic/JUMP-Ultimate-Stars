
void FUN_0217ea00(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  
  iVar2 = FUN_02175628(*(undefined4 *)(param_1 + 0x1c));
  uVar5 = *(uint *)(param_1 + 0xd4);
  uVar3 = *(uint *)(*(int *)(iVar2 + 4) + 0x10);
  bVar1 = false;
  uVar7 = 0;
  iVar2 = uVar3 + 0xa8;
  uVar6 = 0x100;
  do {
    bVar8 = uVar5 >> 0x1c != uVar7;
    if (bVar8) {
      uVar3 = *(uint *)(iVar2 + 0x24);
    }
    if (bVar8 && uVar3 != 0) {
      iVar4 = FUN_0217e9c4();
      if (iVar4 == 0) {
LAB_0217ea88:
        uVar9 = FUN_0217e9d8(*(undefined4 *)(iVar2 + 0x24));
        iVar4 = (int)((ulonglong)uVar9 >> 0x20);
        bVar8 = (int)uVar9 != 0;
        uVar3 = 0;
        if (bVar8) {
          param_3 = *(int *)(*(int *)(iVar2 + 0x24) + 4);
          iVar4 = *(int *)(param_3 + 0x10);
          uVar3 = (uint)*(byte *)(iVar4 + 0xc);
        }
        if (bVar8 && uVar3 != 0) {
          bVar1 = true;
          uVar3 = (int)*(short *)(iVar4 + 0xb0) - (uint)*(ushort *)(param_3 + 0xbe);
          if ((-1 < (int)uVar3) && ((int)uVar3 < (int)uVar6)) {
            uVar6 = uVar3;
          }
        }
      }
      else {
        param_3 = **(int **)(iVar2 + 0x24);
        uVar3 = 0;
        if (*(char *)(*(int *)(param_3 + 0x10) + 0xc) != '\0') {
          bVar1 = true;
          uVar3 = (int)*(short *)(*(int *)(param_3 + 0x10) + 0xb0) -
                  (uint)*(ushort *)(param_3 + 0xbe);
          if (-1 < (int)uVar3) {
            if ((int)uVar3 < (int)uVar6) {
              uVar6 = uVar3;
            }
            goto LAB_0217ea88;
          }
        }
      }
    }
    uVar7 = uVar7 + 1;
    iVar2 = iVar2 + 0x10c;
    if (3 < (int)uVar7) {
      iVar2 = **(int **)(param_1 + 0x14);
      if (!bVar1) {
        *(undefined1 *)(param_1 + 0x105) = 1;
        *(undefined1 *)(param_1 + 0x7c) = 0;
        *(undefined1 *)(param_1 + 0x7d) = 0;
        *(undefined4 *)(iVar2 + 0xe4) = 0;
        return;
      }
      iVar4 = FUN_021733dc(param_1);
      if (iVar4 != 0) {
        return;
      }
      *(undefined4 *)(iVar2 + 0xe4) = 2;
      *(undefined4 *)(iVar2 + 0xe8) = 0;
      iVar4 = FUN_02179130(*(undefined4 *)(param_1 + 0x2c),0x23);
      if (iVar4 == 0) {
        return;
      }
      if (*(char *)(*(int *)(param_1 + 0x20) + 0x18) != '\x03') {
        return;
      }
      if (((int)uVar6 < 10) && (*(char *)(*(int *)(param_1 + 0x20) + 0x1e7) == '\0')) {
        *(uint *)(iVar2 + 0xe4) = *(uint *)(iVar2 + 0xe4) | 0x40;
      }
      if (*(char *)(*(int *)(param_1 + 0x20) + 0x1e7) != '\0') {
        *(uint *)(iVar2 + 0xe4) = *(uint *)(iVar2 + 0xe4) & 0xffffffbf;
      }
      return;
    }
  } while( true );
}

