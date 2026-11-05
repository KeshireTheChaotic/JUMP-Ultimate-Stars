
void FUN_02059dd0(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = OS_DisableInterrupts();
  if (*(short *)(param_1 + (uint)*(ushort *)(param_1 + 0x808) * 0x200) != 0) {
    OS_RestoreInterrupts();
    return;
  }
  uVar1 = FUN_02057a54();
  uVar5 = (uint)*(ushort *)(param_1 + 0x808);
  uVar3 = uVar5 + 1 & 3;
  if (*(short *)(param_1 + 0x818) == 1) {
    uVar6 = uVar3 + 1 & 3;
  }
  else {
    uVar6 = uVar3;
  }
  MIi_CpuClear16(0,param_1 + uVar6 * 0x200,0x200);
  *(ushort *)(param_1 + uVar6 * 0x200) = *(ushort *)(param_1 + 0x80e) & (uVar1 | 1);
  *(short *)(param_1 + 0x808) = (short)uVar3;
  iVar4 = uVar5 * 0x200;
  *(undefined2 *)(param_1 + iVar4) = *(undefined2 *)(param_1 + 0x80e);
  if (param_2 == 1) {
    *(ushort *)(param_1 + iVar4) = *(ushort *)(param_1 + iVar4) & 0xfffe;
  }
  OS_RestoreInterrupts(uVar2);
  iVar4 = FUN_020596e8(FUN_0205a2f4,param_1,param_1 + uVar5 * 0x200,*(undefined2 *)(param_1 + 0x814)
                       ,*(ushort *)(param_1 + 0x80e) & uVar1,*(undefined2 *)(param_1 + 0x816),1);
  if (iVar4 == 7) {
    *(undefined2 *)(param_1 + uVar5 * 2 + 0x800) = 0xffff;
    *(ushort *)(param_1 + 0x80a) = *(short *)(param_1 + 0x80a) + 1U & 3;
    return;
  }
  if (iVar4 == 0) {
    return;
  }
  if (iVar4 != 2) {
    *(undefined2 *)(param_1 + 0x81c) = 5;
  }
  return;
}

