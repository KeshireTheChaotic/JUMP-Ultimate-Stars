
void FUN_02059f44(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar3 = 1 << (param_2 & 0xff);
  uVar2 = uVar3 & 0xffff;
  if ((*(ushort *)(param_1 + 0x80e) & uVar2) == 0) {
    return;
  }
  uVar6 = (uint)*(ushort *)(param_1 + 0x808);
  if ((uVar2 & *(ushort *)(param_1 + uVar6 * 0x200)) == 0) {
    if (*(short *)(param_1 + 0x818) != 1) {
      return;
    }
    uVar6 = uVar6 + 1 & 3;
    if ((uVar2 & *(ushort *)(param_1 + uVar6 * 0x200)) == 0) {
      return;
    }
  }
  uVar5 = FUN_02059d28(param_1,(uint)*(ushort *)(param_1 + 0x80e),param_1 + uVar6 * 0x200 + 4);
  if (param_3 == 0) {
    MIi_CpuClear16(0,uVar5,*(undefined2 *)(param_1 + 0x810));
  }
  else {
    MIi_CpuCopy16(param_3,uVar5,*(undefined2 *)(param_1 + 0x810));
  }
  OS_DisableInterrupts();
  iVar1 = uVar6 * 0x200;
  uVar4 = (ushort)uVar3;
  *(ushort *)(param_1 + iVar1) = *(ushort *)(param_1 + iVar1) & ~uVar4;
  *(ushort *)(param_1 + 2 + iVar1) = *(ushort *)(param_1 + 2 + iVar1) | uVar4;
  OS_RestoreInterrupts();
  return;
}

