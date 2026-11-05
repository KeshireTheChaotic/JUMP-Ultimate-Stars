
void FUN_02165d50(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
                    /* JUS-TAG source_file_inferred="BattleMapItem.cpp" */
  iVar1 = FUN_02165e70();
  if (iVar1 != 0) {
    if ((0x17 < *(byte *)(param_2 + 0x22)) && (*(byte *)(param_2 + 0x22) < 0x1e)) {
      FUN_0207342c(0x7a,0x39);
    }
    uVar3 = (uint)*(byte *)(param_2 + 0x22);
    if ((uVar3 < 0xa0) || (0xbf < uVar3)) {
      if ((int)*(char *)(*(int *)(param_2 + 0xc) + 0x153) == uVar3) {
        uVar2 = FUN_02166b14(param_1);
        FUN_02165e88(DAT_02172960,uVar2,2);
      }
    }
    else {
      iVar1 = (int)(uVar3 - 0xa0) / 2;
      if ((*(uint *)(*(int *)(param_1 + 0x10) + 0x158) & 1) != 0) {
        iVar4 = iVar1 * 3;
        *(ushort *)(&DAT_020aff3c + (uint)(byte)(&DAT_02171608)[iVar4] * 2) =
             *(short *)(&DAT_020aff3c + (uint)(byte)(&DAT_02171608)[iVar4] * 2) +
             (ushort)(byte)(&DAT_02171609)[iVar4];
      }
      iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 0x5c);
      FUN_0206c7fc((byte)(&DAT_0217160a)[iVar1 * 3] + 0x300000,*(int *)(iVar4 + 0xc) >> 8,
                   *(int *)(iVar4 + 0x10) >> 8,0,param_4);
      FUN_0207342c(0x7a,0x53);
    }
  }
  FUN_02083648(param_1);
  return;
}

