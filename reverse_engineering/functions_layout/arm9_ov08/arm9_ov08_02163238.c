
void FUN_02163238(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 * 4;
  uVar1 = FUN_02165d64(*(undefined4 *)(DAT_0216e804 + iVar3 + 8),0);
  FUN_02166014(0,(byte)(&DAT_0216ae54)[param_1 + (uint)*(byte *)(DAT_0216e804 + 0x1c) * 2] + 1,uVar1
              );
  iVar2 = (uint)*(byte *)(DAT_0216e804 + 0x1c) * 8;
  FUN_02165bc4(*(undefined4 *)(DAT_0216e804 + iVar3 + 8),0xffffffff,
               *(undefined2 *)
                ((uint)(byte)(&DAT_0216ae3c)[param_1 + (uint)*(byte *)(DAT_0216e804 + 0x1c) * 2] * 4
                + iVar2 + 0x216aebc),
               *(undefined2 *)
                ((uint)(byte)(&DAT_0216ae3c)[param_1 + (uint)*(byte *)(DAT_0216e804 + 0x1c) * 2] * 4
                + iVar2 + 0x216aebe));
  FUN_02165b80(*(undefined4 *)(DAT_0216e804 + iVar3 + 8),0xffffffff);
  return;
}

