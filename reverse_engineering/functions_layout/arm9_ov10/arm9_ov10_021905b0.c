
void FUN_021905b0(undefined4 param_1,int param_2,int param_3,byte param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  
  if (*(char *)(param_3 + 8) != '\0') {
    if (DAT_020aab78 == &DAT_021a8794) {
      puVar5 = &DAT_021a8592;
    }
    else {
      puVar5 = (ushort *)(*(int *)(param_3 + 0x4c) + 0x22);
    }
    if ((param_4 & 2) == 0) {
      uVar6 = 0x14;
    }
    else {
      uVar6 = 0x18;
    }
    puVar5[-6] = (ushort)(byte)(DAT_021a8538 >> 0x18) | (ushort)((DAT_021a8538 >> 0x10) << 8);
    puVar5[-5] = (ushort)((DAT_021a8538 & 0xffff) >> 8) | (ushort)((DAT_021a8538 & 0xffff) << 8);
    puVar5[-4] = (ushort)(byte)(*(uint *)(param_3 + 0x1c) >> 0x18) |
                 (ushort)((*(uint *)(param_3 + 0x1c) >> 0x10) << 8);
    uVar4 = *(uint *)(param_3 + 0x1c) & 0xffff;
    puVar5[-3] = (ushort)(uVar4 >> 8) | (ushort)(uVar4 << 8);
    puVar5[-2] = 0x600;
    uVar4 = uVar6 + param_2 & 0xffff;
    puVar5[-1] = (ushort)(uVar4 >> 8) | (ushort)(uVar4 << 8);
    *puVar5 = *(ushort *)(param_3 + 10) >> 8 | *(ushort *)(param_3 + 10) << 8;
    puVar5[1] = *(ushort *)(param_3 + 0x18) >> 8 | *(ushort *)(param_3 + 0x18) << 8;
    puVar5[2] = (ushort)(byte)(*(uint *)(param_3 + 0x28) >> 0x18) |
                (ushort)((*(uint *)(param_3 + 0x28) >> 0x10) << 8);
    uVar4 = *(uint *)(param_3 + 0x28) & 0xffff;
    puVar5[3] = (ushort)(uVar4 >> 8) | (ushort)(uVar4 << 8);
    puVar5[4] = (ushort)(byte)(*(uint *)(param_3 + 0x24) >> 0x18) |
                (ushort)((*(uint *)(param_3 + 0x24) >> 0x10) << 8);
    uVar4 = *(uint *)(param_3 + 0x24) & 0xffff;
    puVar5[5] = (ushort)(uVar4 >> 8) | (ushort)(uVar4 << 8);
    *(char *)(puVar5 + 6) = (char)((uVar6 >> 2) << 4);
    *(byte *)((int)puVar5 + 0xd) = param_4;
    uVar4 = *(int *)(param_3 + 0x3c) - *(int *)(param_3 + 0x44) & 0xffff;
    puVar5[7] = (ushort)(uVar4 >> 8) | (ushort)(uVar4 << 8);
    puVar5[8] = 0;
    puVar5[9] = 0;
    if ((param_4 & 2) != 0) {
      puVar5[10] = (ushort)(byte)((uint)(FUN_02040000 + DAT_021a84e4) >> 0x18) |
                   (ushort)(((uint)(FUN_02040000 + DAT_021a84e4) >> 0x10) << 8);
      puVar5[0xb] = DAT_021a84e4 >> 8 | DAT_021a84e4 << 8;
    }
    uVar2 = FUN_02191234(puVar5 + -6,uVar6 + 0xc,0);
    uVar1 = FUN_02191234(param_1,param_2,uVar2);
    iVar3 = FUN_02191220(uVar1);
    puVar5[8] = (ushort)((uint)iVar3 >> 8) | (ushort)(iVar3 << 8);
    FUN_021908ac(puVar5,uVar6,param_1,param_2,*(undefined4 *)(param_3 + 0x1c),6);
    *(int *)(param_3 + 0x28) = *(int *)(param_3 + 0x28) + param_2;
    if ((param_4 & 3) != 0) {
      *(int *)(param_3 + 0x28) = *(int *)(param_3 + 0x28) + 1;
    }
  }
  return;
}

