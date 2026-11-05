
void FUN_02190760(undefined4 param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(param_3 + 0x4c);
  *(ushort *)(iVar4 + 0x16) =
       (ushort)(byte)(DAT_021a8538 >> 0x18) | (ushort)((DAT_021a8538 >> 0x10) << 8);
  *(ushort *)(iVar4 + 0x18) =
       (ushort)((DAT_021a8538 & 0xffff) >> 8) | (ushort)((DAT_021a8538 & 0xffff) << 8);
  *(ushort *)(iVar4 + 0x1a) =
       (ushort)(byte)(*(uint *)(param_3 + 0x1c) >> 0x18) |
       (ushort)((*(uint *)(param_3 + 0x1c) >> 0x10) << 8);
  uVar5 = *(uint *)(param_3 + 0x1c) & 0xffff;
  *(ushort *)(iVar4 + 0x1c) = (ushort)(uVar5 >> 8) | (ushort)(uVar5 << 8);
  *(undefined2 *)(iVar4 + 0x1e) = 0x1100;
  uVar5 = param_2 + 8U & 0xffff;
  *(ushort *)(iVar4 + 0x26) = (ushort)(uVar5 >> 8) | (ushort)(uVar5 << 8);
  *(undefined2 *)(iVar4 + 0x20) = *(undefined2 *)(iVar4 + 0x26);
  *(ushort *)(iVar4 + 0x24) = *(ushort *)(param_3 + 0x18) >> 8 | *(ushort *)(param_3 + 0x18) << 8;
  *(ushort *)(iVar4 + 0x22) = *(ushort *)(param_3 + 10) >> 8 | *(ushort *)(param_3 + 10) << 8;
  *(undefined2 *)(iVar4 + 0x28) = 0;
  uVar2 = FUN_02191234(iVar4 + 0x16,0x14);
  uVar1 = FUN_02191234(param_1,param_2,uVar2);
  iVar3 = FUN_02191220(uVar1);
  *(ushort *)(iVar4 + 0x28) = (ushort)((uint)iVar3 >> 8) | (ushort)(iVar3 << 8);
  FUN_021908ac(iVar4 + 0x22,8,param_1,param_2,*(undefined4 *)(param_3 + 0x1c),0x11);
  return;
}

